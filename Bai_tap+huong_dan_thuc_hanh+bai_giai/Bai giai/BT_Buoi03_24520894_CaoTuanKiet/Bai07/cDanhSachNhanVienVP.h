// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#pragma once
#include "cNhanVienVP.h"
#include <algorithm>
class cDanhSachNhanVienVP {
	private:
		vector<cNhanVienVP> danhSachNhanVien;
		bool lonTuoiHon(cNhanVienVP, cNhanVienVP);
		static bool luongTangDan(cNhanVienVP, cNhanVienVP);
	public:
		cDanhSachNhanVienVP();
		cDanhSachNhanVienVP(int);
		void nhap(int n);
		void xuat();
		cNhanVienVP nhanVienLuongCaoNhat();
		unsigned long long tongLuongPhaiTra();
		cNhanVienVP nhanVienTuoiCaoNhat();
		void sapXepTangDanTheoLuong();
};

