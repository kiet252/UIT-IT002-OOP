// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "cPhanSo.h"

int main()
{
	cPhanSo ps1, ps2;
	int soNguyen;
	cout << "Nhap phan so 1: " << endl;
	cin >> ps1;
	cout << "Nhap phan so 2: " << endl;
	cin >> ps2;

	cout << "Nhap so nguyen: " << endl;
	cin >> soNguyen;
	cout << "Gia tri cua phan so 1: " << ps1 << endl;
	cout << "Gia tri cua phan so 2: " << ps2 << endl;
	cout << "Gia tri cua so nguyen duoi dang phan so: " << cPhanSo(soNguyen) << endl;
	cout << endl;

	cout << "Tong cua phan so thu 1 va phan so thu 2: " << ps1 + ps2 << endl;
	cout << "Tong cua phan so thu 1 va so nguyen: " << ps1 + soNguyen << endl;
	cout << "Tong cua so nguyen va phan so thu 2: " << soNguyen + ps2 << endl;
	cout << endl;

	cout << "Hieu cua phan so thu 1 cho phan so thu 2: " << ps1 - ps2 << endl;
	cout << "Hieu cua phan so thu 2 cho phan so thu 1: " << ps2 - ps1 << endl;
	cout << "Hieu cua phan so thu 1 cho so nguyen: " << ps1 - soNguyen << endl;
	cout << "Hieu cua so nguyen cho phan so thu 2: " << soNguyen - ps2 << endl;
	cout << endl;

	cout << "Tich cua phan so thu 1 va phan so thu 2: " << ps1 * ps2 << endl;
	cout << "Tich cua phan so thu 1 va so nguyen: " << ps1 * soNguyen << endl;
	cout << "Tich cua so nguyen va phan so thu 2: " << soNguyen * ps2 << endl;
	cout << endl;

	if (ps2.layGiaTri() == 0) {
		cout << "Khong the chia phan so thu 1 cho phan so thu 2" << endl;
	}
	else {
		cout << "Thuong cua phan so thu 1 cho phan so thu 2: " << ps1 / ps2 << endl;
	}

	if (ps1.layGiaTri() == 0) {
		cout << "Khong the chia phan so thu 2 cho phan so thu 1" << endl;
	}
	else {
		cout << "Thuong cua phan so thu 2 cho phan so thu 1: " << ps2 / ps1 << endl;
	}

	if (soNguyen == 0) {
		cout << "Khong the chia phan so thu 1 cho so nguyen" << endl;
	}
	else {
		cout << "Thuong cua phan so thu 1 cho so nguyen: " << ps1 / soNguyen << endl;
	}

	if (ps2.layGiaTri() == 0) {
		cout << "Khong the chia so nguyen cho phan so thu 2" << endl;
	}
	else {
		cout << "Thuong cua so nguyen cho phan so thu 2: " << soNguyen / ps2 << endl;
	}
	cout << endl;

	cout << (ps1 > ps2 ? "Phan so 1 lon hon phan so thu 2" : "Phan so 1 khong lon hon phan so thu 2") << endl;
	cout << (ps1 < ps2 ? "Phan so 1 be hon phan so thu 2" : "Phan so 1 khong be hon phan so thu 2") << endl;
	cout << (ps1 == ps2 ? "Phan so 1 bang phan so thu 2" : "Phan so 1 khong bang phan so thu 2") << endl;
	return 0;
}