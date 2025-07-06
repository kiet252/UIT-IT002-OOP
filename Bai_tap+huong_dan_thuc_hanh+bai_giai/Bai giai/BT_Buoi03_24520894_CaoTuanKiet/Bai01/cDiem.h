// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#pragma once
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
class cDiem {
private:
	double x, y;
public:
	cDiem();
	cDiem(double, double);
	void nhap();
	void xuat();
	double getx();
	double gety();
	void setx(double);
	void sety(double);
	double doDaiVoi(cDiem);
	void tinhTien(double, double);
	void quay(double);
};