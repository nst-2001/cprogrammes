#include<stdio.h>
void main()
{
    int num;
    printf("ENTER AN INTEGER ");
    scanf("%d",&num);
    if(num>0)
    printf("Positive Integer");
    else if(num==0)
    printf("Zero");
    else
    printf("Negative Integer");
}