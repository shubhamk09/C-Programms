
 
// int main()
// {
//     FILE *fileptr1, *fileptr2;
//     char filename[40]="test.csv";
//     char ch;
//     int delete_line, temp = 1;
 
    
//     //open file in read mode
//     fileptr1 = fopen(filename, "r");
//     ch = getc(fileptr1);
//     while (ch != EOF)
//     {
//         printf("%c", ch);
//         ch = getc(fileptr1);
//     }
//     //rewind
//     rewind(fileptr1);
//     printf(" \n Enter line number of the line to be deleted:");
//     scanf("%d", &delete_line);
//     //open new file in write mode
//     fileptr2 = fopen("replica.c", "w");
//     ch = getc(fileptr1);
//     while (ch != EOF)
//     {
//         ch = getc(fileptr1);
//         if (ch == '\n')
//             temp++;
//             //except the line to be deleted
//             if (temp != delete_line)
//             {
//                 //copy all lines in file replica.c
//                 putc(ch, fileptr2);
//             }
//     }
//     fclose(fileptr1);
//     fclose(fileptr2);
//     remove(filename);
//     //rename the file replica.c to original name
//     rename("replica.c", filename);
//     printf("\n The contents of file after being modified are as follows:\n");
//     fileptr1 = fopen(filename, "r");
//     ch = getc(fileptr1);
//     while (ch != EOF)
//     {
//         printf("%c", ch);
//         ch = getc(fileptr1);
//     }
//     fclose(fileptr1);
//     return 0;
// }
// #define MAX 256


// int main(){
//     int lno, ctr = 0;
//         char ch;
//         FILE *fptr1, *fptr2;
// 		char fname[MAX];
//         char str[MAX], temp[] = "test.csv";
// 		printf("\n\n Delete a specific line from a file :\n");
// 		printf("-----------------------------------------\n"); 
// 		printf(" Input the file name to be opened : ");
// 		scanf("%s",fname);		
//         fptr1 = fopen(fname, "r");
//         if (!fptr1) 
// 		{
//                 printf(" File not found or unable to open the input file!!\n");
//                 return 0;
//         }
//         fptr2 = fopen(temp, "w"); // open the temporary file in write mode 
//         if (!fptr2) 
// 		{
//                 printf("Unable to open a temporary file to write!!\n");
//                 fclose(fptr1);
//                 return 0;
//         }
//         printf(" Input the line you want to remove : ");
//         scanf("%d", &lno);
// 		lno++;
//         // copy all contents to the temporary file except the specific line
//         while (!feof(fptr1)) 
//         {
//             strcpy(str, "\0");
//             fgets(str, MAX, fptr1);
//             if (!feof(fptr1)) 
//             {
//                 ctr++;
//                 /* skip the line at given line number */
//                 if (ctr != lno) 
//                 {
//                     fprintf(fptr2, "%s", str);
//                 }
//             }
//         }
//         fclose(fptr1);
//         fclose(fptr2);
//         remove(fname);  		// remove the original file 
//         rename(temp, fname); 	// rename the temporary file to original name
// /*------ Read the file ----------------*/
//    fptr1=fopen(fname,"r"); 
//             ch=fgetc(fptr1); 
//           printf(" Now the content of the file %s is : \n",fname); 
//           while(ch!=EOF) 
//             { 
//                 printf("%c",ch); 
//                  ch=fgetc(fptr1); 
//             }
//         fclose(fptr1);
// /*------- End of reading ---------------*/
//         return 0;
// }



#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1000

/* Function declarations */
void deleteLine(FILE *srcFile, FILE *tempFile, const int line);
void printFile(FILE *fptr);


int main()
{   
    FILE *srcFile;
    FILE *tempFile;

    char path[100];

    int line;


    /* Input file path and line number */
    printf("Enter file path: ");
    scanf("%s", path);

    printf("Enter line number to remove: ");
    scanf("%d", &line);


    /* Try to open file */
    srcFile  = fopen(path, "r");
    tempFile = fopen("delete-line.tmp", "w");


    /* Exit if file not opened successfully */
    if (srcFile == NULL || tempFile == NULL)
    {
        printf("Unable to open file.\n");
        printf("Please check you have read/write previleges.\n");

        exit(EXIT_FAILURE);
    }



    printf("\nFile contents before removing line.\n\n");
    printFile(srcFile);


    // Move src file pointer to beginning
    rewind(srcFile);

    // Delete given line from file.
    deleteLine(srcFile, tempFile, line);


    /* Close all open files */
    fclose(srcFile);
    fclose(tempFile);


    /* Delete src file and rename temp file as src */
    remove(path);
    rename("delete-line.tmp", path);


    printf("\n\n\nFile contents after removing %d line.\n\n", line);

    // Open source file and print its contents
    srcFile = fopen(path, "r");
    printFile(srcFile);
    fclose(srcFile);

    return 0;
}


/**
 * Print contents of a file.
 */
void printFile(FILE *fptr)
{
    char ch;

    while((ch = fgetc(fptr)) != EOF)
        putchar(ch);
}



/**
 * Function to delete a given line from file.
 */
void deleteLine(FILE *srcFile, FILE *tempFile, const int line)
{
    char buffer[BUFFER_SIZE];
    int count = 1;

    while ((fgets(buffer, BUFFER_SIZE, srcFile)) != NULL)
    {
        /* If current line is not the line user wanted to remove */
        if (line != count)
            fputs(buffer, tempFile);

        count++;
    }
}