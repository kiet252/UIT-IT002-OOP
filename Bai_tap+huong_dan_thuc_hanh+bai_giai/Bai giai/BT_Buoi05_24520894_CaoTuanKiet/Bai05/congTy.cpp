// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "congTy.h"

congTy::congTy(size_t soLuong) {
	DSNhanVienSanXuat.resize(soLuong);
	DSNhanVienVanPhong.resize(soLuong);
}

void congTy::nhapDanhSachNhanVien() {
	size_t soLuong;
	cout << "Nhap so luong nhan vien san xuat trong cong ty: " << endl;
	cin >> soLuong;
	DSNhanVienSanXuat.resize(soLuong);
	for (int i = 0; i < soLuong; i++) {
		DSNhanVienSanXuat[i].nhapThongTin();
	}

	cout << "Nhap so luong nhan vien van phong trong cong ty: " << endl;
	cin >> soLuong;
	DSNhanVienVanPhong.resize(soLuong);
	for (int i = 0; i < soLuong; i++) {
		DSNhanVienVanPhong[i].nhapThongTin();
	}
}

void congTy::xuatDanhSachNhanVien() const {
	cout << "Thong tin ve tat ca cac nhan vien san xuat trong cong ty: " << endl;
	for (const auto& nhanVien : DSNhanVienSanXuat) {
		nhanVien.xuatThongTin();
	}
	cout << "Thong tin ve tat ca cac nhan vien van phong trong cong ty: " << endl;
	for (const auto& nhanVien : DSNhanVienVanPhong) {
		nhanVien.xuatThongTin();
	}
}

void congTy::tinhLuongTungNhanVien() const{
	cout << "Luong cua tung nhan vien trong cong ty: " << endl;
	for (const auto& nhanVien : DSNhanVienSanXuat) {
		cout << "Ho va ten nhan vien: " << nhanVien.getHoTen() << endl;
		cout << "Luong cua nhan vien: " << nhanVien.tinhLuong() << endl;
	}
	for (const auto& nhanVien : DSNhanVienVanPhong) {
		cout << "Ho va ten nhan vien: " << nhanVien.getHoTen() << endl;
		cout << "Luong cua nhan vien: " << nhanVien.tinhLuong() << endl;
	}
}

unsigned long congTy::tinhTongLuongTraChoCacNhanVien() const {
	unsigned long tongLuong = 0;
	for (const auto& nhanVien : DSNhanVienSanXuat) tongLuong += nhanVien.tinhLuong();
	for (const auto& nhanVien : DSNhanVienVanPhong) tongLuong += nhanVien.tinhLuong();
	return tongLuong;
}