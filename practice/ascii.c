#include <stdio.h>  
#include <string.h>
int main()  
{  
    char str[200];
    char str2[200]="";        
    scanf("%s", str); 
    int num;
    scanf("%d",&num);
    for(int i=0;i<strlen(str);i++){
        char ch = str[i];
        int a=ch;
        char temp;
        if(a>=65 && a<=90){
            a=a+num;
            if (a>90){
                int k=a-90;
                a=64+k;
            }
            temp=a;
            strncat(str2, &temp, 1);

        }
        else if(a>=97 && a<=122){
            a=a+num;
            if (a>122){
                int k=a-122;
                a=96+k;
            }
            temp=a;
            strncat(str2, &temp, 1);

        }
        else if(a>=48 && a<=57){
            a=a+num;
            if (a>57){
                int k=a-57;
                a=47+k;
            }
            temp=a;
            strncat(str2, &temp, 1);

        }
        else{
            temp=a;
            strncat(str2, &temp, 1);
        }
    } 
    printf("%s", str2);     
    return 0;  
}  


