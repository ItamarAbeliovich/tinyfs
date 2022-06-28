#ifndef ERROR_H
#define ERROR_H

#include <stdint.h>

typedef enum rc_e {
    UNINITIALIZED,
    SUCCESS,
    BAD_NODE_INDEX,
    BAD_FILENAME,
    END_OF_FILE
} rc_t;

#endif
