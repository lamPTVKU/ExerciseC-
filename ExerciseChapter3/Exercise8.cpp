#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main() {
	const double PI = 3.14159265358979;
	double angle;
	cout << "Nhap vao goc can tinh: ";
	cin >> angle;
	cout << "Sin(" << angle << ") = " <<  setprecision (2) << sin((angle/180.0) * PI);
	cout << "\nCos(" << angle << ") = " << setprecision (2) << cos((angle/180.0) * PI);
	cout << "\nTan(" << angle << ") = " << setprecision (2) << ((angle/180.0) * PI);
	cout << "\nCotan(" << angle << ") = " << setprecision (2) << (1.0 / tan((angle/180.0) * PI));
	return 0;	
}
