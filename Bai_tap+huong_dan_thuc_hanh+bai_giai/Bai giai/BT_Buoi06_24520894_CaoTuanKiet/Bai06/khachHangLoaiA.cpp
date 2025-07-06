// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "khachHangLoaiA.h"

khachHangLoaiA::khachHangLoaiA(string ten, unsigned long soLuongHang, unsigned long donGiaHang) : khachHang(ten, soLuongHang, donGiaHang) {}

void khachHangLoaiA::xuatThongTin(ofstream& outFile) {
	khachHang::xuatThongTin(outFile);
	outFile << tinhSoTienPhaiTra() << endl;
}

unsigned long khachHangLoaiA::tinhSoTienPhaiTra() {
	// (soLuongHang * donGiaHang) + (soLuongHang * donGiaHang) * 0.1
	return soLuongHang * donGiaHang * 1.1;
}