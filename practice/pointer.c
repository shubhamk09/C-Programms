#include <stdio.h>
void main(){
    int a, b, c, d, *ap, *bp;
    printf("Enter two numbers");
    scanf("%d %d", &a, &b);
    ap=&a;
    bp=&b;
    c=a+b;
    d=*ap+*bp;
    printf("\nSum without pointer: %d", c);
    printf("\nSum without pointer: %d", d);

// Void pointer
    int f;
    void *pt=&f;
    *(int *)pt=12;
    printf("\nvalue in void pointer is: %d", *(int *)pt);


}