// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#pragma once
#include <iostream>
#include <sstream>
#include <string>
using namespace std;
class nhanVien
{
protected:
	string hoTen, ngaySinh;
	bool kiemTraHoTenHopLe();
	bool kiemTraNgaySinhHopLe();
	void chuanHoaNgaySinh();
	void chuanHoaTuTrongTen(string&);
	void chuanHoaHoTen();
public:
	nhanVien(string = "", string = "");
	virtual void nhapThongTin();
	virtual void xuatThongTin() const;
	virtual string getHoTen() const;
	virtual string getNgaySinh() const;
	virtual string getLoaiNhanVien() = 0;
	virtual unsigned long tinhLuong() = 0;
};



