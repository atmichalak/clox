//
// Created by Alexander Michalak on 9/13/22.
//

#include <stdlib.h>

#include "chunk.h"

void init_chunk(Chunk *chunk) {
    chunk->count = 0;
    chunk->capacity = 0;
    chunk->code = NULL;
}
