// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "stdafx.h"
#include "thoiGian.h"

void thoiGian::chuanHoa() {
	if (giay < 0) {
		phut -= abs(giay) / 60;
		int s = abs(giay) % 60;
		giay = 60 - s;
	} else if (giay >= 60) {
		phut += giay / 60;
		giay %= 60;
	}

	if (phut < 0 && gio - (abs(phut) / 60) >= 0) {
		gio -= (abs(phut) / 60);
		int m = abs(phut) % 60;
		phut = 60 - m;
	} else if (phut >= 60) {
		gio += phut / 60;
		phut %= 60;
	}
	if (gio < 0) gio = 0;
}


thoiGian::thoiGian()
{
	gio = 0;
	phut = 0;
	giay = 0;
}

thoiGian::thoiGian(int h = 0, short m = 0, short s = 0)
{
	gio = h;
	phut = m;
	giay = s;
}

void thoiGian::nhap() {
	do {
		cout << "Nhap gio: " << endl;
		cin >> gio;
		if (gio < 0) cout << "Gio khong hop le!" << endl;
	} while (gio < 0);

	do {
		cout << "Nhap phut: " << endl;
		cin >> phut;
		if (phut < 0 || phut >= 60) cout << "phut khong hop le!" << endl;
	} while (phut < 0 || phut >= 60);

	do {
		cout << "Nhap giay: " << endl;
		cin >> giay;
		if (giay < 0 || giay >= 60) cout << "giay khong hop le!" << endl;
	} while (giay < 0 || giay >= 60);
}

void thoiGian::xuat() {
	cout << gio << " gio, ";
	cout << phut << " phut, ";
	cout << giay << " giay " << endl;
}

void thoiGian::setGio(int h) {
	if (h < 0) cout << "Gio khong hop le!" << endl;
	else gio = h;
}

void thoiGian::setPhut(short m) {
	if (m < 0) cout << "Phut khong hop le!" << endl;
	else phut = m;
}

void thoiGian::setGiay(short s) {
	if (s < 0) cout << "Giay khong hop le!" << endl;
	else giay = s;
}

int thoiGian::getGio() {
	return gio;
}

short thoiGian::getPhut() {
	return phut;
}

short thoiGian::getGiay() {
	return giay;
}

void thoiGian::doiGio(int &h) {
	if (gio + h < 0) {
		cout << "Gio thay doi khong hop le!" << endl;
		h = 0;
	}
	else gio += h;
}

void thoiGian::doiPhut(short m) {
	phut += m;
}

void thoiGian::doiGiay(short s) {
	giay += s;
}