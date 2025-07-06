// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#pragma once
#include <vector>
#include "giaoDichTienTe.h"
#include "giaoDichVang.h"
class congTyX
{
private:
	vector<giaoDichVang> DSGiaoDichVang;
	vector<giaoDichTienTe> DSGiaoDichTienTe;
public:
	congTyX(size_t = 0);
	void nhapThongTinGiaoDichVang();
	void nhapThongTinGiaoDichTienTe();
	void xuatThongTinGiaoDichVang();
	void xuatThongTinGiaoDichTienTe();

	void timGiaoDichVangThanhTienCaoNhat();
	void timGiaoDichNgoaiTeEuroThanhTienThapNhat();

	void xuatThongTinCacGiaoDichThanhTienTrenMotTy();
};

