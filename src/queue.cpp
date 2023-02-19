#include "queue.h"

void push_queue(queue* queue_str, queue_type val)
{   
    check_errors(queue_str, FUNC_NAME, FUNC_LINE, FUNC_FILE);

    if(check_tail_head(queue_str))
    {   
        queue_str->queue_ptr[queue_str->tail] = val;
        queue_str->tail++;
        queue_str->num_in_queu++;
    }
    else
    {
        printf("queue if full! pls pop\n");
    }

    check_errors(queue_str, FUNC_NAME, FUNC_LINE, FUNC_FILE);
}

queue_type pop_queue(queue* queue_str)
{
    check_errors(queue_str, FUNC_NAME, FUNC_LINE, FUNC_FILE);

    if(queue_str->num_in_queu != 0)
    {   
        queue_type val_pop = queue_str->queue_ptr[queue_str->head];
        queue_str->queue_ptr[queue_str->head] = POISON;
        queue_str->head++;
        queue_str->num_in_queu--;
        printf("popped value: %d\n", val_pop);
        return val_pop;
    }
    else
    {
        printf("queue is empty! pls push\n");
    }

    check_errors(queue_str, FUNC_NAME, FUNC_LINE, FUNC_FILE);
}

void logic(queue* queue_str)
{
    size_t command_id = 0;
    queue_type val = 0;
    while(command_id != 4)
    {
        printf("1 - push, 2 - pop, 3 - print, 4 - exit\n");
        scanf("%ld", &command_id);
        switch (command_id)
        {
        case 1:
            if(scanf(" %d", &val))
            {
                push_queue(queue_str, val);
            }
            else
            {   
                val = 0;
                printf("invalid argument\n");
            }
            break;
        case 2:
            pop_queue(queue_str);
            break;
        case 3:
            queue_print(queue_str);
            break;
        case 4:
            break;
        default:
            printf("invalid command id, try again\n");
            break;
        } 
    }
}


