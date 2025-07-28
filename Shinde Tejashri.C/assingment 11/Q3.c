 #include <stdio.h>
char* mystrcat(char* dest, const char* src)
 {
    char* ptr = dest;

    while (*ptr != '\0')
	 {
        ptr++;
    }

    while (*src != '\0') 
	{
        *ptr = *src;
        ptr++;
        src++;
    }

    *ptr = '\0';

    return dest;
}

int main() 
{
    char str1[100] = "tejashri, ";
    char str2[] = "shinde!";

    mystrcat(str1, str2);

    printf("Concatenated string: %s\n", str1);

    return 0;
}
