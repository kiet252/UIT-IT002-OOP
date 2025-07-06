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
	float diemLuanVan;
public:
	sinhVienDaiHoc(string = "", string = "", string = "", unsigned int = 0, float = 0, string = "", float = 0);
	void nhapThongTin();
	void xuatThongTin() const;
	bool xetDuDieuKienTotNghiep() const;
};

