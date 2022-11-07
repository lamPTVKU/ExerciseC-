#include <iostream> 
#include <String>
using namespace std;
int main() {
	string str;
	cout << "Enter a String: ";
	getline(cin, str);
	cout << "Length of your string: " <<  str.length();
	return 0;
}
