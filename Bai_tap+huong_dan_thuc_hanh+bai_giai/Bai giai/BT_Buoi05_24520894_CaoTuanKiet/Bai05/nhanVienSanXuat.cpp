// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "nhanVienSanXuat.h"

nhanVienSanXuat::nhanVienSanXuat(string hoTen, string ngaySinh, unsigned long luongCanBan, unsigned long soSanPham) : nhanVien(hoTen, ngaySinh) {
	this->luongCanBan = luongCanBan;
	this->soSanPham = soSanPham;
}

void nhanVienSanXuat::nhapThongTin() {
	nhanVien::nhapThongTin();
	cout << "Nhap luong can ban cua nhan vien: ";
	cin >> luongCanBan;
	cout << "Nhap so luong san pham nhan vien lam ra: ";
	cin >> soSanPham;
}

void nhanVienSanXuat::xuatThongTin() const {
	nhanVien::xuatThongTin();
	cout << "Luong can ban cua nhan vien: " << luongCanBan << endl;
	cout << "So san pham nhan vien lam ra: " << soSanPham << endl;
}

unsigned long nhanVienSanXuat::tinhLuong() const {
	return luongCanBan + soSanPham * 5000;
}