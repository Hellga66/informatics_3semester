#include <stdio.h>
#include <ctype.h>

void encrypt(char* str, int k) {
    k = k % 26;
    if (k < 0) k += 26; 
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i])) {
            str[i] = 'A' + (str[i] - 'A' + k) % 26;
        } else if (islower(str[i])) {
            str[i] = 'a' + (str[i] - 'a' + k) % 26;
        }
    }
}

int main() {
    char text[1000];
    int shift;

    scanf("%d", &shift);
    
    getchar();
   
    fgets(text, sizeof(text), stdin);
    
    if (text[strlen(text) - 1] == '\n') {
        text[strlen(text) - 1] = '\0';
    }
    
    encrypt(text, shift);

    printf("%s\n", text);

}