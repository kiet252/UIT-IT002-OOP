// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#pragma once
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
class CDate
{
private:
	int ngay, thang, nam;
	void chuanHoaTangNgay();
	void chuanHoaGiamNgay();
	void tangMotNgay();
	void giamMotNgay();
	int tinhTongNgay();
public:
	static int xuatSoNgayTrongThang(int, int);
	static bool kiemTraNamNhuan(int);
	CDate(int = 0, int = 1, int = 0);
	int getNgay();
	int getThang();
	int getNam();
	CDate operator+(int);
	CDate operator-(int);
	CDate& operator++();
	CDate operator++(int);
	CDate& operator--();
	CDate operator--(int);
	int operator-(CDate);
	friend istream& operator>>(istream&, CDate&);
	friend ostream& operator<<(ostream&, CDate);
};

