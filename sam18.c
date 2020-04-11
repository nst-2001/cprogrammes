#include<stdio.h>
#include<string.h>
void main()
{
    char text[100];
    int i,len;
    printf("Enter a line");
    scanf("%[^\n]",text);
    len = strlen (text);
    for(i=0;i<len;i++)
    {
        if((text[i] >= 'a') && (text[i] <= 'z'))
        text[i] = text[i] + 'A' - 'a' ;
        else if((text[i] >= 'A') && (text[i] <= 'Z'))
        text[i] = text[i] + 'a' -'A'   ;
    }
    printf("\nEdited text: %s", text);
}