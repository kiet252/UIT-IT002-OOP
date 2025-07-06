// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "giaoDichVang.h"

giaoDichVang::giaoDichVang(string maGiaoDich, string ngayGiaoDich, unsigned long donGia, unsigned long soLuong, string loaiVang) : giaoDich(maGiaoDich, ngayGiaoDich, donGia, soLuong) {
	this->loaiVang = loaiVang;
}

void giaoDichVang::nhapThongTin() {
	giaoDich::nhapThongTin();
	cout << "Nhap ten loai vang: " << endl;
	cin.ignore();
	getline(cin, loaiVang);
}

void giaoDichVang::xuatThongTin() {
	giaoDich::xuatThongTin();
	cout << "Loai vang giao dich: " << loaiVang << endl;
}