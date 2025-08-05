#include<stdio.h>
#include<string.h>

struct SalesManager
{

	int id;
	char name;
	float salary;
	int incentive;
	int target;
};

void main()
{
	struct SalesManager s1,s2;
	printf("enter id");
	scanf("%d",&s1.id);
	
	printf("enter your name");
	scanf("%s",&s1.name);
	
	printf("enter your salary");
	scanf("%f",&s1.salary);
	
	printf("enter your incentive");
	scanf("%f",&s1.incentive);
	
	printf("enter your target");
	scanf("%f",&s1.target);
	

	printf("enter id");
	scanf("%d",&s2.id);
	
	printf("enter your name ");
	scanf("%s",&s2.name);
	
	printf("enter your salary");
	scanf("%f",&s2.salary);
	
	printf("enter your incentive");
	scanf("%f",&s2.incentive);
	
	printf("enter your target");
	scanf("%f",&s2.target);
	
	
	printf("id=%d  \n",s1.id);
	printf("name=%s \n",s1.name);
	printf("salary=%f \n",s1.salary);
	printf("incentive=%f \n",s1.incentive);
	printf("target=%f \n",s1.target);
	
	
	printf("id=%d  \n",s2.id);
	printf("name=%s \n",s2.name);
	printf("salary=%f \n",s2.salary);
	printf("incentive=%f \n",s2.incentive);
	printf("target=%f \n",s2.target);
	
}
	
