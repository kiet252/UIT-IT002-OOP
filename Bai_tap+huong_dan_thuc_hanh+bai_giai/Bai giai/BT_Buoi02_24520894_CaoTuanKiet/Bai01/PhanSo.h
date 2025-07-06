// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include <iostream>
#include <cmath>
using namespace std;

#pragma once
class PhanSo
{
private:
	int tuSo, mauSo;
public:
	static int gcd(int, int);
	PhanSo();
	PhanSo(int, int);
	void nhap();
	void xuat();
	void toiGian();
	PhanSo cong(PhanSo);
	PhanSo tru(PhanSo);
	PhanSo nhan(PhanSo);
	PhanSo chia(PhanSo);
};

