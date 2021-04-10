#include <stdio.h>

int main(){
FILE *fp=fopen("test.csv","a+");
if(fp==NULL){
    printf("Cannot open the file\n");
}
char c;
while((c=getc(fp))!=EOF){
    
    printf("%c",c);

}
rewind(fp);
char name[50];
char email[100];
char gitlink[200];

scanf("%s", name);
scanf("%s", email);
scanf("%s", gitlink);

fprintf(fp,"%s, %s, %s\n",name, email, gitlink);
char text[50];
rewind(fp);
int i=0;
if(fgets(text, 50, fp)!=NULL){
while(text[i]!='\0'){
    putchar(text[i]);
    i++;
}
}

fclose(fp);
}