#include <stdio.h>

unsigned long long arrangements(int n, int k)
{
    unsigned long long result = 1;
    for (int i = 0; i < k; i++) {
        result *= (n - i);
    }
    
    return result;
}

int main()
{    
    printf("%llu\n", arrangements(5, 2));      
    printf("%llu\n", arrangements(20, 10));  
    printf("%llu\n", arrangements(30, 12));  
    printf("%llu\n", arrangements(60, 11)); 
}