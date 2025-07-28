#include <stdio.h>
char *my_strchr(const char *s, int c) 
{
    while (*s != '\0' && *s != (char)c) 
	{
        s++;
    }
    return (*s == (char)c) ? (char *)s : NULL;
}

int main(void) 
{
    const char *text = "Hello world";
    char target = 'w';

    char *result = my_strchr(text, target);
    if (result != NULL) 
	{
        printf("Found '%c' at position %td: \"%s\"\n",
               target, result - text, result);
    }
	 else 
	{
        printf("Character '%c' not found in \"%s\"\n", target, text);
    }
    target = 'z';
    result = my_strchr(text, target);
    if (!result) 
	{
        printf("Character '%c' not found in \"%s\"\n", target, text);
    }

    return 0;
}

