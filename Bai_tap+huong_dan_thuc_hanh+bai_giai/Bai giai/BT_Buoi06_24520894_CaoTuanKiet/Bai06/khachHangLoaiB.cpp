// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "khachHangLoaiB.h"

khachHangLoaiB::khachHangLoaiB(string ten, unsigned long soLuongHang, unsigned long donGiaHang, unsigned int soNamThanThiet) : khachHang(ten, soLuongHang, donGiaHang) {
	this->soNamThanThiet = soNamThanThiet;
}

void khachHangLoaiB::nhapThongTin(ifstream& inpFile) {
	khachHang::nhapThongTin(inpFile);
	inpFile >> soNamThanThiet;
}

void khachHangLoaiB::xuatThongTin(ofstream& outFile) {
	khachHang::xuatThongTin(outFile);
	outFile << tinhSoTienPhaiTra() << endl;
}

unsigned long khachHangLoaiB::tinhSoTienPhaiTra() {
	float phanTramKhuyenMai = max(float(soNamThanThiet) * 0.05, 0.5);
	return unsigned long((soLuongHang * donGiaHang) * (1 - phanTramKhuyenMai) + (soLuongHang * donGiaHang) * 0.1);
}