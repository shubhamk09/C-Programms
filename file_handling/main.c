#include "qstn2a.h"


 

int main(){

    FILE *fp = NULL;
    fp = fopen("test.csv", "r");
    fun(fp);
    fclose(fp);
    
   

}