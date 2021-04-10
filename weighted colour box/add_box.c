#include "weighted_box.h"

void add_box(wbox *ptr, int num){
    for (int i = 0; i < num; i++)
    {
        //wbox ex;
        scanf("%d", &ptr[i].unique_id);
        scanf("%d", &ptr[i].length);
        scanf("%d", &ptr[i].breadth);
        scanf("%d", &ptr[i].height);
        scanf("%s", ptr[i].color);
        scanf("%d", &ptr[i].weight);
        //ptr[i]=ex;
    }
}