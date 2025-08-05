#include<stdio.h>
#include<string.h>

struct student
{

	int roll_no;
	char name[20];
	float marks;
};

void main()
{
	struct student s1,s2;
	printf("enter rollno ");
	scanf("%d",&s1.roll_no);
	
	printf("enter your name ");
	scanf("%s",&s1.name);
	
	printf("enter your marks ");
	scanf("%f",&s1.marks);
	
	
	
	printf("enter rollno");
	scanf("%d",&s2.roll_no);
	
	printf("enter your name ");
	scanf("%s",&s2.name);
	
	printf("enter your marks ");
	scanf("%f",&s2.marks);
	
	printf("Rollno=%d  \n name=%s \n marks=%f\n \n ",s1.roll_no,s1.name,s1.marks);
	printf("Rollno=%d \n name=%s \n marks=%f\n \n",s2.roll_no,s2.name,s2.marks);
	
}
	
	
	