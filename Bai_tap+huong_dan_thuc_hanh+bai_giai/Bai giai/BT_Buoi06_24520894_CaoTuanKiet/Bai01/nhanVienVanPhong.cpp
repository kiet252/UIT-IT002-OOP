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
	cout << "Nhap so ngay nhan vien da lam viec: ";
	cin >> soNgayLamViec;
}

void nhanVienVanPhong::xuatThongTin() {
	nhanVien::xuatThongTin();
	cout << "So ngay nhan vien da lam viec: " << soNgayLamViec << endl;
}

string nhanVienVanPhong::getLoaiNhanVien() {
	return "van phong";
}

unsigned long nhanVienVanPhong::tinhLuong() {
	return soNgayLamViec * 100000;
}
