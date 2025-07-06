// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "khachHang.h"

khachHang::khachHang(string ten, unsigned long soLuongHang, unsigned long donGiaHang) {
	this->ten = ten;
	this->soLuongHang = soLuongHang;
	this->donGiaHang = donGiaHang;
}

void khachHang::nhapThongTin(ifstream& inpFile) {
	inpFile.ignore();
	getline(inpFile, ten);
	inpFile >> soLuongHang >> donGiaHang;
}

void khachHang::xuatThongTin(ofstream& outFile) {
	outFile << ten << endl;
}

