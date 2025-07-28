#include <stdio.h>
#include <string.h>

int main()
 {
    char str[100];
    int n, len, i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }
	 printf("Enter the index (0-based) of the character to remove: ");
    scanf("%d", &n);

    if (n < 0 || n >= len) {
        printf("Invalid index!\n");
        return 1;
    }
    for (i = n; i < len - 1; i++) {
        str[i] = str[i + 1];
    }
    str[len - 1] = '\0'; 

    printf("Modified string: %s\n", str);

}
