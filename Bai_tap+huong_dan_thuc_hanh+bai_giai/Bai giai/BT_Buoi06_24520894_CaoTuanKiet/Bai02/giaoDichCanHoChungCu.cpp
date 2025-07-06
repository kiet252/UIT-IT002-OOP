// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "giaoDichCanHoChungCu.h"

giaoDichCanHoChungCu::giaoDichCanHoChungCu(string ma, string ngay, unsigned long donGia, unsigned long dienTich, string maCan, unsigned int viTriTang) : giaoDich(ma, ngay, donGia, dienTich) {
	this->maCan = maCan;
	this->viTriTang = viTriTang;
}

void giaoDichCanHoChungCu::nhapThongTin() {
	giaoDich::nhapThongTin();
	cout << "Nhap ma can ho: ";
	cin >> maCan;
	cout << "Nhap vi tri tang cua can ho: ";
	cin >> viTriTang;
}

void giaoDichCanHoChungCu::xuatThongTin() {
	giaoDich::xuatThongTin();
	cout << "Ma can ho: " << ma << endl;
	cout << "Vi tri tang cua can ho: " << viTriTang << endl;
}

unsigned long giaoDichCanHoChungCu::tinhThanhTien() {
	unsigned long thanhTienChuaXetViTriTang = dienTich * donGia;
	if (viTriTang == 1) return thanhTienChuaXetViTriTang * 2;
	else if (viTriTang >= 15) return unsigned long(thanhTienChuaXetViTriTang * 1.2);
	else return thanhTienChuaXetViTriTang;
}

string giaoDichCanHoChungCu::getLoai() {
	return "giao dich can ho chung cu";
}