#include<stdio.h>
#include<string.h>

struct HR
{

	int id;
	char name;
	float salary;
	int commission;
};

void main()
{
	struct HR s1,s2;
	printf("enter id");
	scanf("%d",&s1.id);
	
	printf("enter your name");
	scanf("%s",&s1.name);
	
	printf("enter your salary");
	scanf("%f",&s1.salary);
	
	printf("enter your commission");
	scanf("%f",&s1.commission);
	

	printf("enter id");
	scanf("%d",&s2.id);
	
	printf("enter your name ");
	scanf("%s",&s2.name);
	
	printf("enter your salary");
	scanf("%f",&s2.salary);
	
	printf("enter your commission");
	scanf("%f",&s2.commission);
	
	printf("id=%d  \n",s1.id);
	printf("name=%s \n",s1.name);
	printf("name=%f \n",s1.salary);
	printf("name=%f \n",s1.commission);
	
	
	printf("id=%d  \n",s2.id);
	printf("name=%s \n",s2.name);
	printf("salary=%f \n",s2.salary);
	printf("commission=%f \n",s2.commission);
	
}
	

	