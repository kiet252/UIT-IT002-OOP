// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "cDonThuc.h"

cDonThuc::cDonThuc() {

	heSo = 0;
	bac = 0;
}

cDonThuc::cDonThuc(double heSo = 0, int bac = 0) {
	this->heSo = heSo;
	this->bac = bac;
}

double cDonThuc::tinhGiaTri(double x) {
	return heSo * pow(x, bac);
}

void cDonThuc::nhap(int bac) {
	cout << "Nhap he so bac " << bac << " cua da thuc: ";
	cin >> heSo;
	this->bac = bac;
}

ostream& operator<<(ostream& os, cDonThuc dt) {
	if (dt.heSo == 0) return os;
	else if (!cDonThuc::firstDonThuc && dt.heSo > 0) cout << " + ";
	else if (dt.heSo < 0) cout << " - ";
	if (abs(dt.heSo) != 1) cout << abs(dt.heSo);
	if (dt.bac != 0) {
		cout << "x";
		if (dt.bac != 1) cout << "^" << dt.bac;
	}
	if (dt.bac == 0 && abs(dt.heSo) == 1) cout << 1;
	cDonThuc::firstDonThuc = false;
	return os;
}

cDonThuc cDonThuc::operator+(cDonThuc dt) {
	return cDonThuc(heSo + dt.heSo, bac);
}

cDonThuc cDonThuc::operator-(cDonThuc dt) {
	return cDonThuc(heSo - dt.heSo, bac);
}
