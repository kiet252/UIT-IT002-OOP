// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct phanSo {
	int tuSo, mauSo;
};

double giaTriThapPhanPS(phanSo ps) {
	return double(ps.tuSo) / ps.mauSo;
}

bool soSanh(phanSo a, phanSo b) {
	return (giaTriThapPhanPS(a) < giaTriThapPhanPS(b));
}

bool soSanh2(phanSo a, phanSo b) {
	return (giaTriThapPhanPS(a) > giaTriThapPhanPS(b));
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
	int n;
	vector<phanSo> dayps;
	cout << "Nhap so luong phan so: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		phanSo nhap;
		nhapPS(nhap);
		dayps.push_back(nhap);
	}
	sort(dayps.begin(), dayps.end(), soSanh);
	phanSo lonNhat = dayps[n - 1];
	cout << "Phan so lon nhat la: \n";
	xuatPS(lonNhat);
	cout << endl;
	cout << "Day phan so tang dan: \n";
	for (int i = 0; i < n; i++) {
		xuatPS(dayps[i]);
		cout << endl;
	}
	sort(dayps.begin(), dayps.end(), soSanh2);
	cout << "Day phan so giam dan: \n";
	for (int i = 0; i < n; i++) {
		xuatPS(dayps[i]);
		cout << endl;
	}
	return 0;
}
