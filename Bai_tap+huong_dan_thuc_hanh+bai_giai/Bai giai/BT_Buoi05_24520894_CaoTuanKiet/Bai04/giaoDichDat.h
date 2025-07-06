// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#pragma once
#include "giaoDichBatDongSan.h"
class giaoDichDat : public giaoDichBatDongSan
{
private:
	char loaiDat;
public:
	giaoDichDat(string = "", string = "", unsigned long = 0, unsigned long = 0, char = ' ');
	void nhapThongTin();
	void xuatThongTin();
	unsigned long tinhThanhTien();
};

