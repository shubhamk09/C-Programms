#include <stdio.h>


struct record
{
    char player[20];
    int age;
    int runs;
};

void main(){
    FILE *fp;
    struct record emp;
    fp= fopen("record.txt","w");
    if(fp==NULL){
        printf("Could not Open");
        
        
    }
    else{
    printf("\nEnter Player name, Age, Runs Scored\n");
    printf("==== ==== ==== ==== ==== ==== ==== =====\n");
    scanf("%s, %d %d", emp.player, &emp.age, &emp.runs);
    fwrite(&emp, sizeof(emp),1, fp);
    
    }
    fclose(fp);
    if((fp=fopen("record.dat","r"))==NULL){
        printf("\nERROR\n");
        
        
    }
    else{
    printf("\nRecord ENtered is");
    fread(&emp, sizeof(emp), 1, fp);
    }
    fclose(fp);

}