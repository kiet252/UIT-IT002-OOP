// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "giaoDichNhaPho.h"

bool giaoDichNhaPho::kiemTraLoaiNhaHopLe() {
	return (loaiNha == "cao cap" || loaiNha == "thuong");
}

bool giaoDichNhaPho::kiemTraDiaChiHopLe() {
	for (char c : diaChi) {
		if (!isalpha(c) && !isdigit(c) && c != ' ' && c != ',' && c != '/') return false;
	}
	return true;
}

giaoDichNhaPho::giaoDichNhaPho(string maGiaoDich, string ngayGiaoDich, unsigned long donGia, unsigned long dienTich, string loaiNha, string diaChi) : giaoDichBatDongSan(maGiaoDich, ngayGiaoDich, donGia, dienTich) {
	this->loaiNha = loaiNha;
	this->diaChi = diaChi;
}

void giaoDichNhaPho::nhapThongTin() {
	giaoDichBatDongSan::nhapThongTin();
	cout << "Nhap loai nha (cao cap / thuong): ";
	cin.ignore();
	do {
		getline(cin, loaiNha);
		if (!kiemTraLoaiNhaHopLe()) cout << "Loai nha khong hop le! Xin hay nhap lai." << endl;
	} while (!kiemTraLoaiNhaHopLe());
	cout << "Nhap dia chi nha: ";
	do {
		getline(cin, diaChi);
		if (!kiemTraDiaChiHopLe()) cout << "Dia chi nha khong hop le! Xin hay nhap lai." << endl;
	} while (!kiemTraDiaChiHopLe());
}

void giaoDichNhaPho::xuatThongTin() {
	giaoDichBatDongSan::xuatThongTin();
	cout << "Loai nha: " << loaiNha << endl;
	cout << "Dia chi nha: " << diaChi << endl;
}

unsigned long giaoDichNhaPho::tinhThanhTien() {
	return unsigned long(giaoDichBatDongSan::tinhThanhTien() * (loaiNha == "thuong" ? 0.9 : 1));
}