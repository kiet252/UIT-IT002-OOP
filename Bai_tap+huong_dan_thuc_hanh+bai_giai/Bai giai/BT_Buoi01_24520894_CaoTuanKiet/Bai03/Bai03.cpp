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
	if ((ps.tuSo > 0 && ps.mauSo < 0) || (ps.tuSo < 0 && ps.mauSo < 0)) {
		ps.tuSo *= -1;
		ps.mauSo *= -1;
	}
}

phanSo congPS(phanSo p, phanSo q) {
	phanSo kq;
	kq.tuSo = p.tuSo * q.mauSo + p.mauSo * q.tuSo;
	kq.mauSo = p.mauSo * q.mauSo;
	return kq;
}

phanSo truPS(phanSo p, phanSo q) {
	phanSo kq;
	kq.tuSo = p.tuSo * q.mauSo - p.mauSo * q.tuSo;
	kq.mauSo = p.mauSo * q.mauSo;
	return kq;
}

phanSo nhanPS(phanSo p, phanSo q) {
	phanSo kq;
	kq.tuSo = p.tuSo * q.tuSo;
	kq.mauSo = p.mauSo * q.mauSo;
	return kq;
}

phanSo chiaPS(phanSo p, phanSo q) {
	phanSo kq;
	kq.tuSo = p.tuSo * q.mauSo;
	kq.mauSo = p.mauSo * q.tuSo;
	return kq;
}

int main()
{
	phanSo p, q, kq;
	nhapPS(p);
	nhapPS(q);
	kq = congPS(p, q);
	toiGianPS(kq);
	//Phan so 1 + phan so 2
	xuatPS(p);
	cout << " + ";
	xuatPS(q);
	cout << " = ";
	xuatPS(kq);
	cout << endl;
	//Phan so 1 - phan so 2
	kq = truPS(p, q);
	toiGianPS(kq);
	xuatPS(p);
	cout << " - ";
	xuatPS(q);
	cout << " = ";
	xuatPS(kq);
	cout << endl;
	//Phan so 1 * phan so 2
	kq = nhanPS(p, q);
	toiGianPS(kq);
	xuatPS(p);
	cout << " * ";
	xuatPS(q);
	cout << " = ";
	xuatPS(kq);
	cout << endl;
	//Phan so 1 / phan so 2
	kq = chiaPS(p, q);
	toiGianPS(kq);
	xuatPS(p);
	cout << " / ";
	xuatPS(q);
	cout << " = ";
	xuatPS(kq);
	cout << endl;
    return 0;
}
