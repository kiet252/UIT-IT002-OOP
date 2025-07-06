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

double giaTriThapPhanPS(phanSo ps) {
	return double(ps.tuSo) / ps.mauSo;
}

void nhapPS(phanSo &ps) {
	cout << "Nhap tu so: \n";
	cin >> ps.tuSo;
	do {
		cout << "Nhap mau so: \n";
		cin >> ps.mauSo;
	} while (ps.mauSo == 0);
	if ((ps.tuSo > 0 && ps.mauSo < 0) || (ps.tuSo < 0 && ps.mauSo < 0)) {
		ps.tuSo *= -1;
		ps.mauSo *= -1;
	}
}

void xuatPS(const phanSo &ps) {
	if (ps.tuSo == 0) cout << "0";
	cout << ps.tuSo << "/" << ps.mauSo;
}


int main() {
	phanSo ps1, ps2;
	nhapPS(ps1);
	nhapPS(ps2);
	if (giaTriThapPhanPS(ps1) > giaTriThapPhanPS(ps2)) {
		cout << "Phan so lon nhat la: ";
		xuatPS(ps1);
	} else if (giaTriThapPhanPS(ps1) < giaTriThapPhanPS(ps2)){
		cout << "Phan so lon nhat la: ";
		xuatPS(ps2);
	} else {
		cout << "Ca hai phan so co gia tri bang nhau.";
	}
	cout << endl;
	return 0;
}
