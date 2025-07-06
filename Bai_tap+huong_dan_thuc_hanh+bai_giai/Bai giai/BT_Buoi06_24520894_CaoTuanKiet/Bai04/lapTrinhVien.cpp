// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "lapTrinhVien.h"

lapTrinhVien::lapTrinhVien(string ma, string hoTen, unsigned short tuoi, string soDienThoai, string email, unsigned long luongCoBan, unsigned long soGioOvertime) : nhanVien(ma, hoTen, tuoi, soDienThoai, email, luongCoBan) {
	this->soGioOvertime = soGioOvertime;
}

void lapTrinhVien::nhapThongTin() {
	nhanVien::nhapThongTin();
	cout << "Nhap so gio nhan vien lam overtime: ";
	cin >> soGioOvertime;
}

void lapTrinhVien::xuatThongTin() {
	nhanVien::xuatThongTin();
	cout << "So gio nhan vien lam overtime: " << soGioOvertime << endl;
}

unsigned long lapTrinhVien::tinhLuong() {
	return luongCoBan + soGioOvertime * 200000;
}

string lapTrinhVien::getLoai() {
	return "lap trinh vien";
}