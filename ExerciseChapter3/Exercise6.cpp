// 

#include <iostream>
#include <iomanip>
#include <String>
using namespace std;
int main() {
	cout << setw(10) << "Gtri x" << setw(10) << "Gtri y" << setw(12) << "Bieu Thuc" << setw(10) << "Ket Qua"; 
	cout << "\n" << setw(7)<< "18|" << setw(9) << "2|" << setw(12) << "A=y+3" << setw(11) << "|A=5";
	cout << "\n" << setw(7)<< "18|" << setw(9) << "2|" << setw(12) << "B=y-3" << setw(11) << "|B=0";
	cout << "\n" << setw(7)<< "18|" << setw(9) << "2|" << setw(12) << "C=y*3" << setw(12) << "|C=10";	
	cout << "\n" << setw(7)<< "18|" << setw(9) << "2|" << setw(12) << "D=x/y" << setw(11) << "|D=9";
	cout << "\n" << setw(7)<< "18|" << setw(9) << "2|" << setw(12) << "E=x%y" << setw(11) << "|E=0";
	
	return 0;
}
