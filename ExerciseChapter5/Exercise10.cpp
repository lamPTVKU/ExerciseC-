

#include <iostream>
#include <math.h>
using namespace std;
int main() 
{
	int n;
	cout << "Enter number: ";
	cin >> n;
	int temp1 = n, temp2 = n;
	
	int dem = 0;
	while(temp1 > 0) {
		dem++;
		temp1 /= 10;
	}
	int newNum = 0;
	while(temp2 > 0)
	{
		newNum += (temp2 % 10) * pow(10, (double)(dem-1));
		dem--;
		temp2 /= 10;
	}
	if(newNum == n)
	{
		cout << n << " is Palindrome number.";
		return 0;
	}
	cout << n << " is not Palindrome number.";
	
	return 0;
}
