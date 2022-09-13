//
// Created by Alexander Michalak on 9/13/22.
//

#ifndef CLOX_CHUNK_H
#define CLOX_CHUNK_H

#include "common.h"

typedef enum {
    OP_RETURN,
} OpCode;

typedef struct {
    int count;
    int capacity;
    uint8_t *code;
} Chunk;

void init_chunk(Chunk *chunk);


#endif //CLOX_CHUNK_H
