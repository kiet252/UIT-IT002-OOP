// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#pragma once
#include "giaoDichDat.h"
#include "giaoDichNhaPho.h"
#include "giaoDichCanHoChungCu.h"
#include <sstream>
#include <vector>
class congTyBatDongSan
{
private:
	vector<giaoDichDat> DSGiaoDichDat;
	vector<giaoDichNhaPho> DSGiaoDichNhaPho;
	vector<giaoDichCanHoChungCu> DSGiaoDichCanHoChungCu;
	bool kiemTraThangGiaoDichBang2NamGiaoDichBang2024(string);
public:
	congTyBatDongSan(size_t = 0);
	void nhapDanhSachGiaoDichDat();
	void nhapDanhSachGiaoDichNhaPho();
	void nhapDanhSachGiaoDichCanHoChungCu();
	void tinhTongSoLuongTungLoai();
	void tinhTrungBinhThanhTienGiaoDichCanHoChungCu();
	void xuatGiaoDichNhaPhoTriGiaCaoNhat();
	void xuatDanhSachGiaoDichThang12Nam2024();
};

