// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#pragma once
#include "cDiem.h"
class cTamGiac {
private:
	cDiem dinhA, dinhB, dinhC;
	double canhA, canhB, canhC;
public:
	cTamGiac();
	cTamGiac(double, double, double, double, double, double);
	cTamGiac(cDiem, cDiem, cDiem);
	void nhap();
	void xuat();
	string kiemTraloai();
	double tinhChuVi();
	double tinhDienTich();
	void tinhTien(double, double);
	void quay(double);
	void thuNhoPhongTo();
};