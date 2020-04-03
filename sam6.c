#include<stdio.h>
#include<math.h>
void main()
{
    float p,r,t,i;
    printf("Enter the principal P :");                              /*principal*/
    scanf("%f", &p);
    printf("\nEnter the rate R :");                                 /*rate*/
    scanf("%f" ,&r);
    printf("\nEnter the time period T :");                          /*time period*/
    scanf("&f", &t);
    i=p*r*t;                                                        /* simple interest*/
    printf(" Simple Interest I = %f", i);
}