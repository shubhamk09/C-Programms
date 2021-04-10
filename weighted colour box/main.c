#include "weighted_box.h"

int main(){
    int *count;
    wbox *ptr=NULL;
    printf("\nEnter the number of boxes\n");
    int num;
    scanf("%d", &num);
    count = (int *)malloc(sizeof(int));
    count=&num;
    ptr = (wbox *)malloc(num * sizeof(wbox));
    if(ptr==NULL){
        return FAIL;
    }
    add_box(ptr, num);
    print_box(ptr, num);
    add_single(ptr, count);
    print_box(ptr, num);
    //free(count);
    free(ptr);
}
