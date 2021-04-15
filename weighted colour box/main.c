#include "weighted_box.h"

int main(){
    int *count=NULL;
    wbox *ptr=NULL;
    wbox *ptr2=NULL;
    printf("\nEnter the number of boxes\n");
    int num;
    scanf("%d", &num);
    
    count = &num;
    count = (int *)malloc(sizeof(int));
    ptr = (wbox *)malloc((*count) * sizeof(wbox));
    ptr2 = (wbox *)malloc(sizeof(wbox));
    if(ptr==NULL){
        return FAIL;
    }
    add_box(ptr, num);
    print_box(ptr, num);
    add_single(ptr, count);
    print_box(ptr, num);
    ptr2=find_box(ptr, num, 1);
    //free(ptr2);
    free(ptr);
    //free(count);
}
