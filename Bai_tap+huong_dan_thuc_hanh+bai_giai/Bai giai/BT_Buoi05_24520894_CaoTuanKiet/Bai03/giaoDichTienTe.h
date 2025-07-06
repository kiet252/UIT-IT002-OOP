// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "giaoDich.h"
#pragma once
class giaoDichTienTe : public giaoDich
{
private:
	float tiGia;
	unsigned short loaiTien;
public:
	giaoDichTienTe(string = "", string = "", unsigned long = 0, unsigned long = 0, float = 0, unsigned short = 0);
	void nhapThongTin();
	void xuatThongTin();
	unsigned short getLoaiTien();
	unsigned long tinhThanhTien();
};

