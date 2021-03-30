#include "complex.h"

void diff(complex_t* cnum1, complex_t* cnum2, complex_t* cnum3){


    cnum3->real=cnum1->real-cnum2->real;
    cnum3->imaginary=cnum1->imaginary-cnum2->imaginary;
    
}