#include "weighted_box.h"

void add_single(wbox *ptr, int *count){
    (*count)++;
    ptr = realloc(ptr, (*count)*sizeof(wbox));
    int i=(*count)-1;
    scanf("%d", &ptr[i].unique_id);
    scanf("%d", &ptr[i].length);
    scanf("%d", &ptr[i].breadth);
    scanf("%d", &ptr[i].height);
    scanf("%s", ptr[i].color);
    scanf("%d", &ptr[i].weight);
    


}