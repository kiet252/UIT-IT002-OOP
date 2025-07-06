// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "Diem.h"


Diem::Diem() {
	x = 0;
	y = 0;
}

Diem::Diem(double x = 0, double y = 0) {
	this->x = x;
	this->y = y;
}

void Diem::nhap() {
	cout << "Nhap x: " << endl;
	cin >> x;
	cout << "Nhap y: " << endl;
	cin >> y;
}

void Diem::xuat() {
	cout << "(" << x << ", " << y << ")" << endl;
}

double Diem::getx() {
	return x;
}

double Diem::gety() {
	return y;
}

void Diem::setx(double x) {
	this->x = x;
}

void Diem::sety(double y) {
	this->y = y;
}

double Diem::doDaiVoi(Diem diem) {
	return sqrt((diem.x - x) * (diem.x - x) + (diem.y - y) * (diem.y - y));
}

void Diem::tinhTien(double a, double b) {
	x += a;
	y += b;
}

void Diem::quay(double degree) {
	double newX, newY;
	if (degree == 90) {
		newX = -y;
		newY = x;
		x = newX;
		y = newY;
	}
	else if (degree == -90) {
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
	}
	else {
		double rad = degree * 3.14159 / 180;
		newX = x * cos(rad) - y * sin(rad);
		newY = x * sin(rad) + y * cos(rad);
		x = newX;
		y = newY;
	}
}