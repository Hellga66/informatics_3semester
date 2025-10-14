#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
    char *p = (char*)malloc(10 * sizeof(char));
    strcpy(p, "Elephant");
    printf("%s\n", p);
    free(p);
}