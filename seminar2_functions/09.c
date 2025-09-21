#include <stdio.h>

void bob(int n);

void alice(int n)
{
    int new_n = n * 3 + 1;
    printf("Alice: %d\n", new_n);
    bob(new_n); 
}

void bob(int n)
{
    if (n == 1) {
        return;
    }
    
    if (n % 2 == 0) {
        int new_n = n / 2;
        printf("Bob: %d\n", new_n);
        bob(new_n); 
    } else {
        
        alice(n);
    }
}

int main()
{
    int start_number = 13;
    printf("%d\n", start_number);
    alice(start_number);
}