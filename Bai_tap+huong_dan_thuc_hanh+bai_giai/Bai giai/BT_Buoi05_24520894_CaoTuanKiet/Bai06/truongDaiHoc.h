// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#pragma once
#include "sinhVienCaoDang.h"
#include "sinhVienDaiHoc.h"
#include <vector>
class truongDaiHoc
{
private:
	vector<sinhVienCaoDang> DSSinhVienCaoDang;
	vector<sinhVienDaiHoc> DSSinhVienDaiHoc;
public:
	truongDaiHoc(size_t = 0);
	void nhapDanhSachSinhVienCaoDang();
	void nhapDanhSachSinhVienDaiHoc();
	void xuatDanhSachSinhVien() const;
	void xuatDanhSachSinhVienDuDieuKienTotNghiep() const;
	void xuatDanhSachSinhVienKhongDuDieuKienTotNghiep() const;
	void xuatSinhVienDiemTrungBinhCaoNhat() const;
};

