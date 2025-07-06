// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "giaoDichDat.h"

giaoDichDat::giaoDichDat(string maGiaoDich, string ngayGiaoDich, unsigned long donGia, unsigned long dienTich, char loaiDat) : giaoDichBatDongSan(maGiaoDich, ngayGiaoDich, donGia, dienTich) {
	this->loaiDat = loaiDat;
}

void giaoDichDat::nhapThongTin() {
	giaoDichBatDongSan::nhapThongTin();
	cout << "Nhap loai dat (A / B / C): ";
	do {
		cin >> loaiDat;
		if (loaiDat < 'A' || loaiDat > 'C') cout << "Loai dat khong hop le! Xin hay nhap lai." << endl;
	} while (loaiDat < 'A' || loaiDat > 'C');
}

void giaoDichDat::xuatThongTin() {
	giaoDichBatDongSan::xuatThongTin();
	cout << "Loai dat: " << loaiDat << endl;
}

unsigned long giaoDichDat::tinhThanhTien() {
	if (loaiDat == 'A') return unsigned long(giaoDichBatDongSan::tinhThanhTien() * 1.5);
	else return unsigned long(giaoDichBatDongSan::tinhThanhTien());
}