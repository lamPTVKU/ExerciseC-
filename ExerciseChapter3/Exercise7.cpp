#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int x, y;
	cout << "Nhap vao so nguyen x: ";
	cin >> x;
	cout << "Nhap vao so nguyen y: ";
	cin >> y;
	int p = x * y, s = x + y;
	long long q = (long long) (pow(s, 2) + pow(p, x + y) * (p + y));
	cout << "Ket qua la: " << q; 
	return 0;
}
