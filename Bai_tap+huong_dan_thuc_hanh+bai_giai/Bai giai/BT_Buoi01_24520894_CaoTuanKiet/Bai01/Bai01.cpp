// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "stdafx.h"
#include <iostream>
using namespace std;
struct phanSo {
	int tuSo, mauSo;
};

void nhapPS(phanSo &ps) {
	cout << "Nhap tu so: \n";
	cin >> ps.tuSo;
	do {
		cout << "Nhap mau so: \n";
		cin >> ps.mauSo;
	} while (ps.mauSo == 0);
	if ( (ps.tuSo > 0 && ps.mauSo < 0) || (ps.tuSo < 0 && ps.mauSo < 0) ) {
		ps.tuSo *= -1;
		ps.mauSo *= -1;
	}
}

void xuatPS(const phanSo &ps) {
	if (ps.tuSo == 0) cout << "0";
	cout << ps.tuSo << "/" << ps.mauSo;
}

void toiGianPS(phanSo &ps) {
	int a = abs(ps.tuSo);
	int b = abs(ps.mauSo);
	while (b > 0) {
		int c = a % b;
		a = b;
		b = c;
	}
	ps.tuSo /= a;
	ps.mauSo /= a;
}

int main() {
	phanSo ps;
	nhapPS(ps);
	toiGianPS(ps);
	cout << "Phan so sau khi duoc rut gon la: ";
	xuatPS(ps);
	return 0;
}

