#include <stdio.h>
void mystrlower(char *str)
 {
    int i = 0;
    while (str[i] != '\0')
	 {
        
        if (str[i] >= 'A' && str[i] <= 'Z') 
		{
            str[i] = str[i] + ('a' - 'A'); 
        }
        i++;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    mystrlower(str);

    printf("Lowercase string: %s\n", str);
}
