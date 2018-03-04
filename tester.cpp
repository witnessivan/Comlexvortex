#include"COMPLEX.h"
int main() {
	vortex z1, z2, z3;
	double z;
	char operation = ' ';
	print_interface(select);
	cin >> operation;
	switch (operation) {
	   case'+': {
		  EnterComplex(&z1, &z2);
		  z3 = Sum(&z1, &z2);
		  print_Complex(&z3);
		  break;

	   }
	   case'-': {
		   EnterComplex(&z1, &z2);
		   z3 = Substract(&z1, &z2);
		   print_Complex(&z3);
		   break;
	   }
	   case'*': {
		   EnterComplex(&z1, &z2);
		   z = multiply(&z1, &z2);
		   cout << "Multiplication = " << z << endl;
		   break;
	   }
	   default: {
		   cout << "ERROR" << operation << "not supported";
		   break;
	   }
	}
	system("pause");
}
