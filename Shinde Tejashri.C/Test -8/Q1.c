#include<stdio.h>

int main()
{
	int userid=1234;
	int password=1425;
	
	int enteruserid,enterpassword;
	
	printf("enter user id");
	scanf("%d",&enteruserid);
	
	printf("enter password");
	scanf("%d",&enterpassword);
	
	if(userid=enteruserid&&password==enterpassword)
	{
		printf("login successful");
	}
	else
	{
		printf("login fail");
	}
	
	}