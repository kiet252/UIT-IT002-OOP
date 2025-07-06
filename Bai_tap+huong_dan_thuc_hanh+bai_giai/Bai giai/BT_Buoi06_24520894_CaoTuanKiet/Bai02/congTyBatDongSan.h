// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#pragma once
#include "giaoDichDat.h"
#include "giaoDichNhaPho.h"
#include "giaoDichCanHoChungCu.h"
#include <vector>
#include <sstream>
class congTyBatDongSan
{
private:
	vector<giaoDich*> danhSachCacGiaoDich;
	bool kiemTraThangBang12NamBan2024(string);
public:
	congTyBatDongSan(size_t = 0);
	void nhapDanhSachGiaoDich();
	void xuatTongSoLuongTungLoai();
	unsigned long tinhTrungBinhThanhTienGiaoDichCanHoChungCu();
	void xuatThongTinGiaoDichNhaPhoThanhTienCaoNhat();
	void xuatDanhSachGiaoDichThang12Nam2024();
};

