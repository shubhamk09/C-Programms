#include "weighted_box.h"

void print_box(wbox *ptr, int num){
    for (int i = 0; i < num; i++)
    {
        printf("%d\t", ptr[i].unique_id);
        printf("%d\t", ptr[i].length);
        printf("%d\t", ptr[i].breadth);
        printf("%d\t", ptr[i].height);
        printf("%s\t", ptr[i].color);
        printf("%d\n", ptr[i].weight);
    }
}