// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "cDonThuc.h"

cDonThuc::cDonThuc(double heSo, size_t bac) {
	this->heSo = heSo;
	this->bac = bac;
}

double cDonThuc::giaTri(double x) {
	return heSo * pow(x, bac);
}

void cDonThuc::setBac(int bac) {
	this->bac = bac;
}

void cDonThuc::setHeSo(double heSo) {
	this->heSo = heSo;
}

int cDonThuc::getBac() {
	return bac;
}

double cDonThuc::getHeSo() {
	return heSo;
}

istream& operator>>(istream& is, cDonThuc& donThuc) {
	cout << "Nhap he so cua don thuc bac " << cDonThuc::laBacThu << ": ";
	is >> donThuc.heSo;
	cDonThuc::laBacThu++;
	return is;
}

ostream& operator<<(ostream& os, cDonThuc donThuc) {
	if (donThuc.heSo == 0) return os;
	else if (!cDonThuc::laDonThucDau && donThuc.heSo > 0) cout << " + ";
	else if (donThuc.heSo < 0) cout << " - ";
	if (abs(donThuc.heSo) != 1) cout << abs(donThuc.heSo);
	if (donThuc.bac != 0) {
		cout << "x";
		if (donThuc.bac != 1) cout << "^" << donThuc.bac;
	}
	if (donThuc.bac == 0 && abs(donThuc.heSo) == 1) cout << 1;
	cDonThuc::laDonThucDau = false;
	return os;
}

bool cDonThuc::operator==(cDonThuc donThucKhac) {
	return (heSo == donThucKhac.heSo && bac == donThucKhac.bac);
}

cDonThuc cDonThuc::operator+(cDonThuc donThucKhac) {
	return cDonThuc(heSo + donThucKhac.heSo, bac);
}

cDonThuc cDonThuc::operator-(cDonThuc donThucKhac) {
	return cDonThuc(heSo - donThucKhac.heSo, bac);
}

cDonThuc cDonThuc::operator*(cDonThuc donThucKhac) {
	return cDonThuc(heSo * donThucKhac.heSo, bac + donThucKhac.bac);
}

cDonThuc cDonThuc::operator/(cDonThuc donThucKhac) {
	//if (donThucKhac.heSo == 0 || (heSo < donThucKhac.heSo)) return cDonThuc(0, 0);
	return cDonThuc(heSo / donThucKhac.heSo, bac - donThucKhac.bac);
}