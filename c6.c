#include<stdio.h>
int main()
{

 int n;
 printf("enter age");
 scanf("%d",&n);
  if(n>=18)
 {
 	printf("eligible to vote");
 }
 if(n<18)
 {
 	printf("not eligible to vote:%d");
}
 return 0;
 
 }
