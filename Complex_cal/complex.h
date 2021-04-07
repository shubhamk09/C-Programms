#ifndef __COMPLEX_H__
#define __COMPLEX_H__

#include <stdio.h>
//#include <conio.h>

typedef struct complex_t {

float real;

float imaginary;

} complex_t;

void sum(complex_t* cnum1, complex_t* cnum2, complex_t* cnum3);
void diff(complex_t* cnum1, complex_t* cnum2, complex_t* cnum3);
void div(complex_t* cnum1, complex_t* cnum2, complex_t* cnum3);
void product(complex_t* cnum1, complex_t* cnum2, complex_t* cnum3);

#endif