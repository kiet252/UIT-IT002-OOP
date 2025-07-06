// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#pragma once
#include <vector>
#include "chuyenXeNgoaiThanh.h"
#include "chuyenXeNoiThanh.h"
class danhSachChuyenXe
{
private:
	vector<chuyenXeNgoaiThanh> DSXeNgoaiThanh;
	vector<chuyenXeNoiThanh> DSXeNoiThanh;
public:
	danhSachChuyenXe(size_t = 0);
	void nhapThongTin();
	void xuatThongTin();
	unsigned long tongDoanhThuNgoaiThanh();
	unsigned long tongDoanhThuNoiThanh();
	unsigned long tongDoanhThu();
};
