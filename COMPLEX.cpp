#include"COMPLEX.h"


void print_interface(char operation) {
	cout << "operation-comlex number" << endl;
	cout << "+.summ" << endl;
	cout << "-.subsract" << endl;
	cout << "*.multiply" << endl;
}

 complex print_Complex(complex z)
{
	cout << "Complex number  (" << z->real << ';' << z->image << ')' << endl;

	return z;
}
vortex EnterComplex(complex x, complex y) {
	cout << "Enter the first complex number: real/imag" << endl;
	cin >> x->real >> x->image;

	cout << "Enter the second complex number: real/imag" << endl;
	cin >> y->real >> y->image;

	return *x, *y;
}
vortex Sum(complex x, complex y)
{
	vortex z;

	z.real = x->real + y->real;
	z.image = x->image + y->image;

	return z;
}
vortex Substract(complex x, complex y)
{
	vortex z;

	z.real = x->real - y->real;
	z.image = x->image - y->image;

	return z;
}

double multiply(complex x, complex y)
{
	double z;
	z = (x->real * y->real - x->image * y->image) + (x->real * y->image + y->real * x->image);
	return z;
}
