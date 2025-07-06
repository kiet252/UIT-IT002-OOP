// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#pragma once
#include "nhanVien.h"

class kiemChungVien : public nhanVien
{
private:
	unsigned long soLoiPhatHienDuoc;
public:
	kiemChungVien(string = "", string = "", unsigned short = 0, string = "", string = "", unsigned long = 0, unsigned long = 0);

	void nhapThongTin();
	void xuatThongTin();

	unsigned long tinhLuong();
	string getLoai();
};

