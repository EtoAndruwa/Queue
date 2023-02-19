#include "queue.h"

void queue_ctor(queue* queue_str)
{
    queue_str->head = 0;
    queue_str->tail = 0;
    queue_str->num_in_queu = 0;
    queue_str->error_code = OK;
    queue_str->queue_ptr = (queue_type*)calloc(queue_str->num_in_queu, sizeof(queue_type));

    check_errors(queue_str, FUNC_NAME, FUNC_LINE, FUNC_FILE);

    for(size_t i = 0; i < queue_str->size; i++)
    {
        queue_str->queue_ptr[i] = POISON;
    }

    check_errors(queue_str, FUNC_NAME, FUNC_LINE, FUNC_FILE);
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
    queue_str->num_in_queu = POISON;
    queue_str->error_code = POISON;
    
    free(queue_str->queue_ptr);
    queue_str->queue_ptr = nullptr;
}