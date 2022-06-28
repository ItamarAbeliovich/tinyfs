#ifndef FILE_H
#define FILE_H

#include <stdint.h>
#include "node.h"
#include "error.h"

#define MAX_FILENAME_LENGTH (0x100)
#define ROOT_NODE (0)
#define READ_MODE 'r'
#define WRITE_MODE 'w'

typedef struct file_s {
    char name[MAX_FILENAME_LENGTH];
    node_index_t root_node_index;
    uint32_t size;
} file_t;

typedef struct file_handle_s {
    file_t *file;
    uint32_t next_byte;
    node_t current_node;
    char mode;
} file_handle_t;

rc_t open(file_t *file, char mode, file_stream_t *out_handle);
rc_t close(file_handle_t *handle);
rc_t read(file_handle_t *handle, uint32_t bytes_to_read, void *out_buffer);
rc_t write(file_handle_t *handle, uint32_t bytes_to_write, void *in_buffer);

#endif
