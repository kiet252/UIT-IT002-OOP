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
private:
	string maGiaoDich, ngayGiaoDich;
	unsigned long donGia, soLuong;
	bool kiemTraNgayGiaoDichHopLe();
	void chuanHoaNgayGiaoDich();
public:
	giaoDich(string = "", string = "", unsigned long = 0, unsigned long = 0);
	void nhapThongTin();
	void xuatThongTin();
	unsigned long tinhThanhTien();
};

