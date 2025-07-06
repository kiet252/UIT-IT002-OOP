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
protected:
	string ma, hoTen, email, soDienThoai;
	unsigned short tuoi;
	unsigned long luongCoBan;

	void chuanHoaHoTen();
	bool kiemTraHoTenHopLe();

	bool kiemTraSDTHopLe();

	bool kiemTraEmailHopLe();

public:
	nhanVien(string = "", string = "", unsigned short = 0, string = "", string = "", unsigned long = 0);

	virtual void nhapThongTin();
	virtual void xuatThongTin();

	virtual unsigned long tinhLuong() = 0;
	virtual string getLoai() = 0;
};

