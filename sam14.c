#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter three nos ");
    scanf("%d",&a);
    scanf("\n%d",&b);
    scanf("\n%d",&c);
    int x = (a>b) ? ( (a>c) ? a : c) : ( (b>c) ? b : c);
    printf("/nlargest number = %d ",x);
}
