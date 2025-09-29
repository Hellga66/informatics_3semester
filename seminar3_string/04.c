#include <stdio.h>
#include <string.h>

int main() {
    char word1[100], word2[100];
    
    scanf("%s %s", word1, word2);
    
    int len1 = strlen(word1);
    int len2 = strlen(word2);
    int max_len = len1 > len2 ? len1 : len2;
    
    for (int i = 0; i < max_len; i++) {
        if (i < len1) {
            printf("%c", word1[i]);
        }
        if (i < len2) {
            printf("%c", word2[i]);
        }
    }
    
    printf("\n");
}