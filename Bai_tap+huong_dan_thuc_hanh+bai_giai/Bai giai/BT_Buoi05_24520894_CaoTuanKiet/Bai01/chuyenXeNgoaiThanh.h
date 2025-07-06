// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#pragma once
#include "chuyenXe.h"
class chuyenXeNgoaiThanh : public chuyenXe
{
private:
	string noiDen;
	unsigned int soNgayDiDuoc;
public:
	chuyenXeNgoaiThanh(string = "", string = "", string = "", unsigned long = 0, string = "", unsigned int = 0);
	void nhapThongTin();
	void xuatThongTin();
};


