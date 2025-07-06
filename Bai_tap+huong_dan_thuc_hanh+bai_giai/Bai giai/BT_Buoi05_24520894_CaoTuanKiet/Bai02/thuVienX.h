// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#pragma once
#include <vector>
#include "sachGiaoKhoa.h"
#include "sachThamKhao.h"

class thuVienX
{
private:
	vector<sachGiaoKhoa> DSSachGiaoKhoa;
	vector<sachThamKhao> DSSachThamKhao;
public:
	thuVienX(size_t = 0);
	void nhapThongTin();
	void xuatThongTin();
	void tinhThanhTienTungQuyenSach();
	void tinhTongThanhTienTungLoaiSach();
	void tinhTrungBinhCongDonGiaSachThamKhao();
	void xuatCacSachGiaoKhoaCuaNhaXuatBan(string);
};

