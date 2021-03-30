#include "complex.h"
#include "test_complex.h"


int main(){
    complex_t c1, c2, result;
    c1.real=4;
    c1.imaginary=-1;

    c2.real=6;
    c2.imaginary=-2;

    sum(&c1, &c2, &result);
    printf("sum is: %f %f \n", result.real, result.imaginary);

    diff(&c1, &c2, &result);
    printf("difference is: %f %f \n", result.real, result.imaginary);

    product(&c1, &c2, &result);
    printf("product is: %f %f \n", result.real, result.imaginary);

    div(&c1, &c2, &result);
    printf("Division is: %f %f \n", result.real, result.imaginary);

    test_main();

    return 0;

}