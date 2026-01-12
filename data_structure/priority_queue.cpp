// #define USE_STL
#include <cstdio>
#include "priority_queue.h"

#ifdef USE_STL
#include <queue>
#else
#endif

using namespace std;
int main()
{
    #ifdef USE_STL
    priority_queue<int> pq;
    #else
    PriorityQueue pq;
    pq.init();
    #endif

    for(int x = 0; x < 10; x++)
    {
        pq.push(x);
    }

    printf("Size: %ld\n", pq.size());
    printf("Top:  %d\n", pq.top());
    
    for(int x = 0; x < 10; x++)
    {
        printf("Pop:  %d\n", pq.top());
        pq.pop();
    }

    return 0;
}