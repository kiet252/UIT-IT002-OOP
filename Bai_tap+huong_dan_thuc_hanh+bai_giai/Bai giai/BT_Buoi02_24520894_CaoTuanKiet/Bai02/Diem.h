// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include <iostream>
using namespace std;
#pragma once
class Diem {
private:
	float hoanhDo, tungDo;
public:
	Diem();
	Diem(float, float);
	float gethoanhDo();
	float gettungDo();
	void sethoanhDo(float);
	void settungDo(float);
	void tinhTien(float, float);
	void nhap();
	void xuat();
};

