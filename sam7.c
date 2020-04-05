#include<stdio.h>
void main()
{
    int age,amount;
    printf("Enter the age ");
    scanf("%d",&age);
    if(age<50)
    amount=0;
    else if(age>=50 && age<60)
    amount=5000;
    else
    amount=10000;
    printf("\nAmount= %d",amount);

}