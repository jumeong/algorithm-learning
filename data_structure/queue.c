#include "queue.h"

int main()
{
    Queue queue;
    queue.init();

    for(int x = 0; x < MAX_QUEUE_NUM + 1; x++)
    {
        queue.push(x);
    }

    for(int iter = 0; iter < MAX_QUEUE_NUM + 1; iter++)
    {
        printf("%d", queue.pop());
    }

    return 0;
}