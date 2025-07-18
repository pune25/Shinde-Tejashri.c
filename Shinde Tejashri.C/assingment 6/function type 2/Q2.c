#include<stdio.h>
int isprime();
void main()
{
	int res=isprime();
	if(res=1)
	printf("notprime");
	else
	printf("prime");
}
int isprime()
{
	int no,i;
	printf("enter a number");
	scanf("%d",&no);
	for(i=2;i<=no/2; i++)
	{
		if(no%i==0)
		return 0;
	}
	return 1;
}
		
	
