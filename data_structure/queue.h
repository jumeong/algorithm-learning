#include <stdio.h>

#define MAX_QUEUE_NUM 10
struct Queue {
    int data[MAX_QUEUE_NUM];
    int head, tail, size;

    void init() 
    {
        head = 0;
        tail = 0;
        size = 0;
    }

    int empty()
    {
        return size == 0;
    }

    int full()
    {
        return size == MAX_QUEUE_NUM;
    }

    void push(int x)
    {
        if(queue.full()) {
            printf("Input %d Queue Full\n", x);
            return;
        }
        data[tail] = x;
        tail = (tail + 1) % MAX_QUEUE_NUM;
    }
    
    int pop()
    {
        if(queue.empty()) {
            printf("Queue Empty\n");
            return -9999;
        }
        int val = data[head];
        head = (head + 1) % MAX_QUEUE_NUM;
        return val;
    }
};