// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "sach.h"

void sach::chuanHoaNgayNhap() {
	if (ngayNhap[2] != '/') ngayNhap.insert(ngayNhap.begin(), '0');
	if (ngayNhap[5] != '/') ngayNhap.insert(ngayNhap.begin() + 3, '0');
}

bool sach::kiemTraNgayNhapHopLe() {
	unsigned int soDauXet = 0;
	for (char c : ngayNhap) {
		if (!isdigit(c) && c != '/') return false;
		if (c == '/') soDauXet++;
	}
	if (soDauXet != 2) return false;
	return true;
}

bool sach::kiemTraTenNhaXuatBanHopLe() {
	for (char c : nhaXuatBan) {
		if (!isalpha(c) && c != ' ') return false;
	}
	return true;
}

sach::sach(string maSach, string ngayNhap, unsigned long donGia, unsigned long soLuong, string nhaXuatBan) {
	this->maSach = maSach;
	this->ngayNhap = ngayNhap;
	this->donGia = donGia;
	this->soLuong = soLuong;
	this->nhaXuatBan = nhaXuatBan;
}

void sach::nhapThongTin() {
	cout << "Nhap ma sach: " << endl;
	cin >> maSach;
	do {
		cout << "Nhap ngay nhap thong tin sach (Dinh dang ngay/thang/nam): ";
		cin >> ngayNhap;
		if (!kiemTraNgayNhapHopLe()) cout << "Ngay nhap thong tin sach khong hop le! Xin hay nhap lai." << endl;
	} while (!kiemTraNgayNhapHopLe());
	cout << "Nhap don gia cua sach: " << endl;
	cin >> donGia;
	cout << "Nhap so luong cua sach: " << endl;
	cin >> soLuong;
	cin.ignore();
	do {
		cout << "Nhap ten nha xuat ban: " << endl;
		getline(cin, nhaXuatBan);
		if (!kiemTraTenNhaXuatBanHopLe()) cout << "Ten nha xuat ban khong hop le! Xin hay nhap lai." << endl;
	} while (!kiemTraTenNhaXuatBanHopLe());
}

void sach::xuatThongtin() {
	cout << "Ma sach: " << maSach << endl;
	cout << "Don gia cua sach: " << donGia << endl;
	cout << "So luong cua sach: " << soLuong << endl;
	cout << "Ten nha xuat ban: " << nhaXuatBan << endl;
}

string sach::getMaSach() {
	return maSach;
}

string sach::getNhaXuatBan() {
	return nhaXuatBan;
}

unsigned long sach::getDonGia() {
	return donGia;
}

unsigned long sach::tinhThanhTien() {
	return soLuong * donGia;
}