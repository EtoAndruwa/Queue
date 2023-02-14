#include "queue.h"

void queue_print(queue* queue_str)
{  
    printf("queue_str->head: %ld\n", queue_str->head);
    printf("queue_str->tail: %ld\n", queue_str->tail);
    printf("queue_str->size: %ld\n", queue_str->size);

    for(size_t i = 0; i < queue_str->size; i++)
    {
        printf("queue[%ld] = %d\n", i, queue_str->queue_ptr[i]);
    }
}