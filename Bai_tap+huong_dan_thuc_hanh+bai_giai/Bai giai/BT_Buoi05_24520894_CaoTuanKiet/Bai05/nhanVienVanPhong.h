// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#pragma once
#include "nhanVien.h"
class nhanVienVanPhong : public nhanVien
{
private:
	unsigned int soNgayLamViec;
public:
	nhanVienVanPhong(string = "", string = "", unsigned int = 0);
	void nhapThongTin();
	void xuatThongTin() const;
	unsigned long tinhLuong() const;
};

