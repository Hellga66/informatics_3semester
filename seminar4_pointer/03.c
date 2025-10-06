#include <stdio.h>

void cube(float* px) {
    *px = *px * *px * *px;
}

int main() {
    float n;
    scanf("%f", &n);
    
    cube(&n);
    
    printf("%f\n", n);
}