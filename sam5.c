#include<stdio.h>
#include<string.h>
int main()
{
    printf("Enter the name of the student :");
    char name[100];
    gets(name);
    printf("\nEnter the number of subjects");
    int n;
    scanf("%d" , &n);
    int sum=0;
    for(int i=1 ; i<=n; i++)
    {
        printf("\nEnter the marks");
        float j;
        scanf("%f ", &j);
        sum=sum+j;
    }
    float average= sum/n;
    printf("\nAverage =%f", average );
    return 0;
}
