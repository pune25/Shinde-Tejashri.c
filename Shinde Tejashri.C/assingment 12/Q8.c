#include <stdio.h>
int stringLength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char str1[100], str2[100];
    int len1, len2;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    
    int i = 0;
    while (str1[i] != '\0') {
        if (str1[i] == '\n') {
            str1[i] = '\0';
            break;
        }
        i++;
    }

    i = 0;
    while (str2[i] != '\0') {
        if (str2[i] == '\n') {
            str2[i] = '\0';
            break;
        }
        i++;  
	}

    len1 = stringLength(str1);
    len2 = stringLength(str2);

    
    if (len1 > len2) {
        printf("The larger string is: %s\n", str1);
    } else if (len2 > len1) {
        printf("The larger string is: %s\n", str2);
    } else {
        printf("Both strings are of equal length.\n");
    }
}
