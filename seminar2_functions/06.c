#include <stdio.h>

int trib(int n) {
    if (n == 0 || n == 1) return 0;
    if (n == 2) return 1;
    
    int a = 0, b = 0, c = 1, result = 0;
    
    for (int i = 3; i <= n; i++) {
        result = a + b + c;
        a = b;
        b = c;
        c = result;
    }
    
    return result;
}

int main() {
    printf("%i\n", trib(1));      
    printf("%i\n", trib(5));      
    printf("%i\n", trib(20));    
    printf("%i\n", trib(35));    
    printf("%i\n", trib(38));    
    
    return 0;
}