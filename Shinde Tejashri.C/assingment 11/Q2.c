#include<stdio.h>
#include<string.h>
int mystrlen(const char*str)
{
		int length = 0;
		while (str[length] != '\0')
		{
			length++;	
			}
			return length;
}
int main()
{
	char input[100];
	printf("enter a string");
	int length = mystrlen(input);
	
	printf("length of string is %d\n");
}