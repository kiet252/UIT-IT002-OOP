// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "cPhanSo.h"

int cPhanSo::gcd(int a, int b) {
	a = abs(a); b = abs(b);
	while (b > 0) {
		int c = a % b;
		a = b;
		b = c;
	}
	return a;
}

void cPhanSo::rutGon() {
	int GCD = gcd(tu, mau);
	tu /= GCD;
	mau /= GCD;
}

cPhanSo::cPhanSo() {
	tu = 0;
	mau = 1;
}

cPhanSo::cPhanSo(int tu = 0, int mau = 1) {
	if (tu < 0 && mau < 0) mau *= -1;
	this->tu = tu;
	this->mau = mau;
	rutGon();
}

int cPhanSo::getTu() {
	return tu;
}

int cPhanSo::getMau() {
	return mau;
}

istream& operator>>(istream &is, cPhanSo &ps) {
	cout << "Nhap tu cua phan so: " << endl;
	is >> ps.tu;
	cout << "Nhap mau cua phan so: ";
	do {
		is >> ps.mau;
		if (ps.mau == 0) cout << "Mau khong hop le! Xin hay nhap lai." << endl;
	} while (ps.mau == 0);
	return is;
}

ostream& operator<<(ostream& os, cPhanSo ps) {
	os << ps.tu << "/" << ps.mau;
	return os;
}

cPhanSo cPhanSo::operator+(cPhanSo ps) {
	return cPhanSo(tu * ps.mau + mau * ps.tu, mau * ps.mau);
}

cPhanSo cPhanSo::operator+(int so) {
	return cPhanSo(tu + so * mau, mau);
}

cPhanSo operator+(int so, cPhanSo ps) {
	return cPhanSo(ps.tu + so * ps.mau, ps.mau);
}

cPhanSo cPhanSo::operator-(cPhanSo ps) {
	return cPhanSo(tu * ps.mau - mau * ps.tu, mau * ps.mau);
}

cPhanSo cPhanSo::operator-(int so) {
	return cPhanSo(tu - so * mau, mau);
}

cPhanSo operator-(int so, cPhanSo ps) {
	return cPhanSo(ps.tu - so * ps.mau, ps.mau);
}

cPhanSo cPhanSo::operator*(cPhanSo ps) {
	return cPhanSo(tu * ps.tu, mau * ps.mau);
}

cPhanSo cPhanSo::operator*(int so) {
	return cPhanSo(tu * so, mau);
}

cPhanSo operator*(int so, cPhanSo ps) {
	return cPhanSo(so * ps.tu, ps.mau);
}

cPhanSo cPhanSo::operator/(cPhanSo ps) {
	return cPhanSo(tu * ps.mau, mau * ps.tu);
}

cPhanSo cPhanSo::operator/(int so) {
	return cPhanSo(tu, mau * so);
}

cPhanSo operator/(int so, cPhanSo ps) {
	return cPhanSo(ps.tu, ps.mau * so);
}

cPhanSo cPhanSo::operator-() {
	return cPhanSo(-tu, mau);
}

bool cPhanSo::operator>(cPhanSo ps) {
	if (ps.mau == mau) return tu > ps.tu;
	int myTu = tu * ps.mau;
	ps.tu *= mau;
	return myTu > ps.tu;
}

bool cPhanSo::operator>(int so) {
	if (mau == 1) return tu > so;
	so *= mau;
	return tu > so;
}

bool operator>(int so, cPhanSo ps) {
	if (ps.mau == 1) return so > ps.tu;
	so *= ps.mau;
	return so > ps.tu;
}

bool cPhanSo::operator<(cPhanSo ps) {
	if (ps.mau == mau) return tu < ps.tu;
	int myTu = tu * ps.mau;
	ps.tu *= mau;
	return myTu < ps.tu;
}

bool cPhanSo::operator<(int so) {
	if (mau == 1) return tu < so;
	so *= mau;
	return tu < so;
}

bool operator<(int so, cPhanSo ps) {
	if (ps.mau == 1) return so < ps.tu;
	so *= ps.mau;
	return so < ps.tu;
}