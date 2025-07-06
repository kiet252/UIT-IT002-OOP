// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#pragma once
#include "khachHangLoaiA.h"
#include "khachHangLoaiB.h"
#include "khachHangLoaiC.h"
#include <vector>

class congTy
{
private:
	vector<khachHang*> danhSachKhachHang;
public:
	congTy(size_t = 0);
	void nhapDanhSach();
	unsigned long tongTienThuDuoc();
	void xuatDanhSach();
};

