#include<stdio.h>
void main()
{
    int marks;
    printf("ENTER YOUR MARKS ");
    scanf("%d",&marks);
    if(marks>=90)
    printf("\nGRADE A");
    else if(marks<90 && marks>=80)
    printf("\nGRADE B");
    else if(marks<80 && marks>=70)
    printf("\nGRADE C");
    else if(marks<70 && marks>=60)
    printf("\nGRADE D");
    else if(marks<60 && marks>=50)
    printf("\nGRADE E");
    else if(marks<50 && marks>=40)
    printf("\nGRADE F");
    else
    printf("\nFAILED");
}