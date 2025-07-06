// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#pragma once
#include "giaoDichBatDongSan.h"
class giaoDichNhaPho : public giaoDichBatDongSan
{
private:
	string loaiNha, diaChi;
	bool kiemTraLoaiNhaHopLe();
	bool kiemTraDiaChiHopLe();
public:
	giaoDichNhaPho(string = "", string = "", unsigned long = 0, unsigned long = 0, string = "", string = "");
	void nhapThongTin();
	void xuatThongTin();
	unsigned long tinhThanhTien();
};

