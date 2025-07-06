// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "giaoDichNhaPho.h"

giaoDichNhaPho::giaoDichNhaPho(string ma, string ngay, unsigned long donGia, unsigned long dienTich, string loaiNha, string diaChi) : giaoDich(ma, ngay, donGia, dienTich) {
	this->diaChi = diaChi;
	this->loaiNha = loaiNha;
}

void giaoDichNhaPho::nhapThongTin() {
	giaoDich::nhapThongTin();
	cin.ignore();
	cout << "Nhap loai nha (cao cap/thuong): ";
	do {
		getline(cin, loaiNha);
		if (loaiNha != "cao cap" && loaiNha != "thuong") cout << "Loai nha khong hop le! Xin hay nhap lai." << endl;
	} while (loaiNha != "cao cap" && loaiNha != "thuong");
	cout << "Nhap dia chi nha: ";
	getline(cin, diaChi);
}

void giaoDichNhaPho::xuatThongTin() {
	giaoDich::xuatThongTin();
	cout << "Loai nha: " << loaiNha << endl;
	cout << "Dia chi nha: " << diaChi << endl;
}

unsigned long giaoDichNhaPho::tinhThanhTien() {
	return unsigned long((loaiNha == "thuong" ? 0.9 : 1) * dienTich * donGia);
}

string giaoDichNhaPho::getLoai() {
	return "giao dich nha pho";
}