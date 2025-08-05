#include<stdio.h>
#include<string.h>

struct Admin
{

	int id;
	char name;
	float salary;
	int allowance;
};

void main()
{
	struct Admin s1,s2;
	printf("enter id");
	scanf("%d",&s1.id);
	
	printf("enter your name");
	scanf("%s",&s1.name);
	
	printf("enter your salary");
	scanf("%f",&s1.salary);
	
	printf("enter your allowance");
	scanf("%f",&s1.allowance);
	

	printf("enter id");
	scanf("%d",&s2.id);
	
	printf("enter your name ");
	scanf("%s",&s2.name);
	
	printf("enter your salary");
	scanf("%f",&s2.salary);
	
	printf("enter your allowance");
	scanf("%f",&s2.allowance);
	
	printf("id=%d  \n name=%s \n salary=%f\n allowance\n ",s1.id,s1.name,s1.salary,s1.allowance);
	printf("id=%d \n name=%s \n salary=%f\n allowance\n",s2.id,s2.name,s2.salary,s2.allowance);
	
}
	