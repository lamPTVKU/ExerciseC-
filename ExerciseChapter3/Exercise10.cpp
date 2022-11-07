

// write a program to enter a two-digit number, calculate total of two and print the result to the screen
#include <iostream>
using namespace std;
int main() {
	int number;
	cout << "Nhap vao so co 2 chu so: ";
	cin >> number;
	int total = number / 10 + number % 10;
	cout << "Tong cac chu so cua so da nhap la: " << total;
	return 0;	
}


