#include <stdio.h>
void mystrupper(char *str) 
{
    int i = 0;
    while (str[i] != '\0') 
	{
        
        if (str[i] >= 'a' && str[i] <= 'z') 
		{
            str[i] = str[i] - ('a' - 'A'); 
        }
        i++;
    }
}


int main() 
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    mystrupper(str);

    printf("Uppercase string: %s\n", str);

}