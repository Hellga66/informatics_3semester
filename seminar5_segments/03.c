#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char* concat(const char* a, const char* b) {
    int len_a = strlen(a);
    int len_b = strlen(b);
    char* result = (char*)malloc((len_a + len_b + 1) * sizeof(char));
    strcpy(result, a);
    strcat(result, b);
    return result;
}

int main() {
    const char* str1 = "Hello, ";
    const char* str2 = "World!";
    
    char* combined = concat(str1, str2);
    printf("%s\n", combined);
    
    free(combined);
    return 0;
}