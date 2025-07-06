// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#pragma once
#include <iostream>
#include <string>
using namespace std;
class giaoDichBatDongSan
{
private:
	string maGiaoDich, ngayGiaoDich;
	unsigned long donGia, dienTich;
	void chuanHoaNgayGiaoDich();
	bool kiemTraNgayGiaoDichHopLe();
public:
	giaoDichBatDongSan(string = "", string = "", unsigned long = 0, unsigned long = 0);
	void nhapThongTin();
	void xuatThongTin();
	unsigned long tinhThanhTien();
	string getNgayGiaoDich();
};
