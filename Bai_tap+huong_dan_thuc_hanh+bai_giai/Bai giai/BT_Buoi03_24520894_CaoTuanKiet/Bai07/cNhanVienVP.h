// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#pragma once
#include <iostream>
#include <iomanip>
#include <sstream>
#include <vector>
using namespace std;
class cNhanVienVP
{
	private:
		string ma, hoTen, ngaySinh;
		unsigned int luong;
		bool kiemTraNgayThangNamSinhHopLe();
		bool kiemTraTenHopLe();
		void chuanHoaTu(string&);
		void chuanHoaTen();
		void chuanHoaNgayThangNamSinh();
	public:
		cNhanVienVP();
		cNhanVienVP(string, string, string, unsigned int);
		string getMa();
		string getHoTen();
		string getNgaySinh();
		unsigned int getLuong();
		void setMa();
		void setHoTen();
		void setNgaySinh();
		void setLuong();
		void nhap();
		void xuat();
};

