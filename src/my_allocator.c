#include "my_allocator.h"
#include <stdio.h>
// Include other necessary headers

// Implement the functions declared in my_allocator.h
void *my_malloc(size_t size) {
    printf("%zu\n", size);

    return NULL;
}

void my_free(void *ptr) {}

void *my_realloc(void *ptr, size_t size) { return NULL; }
void *my_calloc(size_t nmemb, size_t size) { return NULL; }
