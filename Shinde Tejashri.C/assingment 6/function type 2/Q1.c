#include<stdio.h>
int evenodd();
void main()
{
	int res;
	res=evenodd();
	if(res==1)
	printf("this is even number");
	else
	printf("this is odd number");
}
int evenodd()
{
	int num;
	printf("print any integer");
	scanf("%d",&num);
	
	return(num%2==0);
}