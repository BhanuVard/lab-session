#include<stdio.h>
int main()
{
    int r,c,j,spaces,i;
    printf("Enter the number of rows : ");
    scanf(" %d",&r);
    printf("Inverted Pyramid\n");
    for(i=0;i<r;i++)
    {
        for(spaces=0;spaces<i;spaces++)
        {
            printf(" ");
        }
        for(j=0;j<r-i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
