// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#pragma once

#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

using namespace std;

class cCandidate {
private:
	string ma, hoVaTen, ngayThangNamSinh;
	double diemToan, diemVan, diemAnh;
	bool kiemTraNgayThangNamSinhHopLe();
	bool kiemTraTenHopLe();
	void chuanHoaTu(string&);
	void chuanHoaTen();
	void chuanHoaNgayThangNamSinh();
public:
	static int soLuong;
	cCandidate();
	cCandidate(string, string, string, double, double, double);
	friend istream& operator>>(istream&, cCandidate&);
	friend ostream& operator<<(ostream&, cCandidate);
	double TinhTongDiem();
};

