/**
 * @file main.c
 * @author shubham kalihari (you@domain.com)
 * @brief This 
 * @version 0.1
 * @date 2021-04-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE  32

typedef struct user
{
    char name[50];
    char email[100];
    char githublink[200];
} user;
 void fun(FILE *fp){

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
               
                if (column == 0) {
                    printf("Name :");
                }
  
                
                if (column == 1) {
                    printf("\tAccount No. :");
                }
  
               
                if (column == 2) {
                    printf("\tAmount :");
                }
  
                printf("%s", value);
                value = strtok(NULL, ", ");
                column++;
            }
  
            printf("\n");
        }
  
        
        
    }

 }

int main(){

    FILE *fp = NULL;
    char readFileData[MAX_SIZE+MAX_SIZE] = {0};
    
    fp = fopen("test.csv", "r");
    fun(fp);
    fclose(fp);
    
   

}