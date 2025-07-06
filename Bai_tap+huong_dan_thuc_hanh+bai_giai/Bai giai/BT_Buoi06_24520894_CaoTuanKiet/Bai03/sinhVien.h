// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#pragma once
#include <iostream>
#include <sstream>
using namespace std;
class sinhVien
{
private:
	string maSo, hoTen, diaChi;
	bool kiemTraHoTenHopLe();
	void chuanHoaTuTrongTen(string&);
	void chuanHoaHoTen();
protected:
	unsigned int tongSoTinChi;
	unsigned short diemTrungBinh;
public:
	sinhVien(string = "", string = "", string = "", unsigned int = 0, unsigned short = 0);
	virtual void nhapThongTin();
	virtual void xuatThongtin();
	virtual unsigned short getDiemTrungBinh();
	virtual bool duDieuKienTotNghiep() = 0;
	virtual string getLoai() = 0;
};

