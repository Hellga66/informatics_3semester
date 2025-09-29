#include <stdio.h>
#include <string.h>

void safe_strcpy(char dest[], size_t dest_size, const char src[]) {
    
    if (dest_size == 0) {
        return;
    }
    
    size_t i;
    for (i = 0; i < dest_size - 1 && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    
    dest[i] = '\0';
}

