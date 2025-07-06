// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include <iostream>
#include <string>
using namespace std;
#pragma once
class sach
{
private:
	string maSach, ngayNhap, nhaXuatBan;
	unsigned long donGia, soLuong;
	void chuanHoaNgayNhap();
	bool kiemTraNgayNhapHopLe();
	bool kiemTraTenNhaXuatBanHopLe();
public:
	sach(string = "", string = "", unsigned long = 0, unsigned long = 0, string = "");
	void nhapThongTin();
	void xuatThongtin();
	string getMaSach();
	string getNhaXuatBan();
	unsigned long getDonGia();
	unsigned long tinhThanhTien();
};

