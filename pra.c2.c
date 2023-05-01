#include<stdio.h>
void main()
{
	int year;
	printf("enter a year:\n");
	scanf("%d",&year);
	if(year%4==0||year%400==0&&year%100==0)
	printf("leap year:%d");
	else
	printf("it is not leap year");
	
	
}
