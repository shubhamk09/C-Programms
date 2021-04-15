#include "stdio.h"
#include "string.h"
#include "stdlib.h"

typedef struct employee
{
    long id;
    char name[50];
    char department[50];
    long salary;
}emp;


void get_details_all(){
    FILE *fp = NULL;
    char check[]="11710408";
    long salary;
    fp = fopen("employee.csv", "r");
     if (!fp)
        printf("Can't open file\n");
    else {
        
        char buffer[1024];
  
        int row = 0;
        int column = 0;
  
        while (fgets(buffer,1024, fp)) {
            column = 0;
            row++;
  
            
            if (row == 1)
                continue;
  
           
            char* value = strtok(buffer, ", ");

            
            while (value) {
               
                if (column == 0 && strcmp(value, check)!=0) {
                    // printf("%s", value);
                    // int result;

                    // // comparing strings str1 and str2
                    // result = strcmp(value, check);
                    // printf(" strcmp(str1, str2) = %d\n", result);
                    
                    break;
                }
                if(column==3){
                    salary=atol(value);
                }
  
                
                value = strtok(NULL, ", ");
                column++;
            }
            
            // printf("\n");
        }
  
        printf("%ld", salary);
        fclose(fp);
    } 
}

int main(){

    get_details_all();
    return 0;
}




// if(column==0 && value!=check){
//                    break; 
//                }
               
//                 printf("%s", value);
//                 value = strtok(NULL, ", ");
//                 column++;