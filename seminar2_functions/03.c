#include <stdio.h>

void print_even(int a, int b)
{
    int start = a;
    if (a % 2 != 0) {
        start = a + 1; 
    }
    
    for (int i = start; i <= b; i += 2) {
        printf("%d ", i);
    }
    printf("\n");
}

int main()
{
    print_even(2, 15);   
    print_even(1, 15);   
    print_even(-7, 3);   
}