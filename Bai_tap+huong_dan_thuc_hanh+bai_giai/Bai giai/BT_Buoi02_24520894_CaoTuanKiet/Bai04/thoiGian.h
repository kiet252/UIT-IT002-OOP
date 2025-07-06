// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include <iostream>
#include <cmath>
using namespace std;
#pragma once
class thoiGian {
private:
	short phut, giay;
	int gio;
public:
	thoiGian();
	thoiGian(int, short, short);
	void chuanHoa();
	void nhap();
	void xuat();
	void setGio(int);
	void setPhut(short);
	void setGiay(short);
	int getGio();
	short getPhut();
	short getGiay();
	void doiGio(int&);
	void doiPhut(short);
	void doiGiay(short);
};

