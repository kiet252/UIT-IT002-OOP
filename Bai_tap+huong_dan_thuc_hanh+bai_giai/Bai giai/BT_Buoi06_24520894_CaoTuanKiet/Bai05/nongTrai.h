// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#pragma once
#include "bo.h"
#include "cuu.h"
#include "de.h"
class nongTrai
{
private:
	vector<giaSuc*> danhSachGiaSuc;
	unsigned int luaSinh;
public:
	nongTrai(size_t = 0);
	void nhapSoLuongMoiLoai();
	void tiengKeuTatCaGiaSuc();
	void thongKeSoLuongGiaSucTungLoai();
	void thongKeTongSoLitSuaTatCaGiaSuc();
	void dongLoatSinhCon();
};
