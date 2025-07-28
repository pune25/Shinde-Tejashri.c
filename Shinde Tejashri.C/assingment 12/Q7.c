#include <stdio.h>
#include <ctype.h>

int countWords(char *str) {
    int count = 0;
    int inWord = 0;

    while (*str) {
        if (isspace(*str)) {
            inWord = 0;  
        } else if (inWord == 0) {
            inWord = 1;  
            count++;
        }
        str++;
    }

    return count;
}

int main() {
    char str[200];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    int wordCount = countWords(str);
    printf("Number of words in the string: %d\n", wordCount);
}