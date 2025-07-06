// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#pragma once
#include <iostream>
#include <cmath>
using namespace std;
class cDonThuc
{
private:
	size_t bac;
	double heSo;
public:
	static size_t laBacThu;
	static bool laDonThucDau;
	cDonThuc(double = 0, size_t = 0);
	double giaTri(double);
	void setBac(int);
	void setHeSo(double);
	int getBac();
	double getHeSo();
	friend istream& operator>>(istream&, cDonThuc&);
	friend ostream& operator<<(ostream&, cDonThuc);
	bool operator==(cDonThuc);
	cDonThuc operator+(cDonThuc);
	cDonThuc operator-(cDonThuc);
	cDonThuc operator*(cDonThuc);
	cDonThuc operator/(cDonThuc);
};

