// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#pragma once
#include <iostream>
#include <string>
#include <fstream>

using namespace std;
class khachHang
{
protected:
	string ten;
	unsigned long soLuongHang, donGiaHang;
public:
	khachHang(string = "", unsigned long = 0, unsigned long = 0);
	virtual void nhapThongTin(ifstream&);
	virtual void xuatThongTin(ofstream&);
	virtual unsigned long tinhSoTienPhaiTra() = 0;
};

