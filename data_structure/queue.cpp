#include "queue.h"

int main()
{
    Queue queue;
    queue.init();

    for(int x = 0; x < MAX_QUEUE_NUM + 1; x++)
    {
        queue.push(x);
    }

    queue.full();

    for(int iter = 0; iter < MAX_QUEUE_NUM + 1; iter++)
    {
        printf("%d\n", queue.pop());
    }

    queue.empty();

    return 0;
}