#include<stdio.h>
void main()
{
    float bs,da,ta,ns;                                    /*bs-basic salary, ns-net salary*/
    printf("Enter your salary ");
    scanf("%f",&bs);
    da=10*bs/100;
    ta=12*bs/100;
    ns=bs+da+ta;
    printf("\nNET SALARY = %f",ns);
}