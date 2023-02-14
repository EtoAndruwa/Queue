#ifndef QUEUE_H
#define QUEUE_H

#include <stdio.h>
#include <stdlib.h>

#define QUEUE_SIZE 256
#define POISON 0xDED

typedef int queue_type;

typedef struct queue
{
    unsigned char tail = 0;
    unsigned char head = 0;
    size_t size = QUEUE_SIZE;
    size_t num_in_queu = 0;
    queue_type* queue_ptr = nullptr;
}queue;


void queue_print(queue* queue);
void queue_ctor(queue* queue);
void queue_dtor(queue* queue);
queue_type pop_queue(queue* queue_str);
void push_queue(queue* queue_str, queue_type val);
size_t check_tail_head(queue* queue_str);
void logic(queue* queue_str);


#endif