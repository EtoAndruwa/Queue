#include "queue.h"

void queue_ctor(queue* queue_str)
{
    queue_str->head = 0;
    queue_str->tail = 0;
    queue_str->queue_ptr = (queue_type*)calloc(queue_str->size, sizeof(queue_type));

    for(size_t i = 0; i < queue_str->size; i++)
    {
        queue_str->queue_ptr[i] = POISON;
    }
}

void queue_dtor(queue* queue_str)
{
    for(size_t i = 0; i < queue_str->size; i++)
    {
        queue_str->queue_ptr[i] = POISON;
    }

    queue_str->head = POISON;
    queue_str->tail = POISON;
    queue_str->size = POISON;
    free(queue_str->queue_ptr);
    queue_str->queue_ptr = nullptr;
}

// void push_queue()
// {


// }
// void pop_queue()
// {


// }
