#include <stdlib.h>
#include <stdio.h>

int main() {
    size_t *p = (size_t*)malloc(sizeof(size_t));
    *p = 123;
    printf("%zu\n", *p);
    free(p);
}