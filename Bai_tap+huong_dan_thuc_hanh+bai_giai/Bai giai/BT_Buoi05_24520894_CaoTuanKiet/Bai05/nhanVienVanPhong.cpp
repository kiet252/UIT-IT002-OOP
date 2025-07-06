// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "nhanVienVanPhong.h"

nhanVienVanPhong::nhanVienVanPhong(string hoTen, string ngaySinh, unsigned int soNgayLamViec) : nhanVien(hoTen, ngaySinh) {
	this->soNgayLamViec = soNgayLamViec;
}

void nhanVienVanPhong::nhapThongTin() {
	nhanVien::nhapThongTin();
	cout << "Nhap so ngay nhan vien lam viec: ";
	cin >> soNgayLamViec;
}

void nhanVienVanPhong::xuatThongTin() const {
	nhanVien::xuatThongTin();
	cout << "So ngay nhan vien lam viec: " << soNgayLamViec << endl;
}

unsigned long nhanVienVanPhong::tinhLuong() const {
	return soNgayLamViec * 100000;
}