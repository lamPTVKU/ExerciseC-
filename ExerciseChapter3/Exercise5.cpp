#include <iostream>
using namespace std;
int main() {
	int vO , a, t;
	cout << "Nhap vao van toc ban dau: ";
	cin >> vO;
	cout << "Nhap vao  gia toc: ";
	cin >> a;
	cout << "Nhap vao thoi gian xe chay: ";
	cin >> t;
	cout << "Van toc cuoi cua xe la: " << (vO + a * t);
}
