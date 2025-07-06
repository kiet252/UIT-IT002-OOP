// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "sach.h"
#pragma once
class sachThamKhao : public sach
{
private:
	unsigned long thue;
public:
	sachThamKhao(string = "", string = "", unsigned long = 0, unsigned long = 0, string = "", unsigned long = 0);
	void nhapThongTin();
	void xuatThongTin();
	unsigned long tinhThanhTien();
};

