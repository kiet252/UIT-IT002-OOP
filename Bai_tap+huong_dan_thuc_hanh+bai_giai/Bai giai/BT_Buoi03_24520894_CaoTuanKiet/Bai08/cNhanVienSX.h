// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#pragma once
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class cNhanVienSX
{
private:
	string ma, hoTen, ngaySinh;
	unsigned int soSanPhamDaGiaCong, donGiaMotSanPham;
	bool kiemTraNgayThangNamSinhHopLe();
	bool kiemTraTenHopLe();
	void chuanHoaTu(string&);
	void chuanHoaTen();
	void chuanHoaNgayThangNamSinh();
public:
	cNhanVienSX();
	cNhanVienSX(string, string, string, unsigned int, unsigned int);
	string getMa();
	string getHoTen();
	string getNgaySinh();
	unsigned int getSoSanPhamDaGiaCong();
	unsigned int getDonGiaMotSanPham();
	void setMa();
	void setHoTen();
	void setNgaySinh();
	void setSoSanPhamDaGiaCong();
	void setDonGiaMotSanPham();
	void nhap();
	void xuat();
	unsigned long long getLuong();
};

