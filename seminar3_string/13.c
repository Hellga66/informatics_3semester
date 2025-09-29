#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    
    if (argc != 4) {
        fprintf(stderr, "Error: Wrong number of arguments!\n");
        fprintf(stderr, "Usage: %s <number> <operator> <number>\n", argv[0]);
        return 1;
    }
    
    char *first_operand_str = argv[1];
    char *operator_str = argv[2];
    char *second_operand_str = argv[3];
    
    for (int i = 0; first_operand_str[i] != '\0'; i++) {
        if (first_operand_str[i] < '0' || first_operand_str[i] > '9') {
            if (i == 0 && first_operand_str[i] == '-') continue; // Разрешаем отрицательные числа
            fprintf(stderr, "Error: Operands should be integers!\n");
            return 1;
        }
    }
    
    for (int i = 0; second_operand_str[i] != '\0'; i++) {
        if (second_operand_str[i] < '0' || second_operand_str[i] > '9') {
            if (i == 0 && second_operand_str[i] == '-') continue; // Разрешаем отрицательные числа
            fprintf(stderr, "Error: Operands should be integers!\n");
            return 1;
        }
    }
    
    
    int a = atoi(first_operand_str);
    int b = atoi(second_operand_str);
    
    
    if (strcmp(operator_str, "+") == 0) {
        printf("%d\n", a + b);
    } else if (strcmp(operator_str, "-") == 0) {
        printf("%d\n", a - b);
    } else if (strcmp(operator_str, "*") == 0) {
        printf("%d\n", a * b);
    } else if (strcmp(operator_str, "/") == 0) {
        if (b == 0) {
            fprintf(stderr, "Error: Division by zero!\n");
            return 1;
        }
        printf("%d\n", a / b); 
    } else if (strcmp(operator_str, "%") == 0) {
        if (b == 0) {
            fprintf(stderr, "Error: Division by zero!\n");
            return 1;
        }
        printf("%d\n", a % b);
    } else {
        fprintf(stderr, "Error: Invalid operator!\n");
        return 1;
    }
}