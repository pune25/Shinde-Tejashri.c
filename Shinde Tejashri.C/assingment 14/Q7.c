#include<stdio.h>
#include<string.h>
struct Time
{
	 int hour ;
	 int  min;
	 int sec ;
	 
};
void  main()
{
	struct Time d1,d2;
	
	printf("Enter your hour ");
	scanf("%d",&d1.hour);
	
	printf("enter your min ");
	scanf("%d",&d1.min);
	
	printf("enter your sec");
	scanf("%d", &d1.sec);
	
	printf("hour =%d \n min=%d \n sec= %d \n \n \n",d1.hour,d1.min,d1.sec);
	
	d2.hour=12;
	d2.min =30;
	d2.sec=206;
	
	printf("hour= %d \n min =%d \n sec= %d \n",d2.hour,d2.min,d2.sec);
}