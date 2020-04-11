#include<stdio.h>
#include<string.h>
void main()
{
    char text[100], substr[30] ;
    int text_len , sub_len , i , j ;
    printf("Enter the main string :");
    gets(text);
    printf("\nEnter the sub string to be searched :");
    gets(substr);
    text_len = strlen(text);
    sub_len = strlen(substr);

    for(i=0; i<=text_len - sub_len ; i++)
    {
        for(j=0 ; j<sub_len ; j++)
        
            if(text[i+j] != substr[j])
            break;
            else
            continue;
            
            if( j == sub_len)
            printf("\nTHE SUBSTRING IS FROM %d ", i);
        
   }
}