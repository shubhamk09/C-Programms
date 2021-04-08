#include <stdio.h>

int main(){
FILE *fp=fopen("test.csv","a+");
if(fp==NULL){
    printf("Cannot open the file\n");
}


fclose(fp);
}