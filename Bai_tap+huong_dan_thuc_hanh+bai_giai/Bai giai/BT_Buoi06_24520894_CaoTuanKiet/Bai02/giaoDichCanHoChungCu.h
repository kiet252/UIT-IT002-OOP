// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#pragma once
#include "giaoDich.h"
class giaoDichCanHoChungCu : public giaoDich
{
private:
	string maCan;
	unsigned int viTriTang;
public:
	giaoDichCanHoChungCu(string = "", string = "", unsigned long = 0, unsigned long = 0, string = "", unsigned int = 0);
	void nhapThongTin();
	void xuatThongTin();
	unsigned long tinhThanhTien();
	string getLoai();
};

