// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "kiemChungVien.h"

kiemChungVien::kiemChungVien(string ma, string hoTen, unsigned short tuoi, string soDienThoai, string email, unsigned long luongCoBan, unsigned long soLoiPhatHienDuoc) : nhanVien(ma, hoTen, tuoi, soDienThoai, email, luongCoBan) {
	this->soLoiPhatHienDuoc = soLoiPhatHienDuoc;
}

void kiemChungVien::nhapThongTin() {
	nhanVien::nhapThongTin();
	cout << "Nhap so loi nhan vien tim duoc: ";
	cin >> soLoiPhatHienDuoc;
}

void kiemChungVien::xuatThongTin() {
	nhanVien::xuatThongTin();
	cout << "So loi nhan vien tim duoc: " << soLoiPhatHienDuoc << endl;
}

unsigned long kiemChungVien::tinhLuong() {
	return luongCoBan + soLoiPhatHienDuoc * 50000;
}

string kiemChungVien::getLoai() {
	return "kiem chung vien";
}