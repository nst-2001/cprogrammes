#include <stdio.h>
#include <string.h>
 
void main()
{
    char text[100]; 
    int i,alp=0,spec=0,dig=0;
 
    printf("Enter  the string : ");
    gets(text);
     
    for(i=0;text[i];i++)  
    {
        if((text[i]>=65 && text[i]<=90)|| (text[i]>=97 && text[i]<=122) )
          alp++;
        else if(text[i]>=48 && text[i]<=57)
         dig++;
        else
         spec++;
 
 	}
 	
     
    printf("\nNo of Alphabets = %d\n",alp);
    printf("\nNo of Digits = %d\n",dig);
    printf("\nNo of Special characters = %d", spec);
    
}