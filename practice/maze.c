#include<stdio.h>
#include<string.h>
int main(){
    char dir[200];
    scanf("%s", dir);
    int x=0;
    int y=0;
    for(int i=0;i<strlen(dir);i++){
        char a=dir[i];
        if(a=='L'){
            x--;
        }
        else if (a=='R')
        {
            x++;
        }
        else if(a='D'){
            y--;
        }
        else
        {
           y++;
        }
        
        
    }
    printf("%d %d", x, y);
    return 0;
}