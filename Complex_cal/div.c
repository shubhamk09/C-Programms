#include "complex.h"

void div(complex_t* cnum1, complex_t* cnum2, complex_t* cnum3){
    
    if(cnum2->real==0 && cnum2->imaginary==0)
    {
        cnum3->real=0;
        cnum3->imaginary=0;
        
    }
    cnum3->real = (cnum1->real * cnum2->real + cnum1->imaginary * cnum2->imaginary) / ( cnum2->real * cnum2->real + cnum2->imaginary * cnum2->imaginary);
    cnum3->imaginary = (cnum1->imaginary* cnum2->real - cnum1->real * cnum2->imaginary) / (cnum2->real * cnum2->real + cnum2->imaginary * cnum2->imaginary);
    
}