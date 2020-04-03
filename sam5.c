#include<stdio.h>
#include<string.h>
int main()
{
    printf("Enter the name of the student :");
    char name[100];
    gets(name);
    printf("Enter marks1");
    int m1;
    scanf("%d",&m1);
    printf("Enter marks2");
    int m2;
    scanf("%d", &m2);
    float average;
    average =(m1+m2)/2;
    printf("average = %f", average);
}