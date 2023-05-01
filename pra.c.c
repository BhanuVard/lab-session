#include<stdio.h>  
void main() {

    int m,n;
    printf("enter numbers:\n");
    scanf("%d%d",&m,&n);
    int t=m;
    m=n;
    n=t;
    printf("\before swapping is: %d %d",m,n);
     printf("\nafter swapping is: %d %d",m,n);
     }
    
