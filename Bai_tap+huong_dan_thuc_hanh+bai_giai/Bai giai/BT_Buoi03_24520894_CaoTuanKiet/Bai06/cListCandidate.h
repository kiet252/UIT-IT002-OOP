// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#pragma once
#include "cCandidate.h"
#include <vector>
#include <algorithm>
class cListCandidate {
	private:
		vector<cCandidate> danhSachThiSinh;
		static bool tieuChiSapXep(cCandidate, cCandidate);
	public:
		cListCandidate();
		cListCandidate(int n);
		void nhap();
		void xuat();
		void xuatTongDiemLonHon15();
		cCandidate timThiSinhTongDiemCaoNhat();
		void sapXepTongDiemGiamDan();
};

