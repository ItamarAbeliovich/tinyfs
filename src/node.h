#ifndef NODE_H
#define NODE_H

#include <stdint.h>
#include "error.h"

#define NODE_SIZE (0x200)
#define NODE_INDEX_UNDEFINED (-1)

typedef uint32_t node_index_t;

typedef struct node_s {
    char content[NODE_SIZE];
    node_index_t next;
    node_index_t prev;
} node_t;

rc_t get_node(node_index_t index, node_t *out_node);
rc_t set_node(node_index_t index, node_t *new_node);

#endif
