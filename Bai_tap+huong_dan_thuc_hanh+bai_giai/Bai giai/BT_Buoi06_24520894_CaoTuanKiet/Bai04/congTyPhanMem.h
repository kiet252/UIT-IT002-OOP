// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#pragma once
#include "lapTrinhVien.h"
#include "kiemChungVien.h"
#include <vector>

class congTyPhanMem
{
private:
	vector<nhanVien*> danhSachNhanVien;
public:
	congTyPhanMem(size_t = 0);
	void nhapDS();
	void xuatDS();
	void xuatDSCacNhanVienLuongThapHonLuongTrungBinh();
	void xuatThongTinNhanVienLuongCaoNhat();
	void xuatThongTinNhanVienLuongThapNhat();
	void xuatThongTinLapTrinhVienLuongCaoNhat();
	void xuatThongTinKiemChungVienLuongThapNhat();
};

