#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
//read any text file from currect directory
char const* const fileName = "test.csv";

FILE* file = fopen(fileName, "r"); 

if(!file){
printf("\n Unable to open : %s ", fileName);
return -1;
}

char line[500];
int row=0;
int column = 0;
while (fgets(line, sizeof(line), file)) {
column = 0;
    if(row==0){
        row++;
        continue;
    }
printf("%s", line);

char* value = strtok(line, ", ");

while(value){
    if(column==0){
        printf("Name :");
    }
    else if(column==1){
        printf("Email :");
    }
    else if(column==2){
        printf("Github Link :");
    }
    printf("%s ", value);
    value = strtok(NULL, ", ");
    column++;
}

row++; 
}
fclose(file);
return 0;
}