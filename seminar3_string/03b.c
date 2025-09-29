#include <stdio.h>

int main() {
    char c;
    char *result;
    
    scanf("%c", &c);
    
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
        result = "Letter";
    } else if (c >= '0' && c <= '9') {
        result = "Digit";
    } else {
        result = "Other";
    }
    
    printf("%s\n", result);
}