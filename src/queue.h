#ifndef QUEUE_H
#define QUEUE_H

#include <stdio.h>
#include <stdlib.h>

#define QUEUE_SIZE 8
#define POISON 0xDED

typedef int queue_type;

typedef struct queue
{
    size_t tail = 0;
    size_t head = 0;
    size_t size = QUEUE_SIZE;
    queue_type* queue_ptr = nullptr;
}queue;


void queue_print(queue* queue);
void queue_ctor(queue* queue);
void queue_dtor(queue* queue);


#endif