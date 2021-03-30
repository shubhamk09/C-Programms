#include <stdio.h>

int main(){
    int *arrp[3];
    int arr[3]={1,2,3}, k;
    for(k=0;k<3;k++){
        arrp[k]=arr+k;
    }
    for(k=0;k<3;k++){
        printf("%p \n", arrp[k]);
        printf("%d \n", *(arrp[k]));
    }

}