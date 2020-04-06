#include<stdio.h>
void main()
{
    int i,num;
    printf("ENTER A NUMBER");
    scanf(" %d", &num);
    do
    {
        printf("\n%d",--num);
    }while(num>0);
}