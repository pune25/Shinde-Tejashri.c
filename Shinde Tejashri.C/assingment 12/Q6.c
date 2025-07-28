#include <stdio.h>
#include <string.h>

void removeOddIndexChars(char *str) {
    int i, j = 0;
    int len = strlen(str);

    
    for (i = 0; i < len; i++) {
        if (i % 2 == 0) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';  
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    removeOddIndexChars(str);

    printf("String after removing characters at odd indices : %s\n", str);

}