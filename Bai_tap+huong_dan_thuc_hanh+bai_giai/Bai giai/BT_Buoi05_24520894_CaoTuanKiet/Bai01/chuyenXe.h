// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

#pragma once
class chuyenXe
{
private:
	string maSoChuyen, hoTenTaiXe, soXe;
	unsigned long doanhThu;
	bool kiemTraHoTenHopLe();
	void chuanHoaTuTrongTen(string&);
	void chuanHoaHoTenTaiXe();
public:
	chuyenXe(string = "", string = "", string = "", unsigned long doanhThu = 0);
	void nhapThongTin();
	void xuatThongTin();
	unsigned long getDoanhThu();
};