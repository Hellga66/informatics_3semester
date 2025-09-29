#include <stdio.h>
#include <string.h>

int main() {
    char number[1000000];  
    
    scanf("%s", number);
    
    int sum = 0;
    int length = strlen(number);
    
    for (int i = 0; i < length; i++) {
        if (number[i] >= '0' && number[i] <= '9') {
            sum += number[i] - '0';
        }
    }
    
    printf("%d\n", sum);
}