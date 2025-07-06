// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

#pragma once
class sinhVien
{
private:
	bool kiemTraHoTen();
	void chuanHoaTu(string&);
	void chuanHoaHoTen();
	string maSo, hoTen, diaChi;
protected:
	unsigned tongSoTinChi;
	float diemTrungBinh;
public:
	sinhVien(string = "", string = "", string = "", unsigned int = 0, float = 0);
	void nhapThongTin();
	void xuatThongTin() const;
	bool xetDuDieuKienTotNghiep() const;
	float getDiemTrungBinh() const;
};

