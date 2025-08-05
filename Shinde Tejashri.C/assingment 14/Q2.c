#include<stdio.h>
#include<string.h>

struct employee
{

	int id;
	char name;
	float salary;
};

void main()
{
	struct employee s1,s2;
	printf("enter id");
	scanf("%d",&s1.id);
	
	printf("enter your name");
	scanf("%s",&s1.name);
	
	printf("enter your salary");
	scanf("%f",&s1.salary);
	

	printf("enter id");
	scanf("%d",&s2.id);
	
	printf("enter your name ");
	scanf("%s",&s2.name);
	
	printf("enter your salary");
	scanf("%f",&s2.salary);
	
	printf("Rollno=%d  \n name=%s \n marks=%f\n \n ",s1.id,s1.name,s1.salary);
	printf("Rollno=%d \n name=%s \n marks=%f\n \n",s2.id,s2.name,s2.salary);
	
}
	
