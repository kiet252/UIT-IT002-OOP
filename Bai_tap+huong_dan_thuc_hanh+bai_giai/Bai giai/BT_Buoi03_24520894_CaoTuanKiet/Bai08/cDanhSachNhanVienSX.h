// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#pragma once
#include "cNhanVienSX.h"
#include <algorithm>
#include <vector>
class cDanhSachNhanVienSX {
private:
	vector<cNhanVienSX> danhSachNhanVien;
	bool lonTuoiHon(cNhanVienSX, cNhanVienSX);
	static bool luongTangDan(cNhanVienSX, cNhanVienSX);
public:
	cDanhSachNhanVienSX();
	cDanhSachNhanVienSX(int);
	void nhap(int n);
	void xuat();
	cNhanVienSX nhanVienLuongThapNhat();
	unsigned long long tongLuongPhaiTra();
	cNhanVienSX nhanVienTuoiCaoNhat();
	void sapXepTangDanTheoLuong();
};

