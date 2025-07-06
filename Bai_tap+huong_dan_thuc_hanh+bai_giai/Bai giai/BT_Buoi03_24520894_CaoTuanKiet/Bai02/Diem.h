// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#pragma once
#include <iostream>
#include <cmath>
using namespace std;
class Diem {
private:
	double x, y;
public:
	Diem();
	Diem(double, double);
	void nhap();
	void xuat();
	double getx();
	double gety();
	void setx(double);
	void sety(double);
	double doDaiVoi(Diem);
	void tinhTien(double, double);
	void quay(double);
};

