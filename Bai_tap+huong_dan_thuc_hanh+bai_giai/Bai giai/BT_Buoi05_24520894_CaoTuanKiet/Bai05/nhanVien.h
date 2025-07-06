// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#pragma once
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class nhanVien
{
private:
	string hoTen, ngaySinh;
	bool kiemTraHoTen();
	bool kiemTraNgaySinh();
	void chuanHoaTu(string&);
	void chuanHoaHoTen();
	void chuanHoaNgaySinh();
public:
	nhanVien(string = "", string = "");
	void nhapThongTin();
	void xuatThongTin() const;
	unsigned long tinhLuong() const;
	string getHoTen() const;
};

