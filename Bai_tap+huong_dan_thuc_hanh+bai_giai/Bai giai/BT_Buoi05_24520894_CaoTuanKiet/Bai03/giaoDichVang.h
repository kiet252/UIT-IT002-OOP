// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#pragma once
#include "giaoDich.h"
class giaoDichVang : public giaoDich
{
private:
	string loaiVang;
public:
	giaoDichVang(string = "", string = "", unsigned long = 0, unsigned long = 0, string = "");
	void nhapThongTin();
	void xuatThongTin();
};

