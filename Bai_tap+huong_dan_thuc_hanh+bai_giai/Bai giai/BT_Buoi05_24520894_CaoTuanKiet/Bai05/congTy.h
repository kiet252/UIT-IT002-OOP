// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#pragma once
#include "nhanVienVanPhong.h"
#include "nhanVienSanXuat.h"
#include "vector"
class congTy
{
private:
	vector<nhanVienVanPhong> DSNhanVienVanPhong;
	vector<nhanVienSanXuat> DSNhanVienSanXuat;
public:
	congTy(size_t = 0);
	void nhapDanhSachNhanVien();
	void xuatDanhSachNhanVien() const;
	void tinhLuongTungNhanVien() const;
	unsigned long tinhTongLuongTraChoCacNhanVien() const;
};

