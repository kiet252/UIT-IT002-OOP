// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "giaoDichDat.h"

giaoDichDat::giaoDichDat(string ma, string ngay, unsigned long donGia, unsigned long dienTich, char loaiDat) : giaoDich(ma, ngay, donGia, dienTich) {
	this->loaiDat = loaiDat;
}

void giaoDichDat::nhapThongTin() {
	giaoDich::nhapThongTin();
	cout << "Nhap loai dat (A/B/C): ";
	do {
		cin >> loaiDat;
		if (loaiDat < 'A' || loaiDat > 'C') cout << "Loai dat khong hop le! Xin hay nhap lai." << endl;
	} while (loaiDat < 'A' || loaiDat > 'C');
}

void giaoDichDat::xuatThongTin() {
	giaoDich::xuatThongTin();
	cout << "Loai dat: " << loaiDat << endl;
}

unsigned long giaoDichDat::tinhThanhTien() {
	return unsigned long((loaiDat == 'A' ? 1.5 : 1) * donGia * dienTich);
}

string giaoDichDat::getLoai() {
	return "giao dich dat";
}