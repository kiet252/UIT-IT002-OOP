// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "cDiem.h"


cDiem::cDiem() {
	x = 0;
	y = 0;
}

cDiem::cDiem(double x = 0, double y = 0) {
	this->x = x;
	this->y = y;
}

void cDiem::nhap() {
	cout << "Nhap x: " << endl;
	cin >> x;
	cout << "Nhap y: " << endl;
	cin >> y;
}

void cDiem::xuat() {
	cout << "(" << x << ", " << y << ")" << endl;
}

double cDiem::getx() {
	return x;
}

double cDiem::gety() {
	return y;
}

void cDiem::setx(double x) {
	this->x = x;
}

void cDiem::sety(double y) {
	this->y = y;
}

double cDiem::doDaiVoi(cDiem diem) {
	return sqrt((diem.x - x) * (diem.x - x) + (diem.y - y) * (diem.y - y));
}

void cDiem::tinhTien(double a, double b) {
	x += a;
	y += b;
}

void cDiem::quay(double degree) {
	double newX, newY;
	if (degree == 90) {
		newX = -y;
		newY = x;
		x = newX;
		y = newY;
	} else if (degree == -90) {
		newX = y;
		newY = -x;
		x = newX;
		y = newY;
	}
	else if (degree == 180) {
		newX = -y;
		newY = -x;
		x = newX;
		y = newY;
	} else {
		double rad = degree * 3.14159 / 180;
		newX = x * cos(rad) - y * sin(rad);
		newY = x * sin(rad) + y * cos(rad);
		x = newX;
		y = newY;
	}
}