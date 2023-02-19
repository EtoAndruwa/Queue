#include "queue.h"

const char* enum_to_string(size_t error_code)
{
    switch(error_code)
    {
        case OK:
            return "OK";
            break;
        case ERR_QUEUE_NULPTR:
            return "ERR_QUEUE_NULPTR";
            break;
        case ERR_INV_HEAD:
            return "ERR_INV_HEAD";
            break;
        case ERR_INV_TAIL:
            return "ERR_INV_HEAD";
            break;
        default:
            return "NEW_ERR_CODE";
            break;
    }
}