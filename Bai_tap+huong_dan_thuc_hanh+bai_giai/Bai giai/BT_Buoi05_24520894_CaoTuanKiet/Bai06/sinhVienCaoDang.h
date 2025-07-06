// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#pragma once
#include "sinhVien.h"
class sinhVienCaoDang : public sinhVien
{
private:
	unsigned int diemThiTotNghiep;
public:
	sinhVienCaoDang(string = "", string = "", string = "", unsigned int = 0, float = 0, unsigned int = 0);
	void nhapThongTin();
	void xuatThongTin() const;
	bool xetDuDieuKienTotNghiep() const;
};

