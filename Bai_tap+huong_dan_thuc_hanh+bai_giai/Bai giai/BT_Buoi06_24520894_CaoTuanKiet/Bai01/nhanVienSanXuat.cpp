// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "nhanVienSanXuat.h"

nhanVienSanXuat::nhanVienSanXuat(string hoTen, string ngaySinh, unsigned int luongCanBan, unsigned int soSanPham) : nhanVien(hoTen, ngaySinh) {
	this->luongCanBan = luongCanBan;
	this->soSanPham = soSanPham;
}

void nhanVienSanXuat::nhapThongTin() {
	nhanVien::nhapThongTin();
	cout << "Nhap luong can ban cua nhan vien: ";
	cin >> luongCanBan;
	cout << "Nhap so san pham nhan vien da lam ra: ";
	cin >> soSanPham;
}

void nhanVienSanXuat::xuatThongTin() {
	nhanVien::xuatThongTin();
	cout << "Luong can ban cua nhan vien: " << luongCanBan << endl;
	cout << "So san pham nha vien da lam ra: " << soSanPham << endl;
}

string nhanVienSanXuat::getLoaiNhanVien() {
	return "san xuat";
}

unsigned long nhanVienSanXuat::tinhLuong() {
	return luongCanBan + soSanPham * 5000;
}
