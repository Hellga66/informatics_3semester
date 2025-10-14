#include <stdio.h>
#include <stdlib.h>

#define SIZE 1000000000

int main() {
    char* data = (char*)malloc(SIZE * sizeof(char));
    
    getchar();
    printf("1. Setting first char to 'A'\n");
    data[0] = 'A';
    
    getchar();
    printf("Setting last char to 'B'\n");
    data[SIZE - 1] = 'B';
    
    getchar();
    printf("Printing first char = %c\n", data[0]);
    
    getchar();
    printf("Printing last char = %c\n", data[SIZE - 1]);
    
    getchar();
    printf("Setting many chars to X\n");
    for (int i = 0; i < SIZE; i += 1000)
        data[i] = 'X';
    
    getchar();
    printf("Printing all set chars:\n");
    for (int i = 0; i < SIZE; i += 1000)
        printf("%c ", data[i]);
    
    getchar();
    free(data);
}