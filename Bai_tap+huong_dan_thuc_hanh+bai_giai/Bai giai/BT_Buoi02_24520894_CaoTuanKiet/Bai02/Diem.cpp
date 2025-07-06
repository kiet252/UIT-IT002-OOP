// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "stdafx.h"
#include "Diem.h"


Diem::Diem() {
	hoanhDo = 0;
	tungDo = 0;
}

Diem::Diem(float x = 0, float y = 0) {
	hoanhDo = x;
	tungDo = y;
}

float Diem::gethoanhDo() {
	return hoanhDo;
}

float Diem::gettungDo() {
	return tungDo;
}

void Diem::sethoanhDo(float x) {
	hoanhDo = x;
}

void Diem::settungDo(float y) {
	tungDo = y;
}

void Diem::tinhTien(float x, float y) {
	hoanhDo += x;
	tungDo += y;
}

void Diem::nhap() {
	cout << "Nhap hoanh do cho diem: " << endl;
	cin >> hoanhDo;
	cout << "Nhap tung do cho diem: " << endl;
	cin >> tungDo;
}

void Diem::xuat() {
	cout << "Toa do diem: " << "(" << hoanhDo << ", " << tungDo << ")" << endl;
}
