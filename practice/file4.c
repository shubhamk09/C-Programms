#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void removeSpaces(char *str);

int main()
{
    char arr[100]="shubham, abcd, jklm, rhjk";
    char reverse[4][100];
    int i=0,len=0,j=0;
    len = strlen(arr);
    removeSpaces(arr);
   

     for(i=0; i<len; i++)
        {
            if(arr[i]==',')  
            {
               arr[i]='\n' ;
            }
        }
     puts(arr);
}


void removeSpaces(char *str)
{
    // To keep track of non-space character count
    int count = 0;
  
    // Traverse the given string. If current character
    // is not space, then place it at index 'count++'
    for (int i = 0; str[i]; i++)
        if (str[i] != ' ')
            str[count++] = str[i]; // here count is
                                   // incremented
    str[count] = '\0';
}