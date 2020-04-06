#include<stdio.h>
void main()
{
    int num,i,j;
    printf("Enter a number");
    scanf("%d",&num);
    for(i=1;i<=10;i++)
    {
        printf("\n%d X %d = %d",i,num,i*num);
    }
}