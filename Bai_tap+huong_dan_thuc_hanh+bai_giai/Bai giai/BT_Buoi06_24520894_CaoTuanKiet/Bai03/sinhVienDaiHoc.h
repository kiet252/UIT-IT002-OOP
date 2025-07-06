// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#pragma once
#include "sinhVien.h"
class sinhVienDaiHoc : public sinhVien
{
private:
	string tenLuanVan;
	unsigned short diemLuanVan;
public:
	sinhVienDaiHoc(string = "", string = "", string = "", unsigned int = 0, unsigned short = 0, string = "", unsigned short = 0);
	void nhapThongTin();
	void xuatThongTin();
	bool duDieuKienTotNghiep();
	string getLoai();
};

