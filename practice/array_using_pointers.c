#include <stdio.h>
void main(){
    int arr[4] = {1, 2, 3, 4};
    int *ptr=arr;
    int i=0;
    while (i<4)
    {
        printf("%d", *(ptr+i));
        i++;
    }
     
}