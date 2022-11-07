#include <iostream>
using namespace std;
int main() {
	double kiemTra1, kiemTra2, kiemTra3, diemGiuaKy, diemCuoiKy;
	cout << "----------------- DIEM KIEM TRA ----------------\2";
	cout << "\n1. Nhap vao diem kiem tra lan 1: ";
	cin >> kiemTra1;
	cout << "2. Nhap vao diem kiem tra lan 2: ";
	cin >> kiemTra2;
	cout << "3. Nhap vao diem kiem tra lan 3: ";
	cin >> kiemTra3;
	cout << "\n----------------- KIEM TRA GIUA KI NE -----------";
	cout << "\n1. Nhap diem kiem tra giua ki: ";
	cin >> diemGiuaKy;
	cout << "----------------- KIEM TRA CUOI KI ---------------";
	cout << "\n1. Nhap diem kiem tra cuoi ki: ";
	cin >> diemCuoiKy;
	cout << " ------------------------DONE ----------------------\n\n\n\n\n";
	
	
	
	cout << "----------------------TONG DIEM-----------------------\n";
	cout << "1. Tong diem kiem tra: " << (kiemTra1 + kiemTra2 + kiemTra3);
	cout << "\n2. Diem giua ky: " << diemGiuaKy;
	cout << "\n3. Diem cuoi ky: " << diemCuoiKy;
	return 0;
}
