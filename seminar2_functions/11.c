#include <stdio.h>

#define MAX 100

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

void print_matrix(float matrix[MAX][MAX], int n)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%6.0f ", matrix[i][j]);
        }
        printf("\n");
    }
}

void read_matrix(FILE *file, float matrix[MAX][MAX], int n)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            fscanf(file, "%f", &matrix[i][j]);
        }
    }
}

void write_matrix(FILE *file, float matrix[MAX][MAX], int n)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            fprintf(file, "%6.0f ", matrix[i][j]);
        }
        fprintf(file, "\n");
    }
}

int main()
{
    float A1[MAX][MAX] = {{7, 7, 2}, {1, 8, 3}, {2, 1, 6}};
    float B1[MAX][MAX] = {{5, 2, 9}, {-4, 2, 11}, {7, 1, -5}};
    float C1[MAX][MAX];
    
    multiply(A1, B1, C1, 3);
    print_matrix(C1, 3);
    printf("\n");
    
    float A2[MAX][MAX] = {{5, 2, 9}, {-4, 2, 11}, {7, 1, -5}};
    float B2[MAX][MAX] = {{7, 7, 2}, {1, 8, 3}, {2, 1, 6}};
    float C2[MAX][MAX];
    
    multiply(A2, B2, C2, 3);
    print_matrix(C2, 3);
    printf("\n");
    
    float A3[MAX][MAX] = {{7, 7, 2}, {1, 8, 3}, {2, 1, 6}};
    float B3[MAX][MAX] = {{0, 0, 1}, {0, 1, 0}, {1, 0, 0}};
    float C3[MAX][MAX];
    
    multiply(A3, B3, C3, 3);
    print_matrix(C3, 3);
    printf("\n");
    
    FILE *input_file = fopen("combinedAB.txt", "r");
    FILE *output_file = fopen("result.txt", "w");
    
    int n = 10;
    float A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];
    
    read_matrix(input_file, A, n);
    read_matrix(input_file, B, n);
    
    fclose(input_file);
    
    multiply(A, B, C, n);
    
    write_matrix(output_file, C, n);
    fclose(output_file);
}