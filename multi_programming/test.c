#include <stdio.h>
#include "fun.h"

int main(){
    int num1=10, num2=20, num3, num4;
    num3=sum(num1, num2);
    num4=square(num1);
    printf("sum is: %d and square is: %d", num3, num4);
    
}

