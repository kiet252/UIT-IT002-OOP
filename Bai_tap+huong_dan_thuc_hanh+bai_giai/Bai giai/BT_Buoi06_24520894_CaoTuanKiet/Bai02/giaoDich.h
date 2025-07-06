// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include <iostream>
#include <string>
using namespace std;
#pragma once

class giaoDich
{
protected:
	string ma, ngay;
	unsigned long donGia, dienTich;
	bool kiemTraNgayGiaoDichHopLe();
	void chuanHoaNgayGiaoDich();
public:
	giaoDich(string = "", string = "", unsigned long = 0, unsigned long = 0);
	virtual void nhapThongTin();
	virtual void xuatThongTin();
	virtual unsigned long tinhThanhTien() = 0;
	virtual string getLoai() = 0;
	virtual string getNgay();
};

