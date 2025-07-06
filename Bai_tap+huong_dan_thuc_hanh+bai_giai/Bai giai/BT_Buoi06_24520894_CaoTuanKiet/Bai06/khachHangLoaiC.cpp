// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "khachHangLoaiC.h"

khachHangLoaiC::khachHangLoaiC(string ten, unsigned long soLuongHang, unsigned long donGiaHang) : khachHang(ten, soLuongHang, donGiaHang) {}

void khachHangLoaiC::xuatThongTin(ofstream& outFile) {
	khachHang::xuatThongTin(outFile);
	outFile << tinhSoTienPhaiTra() << endl;
}

unsigned long khachHangLoaiC::tinhSoTienPhaiTra() {
	// (soLuongHang * donGiaHang) * 0.5 + (soLuongHang * donGiaHang) + 0.1
	return (soLuongHang * donGiaHang) * 0.6;
}