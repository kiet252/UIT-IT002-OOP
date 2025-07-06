// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "giaoDichTienTe.h"

giaoDichTienTe::giaoDichTienTe(string maGiaoDich, string ngayGiaoDich, unsigned long donGia, unsigned long soLuong, float tiGia, unsigned short loaiTien) : giaoDich(maGiaoDich, ngayGiaoDich, donGia, soLuong) {
	this->tiGia = tiGia;
	this->loaiTien = loaiTien;
}

void giaoDichTienTe::nhapThongTin() {
	giaoDich::nhapThongTin();
	cout << "Nhap ti gia hoi doai: " << endl;
	do {
		cin >> tiGia;
		if (tiGia < 0) cout << "Ti gia khong hop le! Xin hay nhap lai." << endl;
	} while (tiGia < 0);
	cout << "Nhap loai tien te: (Nhap 1 neu la tien Viet Nam, 2 neu la tien USD va 3 neu la tien Euro): " << endl;
	do {
		cin >> loaiTien;
		if (loaiTien < 1 || loaiTien > 3) cout << "Loai tien khong hop le! Xin hay nhap lai." << endl;
	} while (loaiTien < 1 || loaiTien > 3);
}

void giaoDichTienTe::xuatThongTin() {
	giaoDich::xuatThongTin();
	cout << "Ti gia hoi doai: " << tiGia << endl;
	cout << "Loai tien giao dich: ";
	switch (loaiTien) {
	case 1:
		cout << "Tien Viet Nam";
		break;
	case 2:
		cout << "Tien USD";
		break;
	case 3:
		cout << "Tien Euro";
		break;
	default:
		break;
	}
	cout << endl;
}

unsigned short giaoDichTienTe::getLoaiTien() {
	return loaiTien;
}

unsigned long giaoDichTienTe::tinhThanhTien() {
	return unsigned long(giaoDich::tinhThanhTien() * (loaiTien == 1 ? 1 : tiGia));
}