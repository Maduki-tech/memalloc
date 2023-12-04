#ifndef MY_ALLOCATOR_H
#define MY_ALLOCATOR_H

#include <stddef.h>

void* my_malloc(size_t size);
void my_free(void* ptr);
void* my_realloc(void* ptr, size_t size);
void* my_calloc(size_t nmemb, size_t size);

#endif // MY_ALLOCATOR_H

