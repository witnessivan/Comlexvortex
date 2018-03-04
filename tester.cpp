#include"COMPLEX.h"
int main() {
	vortex z1, z2, z3;
	double z;
	char select = ' ';
	print_interface(select);
	cin >> select;
	switch (select) {
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
		   cout << "ERROR" << select << "not supported";
		   break;
	   }
	}
	system("pause");
}
