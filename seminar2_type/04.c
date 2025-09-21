#include <stdio.h>

double approximate_pi(int n)
{
    double sum = 0.0;
    
    for (int i = 1; i <= n; i++) {
        double term = 1.0 / (2 * i - 1);
        if (i % 2 == 0) {
            sum -= term;  
        } else {
            sum += term;  
        }
    }
    
    return 4 * sum;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%.10f\n",approximate_pi(n));
}