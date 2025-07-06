// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "sachThamKhao.h"

sachThamKhao::sachThamKhao(string maSach, string ngayNhap, unsigned long donGia, unsigned long soLuong, string nhaXuatBan, unsigned long thue) : sach(maSach, ngayNhap, donGia, soLuong, nhaXuatBan) {
	this->thue = thue;
}

void sachThamKhao::nhapThongTin() {
	sach::nhapThongTin();
	cout << "Nhap thue phai dong cua sach: " << endl;
	cin >> thue;
}

void sachThamKhao::xuatThongTin() {
	sach::xuatThongtin();
	cout << "Tien thue phai dong cua sach: " << thue << endl;
}

unsigned long sachThamKhao::tinhThanhTien() {
	return sach::tinhThanhTien() + thue;
}