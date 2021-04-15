#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void toString(char str[], long num);
int main()
{
  	char str[100]="11710408, shubham, software, 400020";
    char ch=',';
  	int i, index;
  	index = -1;
 
  	printf("\n Please Enter any String :  ");
  	// scanf("%s",str);
  	
  	printf("\n Please Enter the Character that you want to Search for :  ");
  	// scanf("%c", &ch);
  	
  	for(i = 0; i <= strlen(str); i++)
  	{
  		if(str[i] == ch)  
		{
  			index = i;	
 		}
	}
    if(index == -1)
  	{
  		printf("\n Sorry!! We haven't found the the Search Element '%c' ", ch);
	}
	else
	{
		printf("\n The Last Occurrence of the Search Element '%c'' at Position %d ", ch, index + 1);
	}
    char str2[100];
    for(int i=0;i<29;i++){
        str2[i]=str[i];
    }

    long num=453698;
    char buff[20];
    toString(buff, num);

    printf("\n%s", str2);	
    strcat(str2, buff);
    printf("\n%s", str2);	
  	return 0;
}

void toString(char str[], long num){
    long i, rem, len = 0, n;
 
    n = num;
    while (n != 0)
    {
        len++;
        n /= 10;
    }
    for (i = 0; i < len; i++)
    {
        rem = num % 10;
        num = num / 10;
        str[len - (i + 1)] = rem + '0';
    }
    str[len] = '\0';

}