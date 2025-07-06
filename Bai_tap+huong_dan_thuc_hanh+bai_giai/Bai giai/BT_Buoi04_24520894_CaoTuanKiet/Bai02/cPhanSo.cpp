// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "cPhanSo.h"

void cPhanSo::toiGian() {
	int GCD = gcd(tuSo, mauSo);
	tuSo /= GCD;
	mauSo /= GCD;
}

int cPhanSo::gcd(int a, int b) {
	a = abs(a);
	b = abs(b);
	while (b > 0) {
		int c = a % b;
		a = b;
		b = c;
	}
	return a;
}

cPhanSo::cPhanSo(int tuSo, int mauSo) {
	this->tuSo = tuSo;
	this->mauSo = mauSo;
}

double cPhanSo::layGiaTri() {
	return double(tuSo) / mauSo;
}

istream& operator>>(istream& is, cPhanSo& ps) {
	cout << "Nhap tu so: " << endl;
	is >> ps.tuSo;
	do {
		cout << "Nhap mau so: " << endl;
		is >> ps.mauSo;
		if (ps.mauSo == 0) cout << "Mau khong hop le! Xin hay nhap lai." << endl;
	} while (ps.mauSo == 0);
	ps.toiGian();
	return is;
}

ostream& operator<<(ostream& os, cPhanSo ps) {
	ps.toiGian();
	if (ps.tuSo == 0) os << 0;
	else if (ps.mauSo == 1) os << ps.tuSo;
	else os << ps.tuSo << "/" << ps.mauSo;
	return os;
}

cPhanSo operator+(cPhanSo ps1, cPhanSo ps2) {
	return cPhanSo(ps1.tuSo * ps2.mauSo + ps1.mauSo * ps2.tuSo, ps1.mauSo * ps2.mauSo);
}

cPhanSo operator-(cPhanSo ps1, cPhanSo ps2) {
	return cPhanSo(ps1.tuSo * ps2.mauSo - (ps1.mauSo * ps2.tuSo), ps1.mauSo * ps2.mauSo);
}

cPhanSo operator*(cPhanSo ps1, cPhanSo ps2) {
	return cPhanSo(ps1.tuSo * ps2.tuSo, ps1.mauSo * ps2.mauSo);
}

cPhanSo operator/(cPhanSo ps1, cPhanSo ps2) {
	return cPhanSo(ps1.tuSo * ps2.mauSo, ps1.mauSo * ps2.tuSo);
}

bool operator==(cPhanSo ps1, cPhanSo ps2) {
	ps1.toiGian();
	ps2.toiGian();
	return (ps1.tuSo == ps2.tuSo && ps1.mauSo == ps2.mauSo);
}

bool operator>(cPhanSo ps1, cPhanSo ps2) {
	ps1.tuSo *= ps2.mauSo;
	ps2.tuSo *= ps1.mauSo;
	return (ps1.tuSo > ps2.tuSo);
}

bool operator<(cPhanSo ps1, cPhanSo ps2) {
	ps1.tuSo *= ps2.mauSo;
	ps2.tuSo *= ps1.mauSo;
	return (ps1.tuSo < ps2.tuSo);
}