// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "giaoDich.h"

void giaoDich::chuanHoaNgayGiaoDich() {
	if (ngayGiaoDich[2] != '/') ngayGiaoDich.insert(ngayGiaoDich.begin(), '0');
	if (ngayGiaoDich[5] != '/') ngayGiaoDich.insert(ngayGiaoDich.begin() + 3, '0');
}

bool giaoDich::kiemTraNgayGiaoDichHopLe() {
	unsigned int soDauXet = 0;
	for (char c : ngayGiaoDich) {
		if (!isdigit(c) && c != '/') return false;
		if (c == '/') soDauXet++;
	}
	if (soDauXet != 2) return false;
	return true;
}

giaoDich::giaoDich(string maGiaoDich, string ngayGiaoDich, unsigned long donGia, unsigned long soLuong) {
	this->maGiaoDich = maGiaoDich;
	this->ngayGiaoDich = ngayGiaoDich;
	this->donGia = donGia;
	this->soLuong = soLuong;
}

void giaoDich::nhapThongTin() {
	cout << "Nhap ma giao dich: " << endl;
	cin >> maGiaoDich;
	cout << "Nhap ngay giao dich (Dinh dang ngay/thang/nam): " << endl;
	do {
		cin >> ngayGiaoDich;
		if (!kiemTraNgayGiaoDichHopLe()) cout << "Ngay giao dich khong hop le! Xin hay nhap lai." << endl;
	} while (!kiemTraNgayGiaoDichHopLe());
	cout << "Nhap don gia cua giao dich: " << endl;
	cin >> donGia;
	cout << "Nhap so luong cua giao dich: " << endl;
	cin >> soLuong;
}

void giaoDich::xuatThongTin() {
	cout << "Ma giao dich: " << maGiaoDich << endl;
	cout << "Ngay giao dich: " << ngayGiaoDich << endl;
	cout << "Don gia giao dich: " << donGia << endl;
	cout << "So luong giao dich: " << soLuong << endl;
}

unsigned long giaoDich::tinhThanhTien() {
	return soLuong * donGia;
}