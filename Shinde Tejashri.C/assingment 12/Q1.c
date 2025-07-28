#include <stdio.h>
#include <string.h>

int main()
 {
    char str[100];  
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 

    
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') 
	{
        str[len - 1] = '\0';
    }

    for (i = 0; str[i] != '\0'; i++) 
	{
        if (str[i] == 'a') {
            str[i] = '$';
        }
    }

    printf("Modified string: %s\n", str);

}