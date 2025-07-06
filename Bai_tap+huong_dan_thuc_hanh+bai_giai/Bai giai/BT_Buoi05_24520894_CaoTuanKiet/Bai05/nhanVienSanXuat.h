// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#pragma once
#include "nhanVien.h"
class nhanVienSanXuat : public nhanVien
{
private:
	unsigned long luongCanBan, soSanPham;
public:
	nhanVienSanXuat(string = "", string = "", unsigned long = 0, unsigned long = 0);
	void nhapThongTin();
	void xuatThongTin() const;
	unsigned long tinhLuong() const;
};

