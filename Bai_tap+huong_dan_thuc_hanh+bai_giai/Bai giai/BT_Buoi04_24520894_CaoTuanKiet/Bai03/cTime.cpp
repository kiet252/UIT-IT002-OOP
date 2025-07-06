// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "cTime.h"

void cTime::chuanHoa() {
	int tongGiay = gio * 3600 + phut * 60 + giay;
	tongGiay %= 86400;
	if (tongGiay < 0) tongGiay += 86400;
	gio = tongGiay / 3600;
	phut = (tongGiay % 3600) / 60;
	giay = (tongGiay % 3600) % 60;
}

void cTime::tangGiay() {
	giay++;
	if (giay > 59) {
		giay = 0;
		phut++;
		if (phut > 59) {
			phut = 0;
			gio++;
			if (gio > 23) gio = 0;
		}
	}
}

void cTime::giamGiay() {
	giay--;
	if (giay < 0) {
		giay = 59;
		phut--;
		if (phut < 0) {
			phut = 59;
			gio--;
			if (gio < 0) gio = 23;
		}
	}
}

void cTime::clrscr() {
	cout << "\033[2J\033[1;1H";
}

cTime::cTime(int gio, int phut, int giay)
{
	this->gio = gio;
	this->phut = phut;
	this->giay = giay;
	chuanHoa();
}

void cTime::operator+(int giayThem) {
	giay += giayThem;
	chuanHoa();
}

void cTime::operator-(int giayBot) {
	giay -= giayBot;
	chuanHoa();
}

cTime& cTime::operator++(){
	tangGiay();
	return *this;
}

cTime cTime::operator++(int) {
	cTime temp = *this;
	tangGiay();
	return temp;
}

cTime& cTime::operator--() {
	giamGiay();
	return *this;
}

cTime cTime::operator--(int) {
	cTime temp = *this;
	giamGiay();
	return temp;
}

istream& operator>>(istream& is, cTime& time) {
	do {
		cout << "Nhap gio hien tai: " << endl;
		is >> time.gio;
		if (time.gio < 0 || time.gio > 23) cout << "Gio khong hop le! Xin hay nhap lai." << endl;
	} while (time.gio < 0 || time.gio > 23);

	do {
		cout << "Nhap phut hien tai: " << endl;
		is >> time.phut;
		if (time.phut < 0 || time.phut > 60) cout << "Phut khong hop le! Xin hay nhap lai." << endl;
	} while (time.phut < 0 || time.phut > 60);

	do {
		cout << "Nhap giay hien tai: " << endl;
		is >> time.giay;
		if (time.giay < 0 || time.giay > 60) cout << "Giay khong hop le! Xin hay nhap lai." << endl;
	} while (time.giay < 0 || time.giay > 60);

	time.chuanHoa();
	return is;
}

ostream& operator<<(ostream& os, cTime time) {
	time.clrscr();
	cout << "\t\t\t\t\t\t\t\t\t\t\t [====================] " << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t [                    ] " << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t [                    ] " << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t [                    ] " << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t [\t";
	cout << setw(2) << setfill('0') << time.gio << ":";
	cout << setw(2) << setfill('0') << time.phut << ":";
	cout << setw(2) << setfill('0') << time.giay;
	cout << "      ]" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t [                    ] " << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t [                    ] " << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t [                    ] " << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t [====================] " << endl;
	return os;
}
