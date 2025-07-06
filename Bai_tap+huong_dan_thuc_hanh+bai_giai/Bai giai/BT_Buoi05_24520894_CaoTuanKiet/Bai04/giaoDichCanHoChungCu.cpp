// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "giaoDichCanHoChungCu.h"

giaoDichCanHoChungCu::giaoDichCanHoChungCu(string maGiaoDich, string ngayGiaoDich, unsigned long donGia, unsigned long dienTich, string maCanHo, unsigned int viTriTang) : giaoDichBatDongSan(maGiaoDich, ngayGiaoDich, donGia, dienTich) {
	this->maCanHo = maCanHo;
	this->viTriTang = viTriTang;
}

void giaoDichCanHoChungCu::nhapThongTin() {
	giaoDichBatDongSan::nhapThongTin();
	cout << "Nhap ma can ho: ";
	cin >> maCanHo;
	cout << "Nhap vi tri tang: ";
	cin >> viTriTang;
}

void giaoDichCanHoChungCu::xuatThongTin() {
	giaoDichBatDongSan::xuatThongTin();
	cout << "Ma can ho: " << maCanHo << endl;
	cout << "Vi tri tang: " << viTriTang << endl;
}

unsigned long giaoDichCanHoChungCu::tinhThanhTien() {
	if (viTriTang == 1) return giaoDichBatDongSan::tinhThanhTien() * 2;
	else if (viTriTang > 15) return unsigned long(giaoDichBatDongSan::tinhThanhTien() * 1.2);
	else return giaoDichBatDongSan::tinhThanhTien();
}