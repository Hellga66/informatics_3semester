#include <stdio.h>
#include <string.h>

int is_palindrom(char str[]) {
    int length = strlen(str);
    
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            return 0;  
        }
    }
    return 1;  
}

int main() {
    char word[100];
    
    scanf("%s", word);
    
    if (is_palindrom(word)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
}