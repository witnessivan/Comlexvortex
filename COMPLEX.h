#ifndef COMPLEX_H
#define COMPLEX_H
#include<iostream>
#include <cmath>
#include <string.h>
using namespace std;
typedef struct vortex * complex;
typedef struct vortex {
	double real;
	double image;

}vortex;

void print_interface(char operation);
complex print_Complex(complex z);
vortex EnterComplex(complex x, complex y);
vortex Sum(complex x, complex y);
vortex Substract(complex x, complex y);
double multiply(complex x, complex y);
#endif
