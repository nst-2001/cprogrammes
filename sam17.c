#include<stdio.h>
#include<string.h>
void main()
{
    char str[100];
    int i,count=0,l;
    printf("ENTER A SENTENCE : ");
    scanf("%[^\n]",str);
    l = strlen(str);
    for(i=0;i<l;i++)
    {
        switch(str[i])
        {
        case 'A':
      
        case 'a' :
       
        case 'E' :
     
        case 'e' :
       
        case 'I' :
     
        case 'i' :
     
        case 'O' :

        case 'o' :
       
        case 'U' :
  
        case 'u' :
        count++;
        }
    }
        printf(" THE NUMBER OF VOWELS = %d",count);
    
}