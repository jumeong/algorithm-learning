#include <cstdio>

#define MAX_HEAP_NUM 8

struct PriorityQueue {
    int heap[MAX_HEAP_NUM + 1];
    int heap_size;

    void init()
    {
        heap_size = 0;
    }

    int size()
    {
        return heap_size;
    }

    int full()
    {
        return heap_size == MAX_HEAP_NUM;
    }

    int empty()
    {
        return heap_size == 0;
    }

    int top()
    {
        if(empty())
        {
            return -9999;
        }
        return heap[1];
    }

    void push(int x)
    {
        if(full())
        {
            printf("[Warning] Heap is Full\n");
            return;
        }
        heap_size++;
        heap[heap_size] = x;
        heapify_up();
    }

    void pop()
    {
        if(empty())
        {
            printf("[Warning] Heap is Empty\n");
            return;
        }
        heap[1] = heap[heap_size];
        heap_size--;
        heapify_down();
    }

    void swap(int idx_a, int idx_b)
    {
        int tmp = heap[idx_a];
        heap[idx_a] = heap[idx_b];
        heap[idx_b] = tmp;
    }

    void heapify_up()
    {
        int index = heap_size;
        while(index != 1)
        {
            int parent_index = index / 2;
            if(heap[parent_index] < heap[index])
            {
                swap(parent_index, index);
                index = parent_index;
            }
            else
            {
                break;
            }
        }
    }

    void heapify_down()
    {
        int index = 1;
        while(index * 2 <= heap_size)
        {
            int child_index = index*2;
            if(child_index + 1 <= heap_size && heap[child_index] < heap[child_index + 1])
            {
                child_index++;
            }

            if(heap[child_index] > heap[index])
            {
                swap(child_index, index);
                index = child_index;
            }
            else
            {
                break;
            }
        }
    }
};