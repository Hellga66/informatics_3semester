#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float* get_geometric_progression(float a, float r, int n) {
    float* progression = (float*)malloc(n * sizeof(float));
    for (int i = 0; i < n; i++) {
        progression[i] = a * powf(r, i);
    }
    return progression;
}

int main() {
    float a = 2.0f;
    float r = 3.0f;
    int n = 10;
    
    float* progression = get_geometric_progression(a, r, n);
    
    for (int i = 0; i < n; i++) {
        printf("a%d = %.2f\n", i, progression[i]);
    }
    
    free(progression);
    return 0;
}