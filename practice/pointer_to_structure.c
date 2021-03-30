#include <stdio.h>
struct book
{
    char name[50];
    char author[50];
    int pages;
};

struct boy{
    char *name;
    int *age;
    int *height;
};

int main(){
    struct book bk1 = {"Living my life", "Shubham Kalihari", 536};
    struct book *ptr;
    struct boy *ptrb;
    ptr=&bk1;
    struct book *ptr;

    char nm[20]="shubham";
    int ag = 21;
    int ht = 184.6;

    ptrb->name=nm;
    ptrb->age=ag;
    ptrb->height=ht;


}
