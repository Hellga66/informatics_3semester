#include <stdio.h>

#define MAX 100

void assign(float A[MAX][MAX], float B[MAX][MAX], int n)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            A[i][j] = B[i][j];
        }
    }
}

void multiply(float A[MAX][MAX], float B[MAX][MAX], float C[MAX][MAX], int n)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            C[i][j] = 0;
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void power(float A[MAX][MAX], float C[MAX][MAX], int n, int k)
{
    float B[MAX][MAX];
    float temp[MAX][MAX];
    
    assign(B, A, n);
    assign(C, A, n);
    
    for (int i = 2; i <= k; i++) {
        multiply(A, B, temp, n);  
        assign(C, temp, n);       
        assign(B, temp, n);       
    }
}

void print_matrix(float matrix[MAX][MAX], int n)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%8.0f ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    float A1[MAX][MAX] = {{7, 7, 2}, {1, 8, 3}, {2, 1, 6}};
    float C1[MAX][MAX];
    power(A1, C1, 3, 4);
    print_matrix(C1, 3);
    printf("\n");
    
    float A2[MAX][MAX] = {{0, 1, 0}, {1, 0, 1}, {1, 0, 0}};
    float C2[MAX][MAX];
    power(A2, C2, 3, 70);
    print_matrix(C2, 3);
    printf("\n");
    
    float A3[MAX][MAX] = {{0, 1, 0}, {0, 0, 1}, {1, 0, 0}};
    float C3[MAX][MAX];
    power(A3, C3, 3, 1000);
    print_matrix(C3, 3);
    printf("\n");
    
    
}