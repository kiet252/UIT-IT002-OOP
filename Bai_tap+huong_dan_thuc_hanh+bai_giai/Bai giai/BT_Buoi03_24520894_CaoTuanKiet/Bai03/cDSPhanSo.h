// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#pragma once
#include "cPhanSo.h"
#include <vector>
#include <algorithm>

class cDSPhanSo {
private:
	vector<cPhanSo> DSPhanSo;
public:
	static bool isNguyenTo(int);
	cDSPhanSo();
	cDSPhanSo(int);
	void nhap();
	void in();
	void them_cuoi(cPhanSo);
	void rutGon();
	cPhanSo tong();
	cPhanSo PSLonNhat();
	cPhanSo PSNhoNhat();
	cPhanSo PSTuNguyenToLonNhat();
	void sapXepTangDan();
	void sapXepGiamDan();
};

