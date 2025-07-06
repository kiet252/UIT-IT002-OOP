// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "giaoDich.h"

bool giaoDich::kiemTraNgayGiaoDichHopLe() {
	short int soDauXet = 0;
	short lastCharIndex = ngay.size() - 1;
	for (const char& c : ngay) {
		if (c == '/') soDauXet++;
		if (!isdigit(c) && c != '/' && soDauXet > 2) return false;
	}
	if (soDauXet != 2 || !isdigit(ngay[lastCharIndex])) return false;
	return true;
}

void giaoDich::chuanHoaNgayGiaoDich() {
	if (ngay[2] != '/') ngay.insert(ngay.begin(), '0');
	if (ngay[5] != '/') ngay.insert(ngay.begin() + 3, '0');
}

giaoDich::giaoDich(string ma, string ngay, unsigned long donGia, unsigned long dienTich) {
	this->ma = ma;
	this->ngay = ngay;
	this->donGia = donGia;
	this->dienTich = dienTich;
}

void giaoDich::nhapThongTin() {
	cout << "Nhap ma giao dich: ";
	cin >> ma;
	cout << "Nhap ngay giao dich (dinh dang: ngay/thang/nam): ";
	do {
		cin >> ngay;
		if (!kiemTraNgayGiaoDichHopLe()) cout << "Ngay giao dich khong hop le! Xin hay nhap lai." << endl;
	} while (!kiemTraNgayGiaoDichHopLe());
	chuanHoaNgayGiaoDich();
	cout << "Nhap don gia cua giao dich: ";
	cin >> donGia;
	cout << "Nhap dien tich cua giao dich: ";
	cin >> dienTich;
}

void giaoDich::xuatThongTin() {
	cout << "Ma giao dich: " << ma << endl;
	cout << "Ngay giao dich: " << ngay << endl;
	cout << "Don gia cua giao dich: " << donGia << endl;
	cout << "Dien tich cua giao dich: " << dienTich << endl;
}

string giaoDich::getNgay() {
	return ngay;
}

