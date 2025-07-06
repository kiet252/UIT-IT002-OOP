// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "giaoDichBatDongSan.h"

void giaoDichBatDongSan::chuanHoaNgayGiaoDich() {
	if (ngayGiaoDich[2] != '/') ngayGiaoDich.insert(ngayGiaoDich.begin(), '0');
	if (ngayGiaoDich[5] != '/') ngayGiaoDich.insert(ngayGiaoDich.begin() + 3, '0');
}

bool giaoDichBatDongSan::kiemTraNgayGiaoDichHopLe() {
	unsigned int soDauXet = 0;
	for (char c : ngayGiaoDich) {
		if (!isdigit(c) && c != '/') return false;
		if (c == '/') soDauXet++;
	}
	if (soDauXet != 2) return false;
	return true;
}

giaoDichBatDongSan::giaoDichBatDongSan(string maGiaoDich, string ngayGiaoDich, unsigned long donGia, unsigned long dienTich) {
	this->maGiaoDich = maGiaoDich;
	this->ngayGiaoDich = ngayGiaoDich;
	this->donGia = donGia;
	this->dienTich = dienTich;
}

void giaoDichBatDongSan::nhapThongTin() {
	cout << "Nhap ma cua giao dich: ";
	cin >> maGiaoDich;
	do {
		cout << "Nhap ngay giao dich: ";
		cin >> ngayGiaoDich;
		if (!kiemTraNgayGiaoDichHopLe()) cout << "Ngay giao dich khong hop le! Xin hay nhap lai." << endl;
	} while (!kiemTraNgayGiaoDichHopLe());
	cout << "Nhap don gia cua giao dich: ";
	cin >> donGia;
	cout << "Nhap dien tich cua bat dong san dang giao dich: ";
	cin >> dienTich;
}

void giaoDichBatDongSan::xuatThongTin() {
	cout << "Ma giao dich: " << maGiaoDich << endl;
	cout << "Ngay giao dich: " << ngayGiaoDich << endl;
	cout << "Don gia cua giao dich: " << donGia << endl;
	cout << "Dien tich cua bat dong san dang giao dich: " << dienTich << endl;
}

unsigned long giaoDichBatDongSan::tinhThanhTien() {
	return donGia * dienTich;
}
string giaoDichBatDongSan::getNgayGiaoDich() {
	return ngayGiaoDich;
}