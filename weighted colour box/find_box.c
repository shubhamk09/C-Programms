#include "weighted_box.h"

wbox* find_box(wbox *ptr, int num, int id){
    wbox *ex=NULL;
    for(int i=0;i<num;i++){
        if(ptr[i].unique_id==id){
            *ex=ptr[i];
        }
    }
    return ex;
}