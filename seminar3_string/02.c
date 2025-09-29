#include <stdio.h>

int main() 
{
    printf("Symbol = A, Code = 65\n");
    
    for (int i = 32; i <= 126; i++) {
        printf("Symbol = %c, Code = %d\n", i, i);
    }
}