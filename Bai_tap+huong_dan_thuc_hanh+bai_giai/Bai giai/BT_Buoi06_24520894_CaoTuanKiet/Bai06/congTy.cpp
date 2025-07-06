// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "congTy.h"

congTy::congTy(size_t soLuong) {
	danhSachKhachHang.resize(soLuong);
}

void congTy::nhapDanhSach() {
	size_t x, y, z;
	ifstream inpFile("XYZ.INP");
	if (!inpFile.is_open()) {
		cout << "Khong ton tai file XYZ.INP tren may, xin hay tao file." << endl;
		return;
	}
	inpFile >> x >> y >> z;
	danhSachKhachHang.resize(x + y + z);
	for (size_t i = 0; i < x; i++) {
		danhSachKhachHang[i] = new khachHangLoaiA;
		danhSachKhachHang[i]->nhapThongTin(inpFile);
	}

	for (size_t i = x; i < x + y; i++) {
		danhSachKhachHang[i] = new khachHangLoaiB;
		danhSachKhachHang[i]->nhapThongTin(inpFile);
	}

	for (size_t i = x + y; i < x + y + z; i++) {
		danhSachKhachHang[i] = new khachHangLoaiC;
		danhSachKhachHang[i]->nhapThongTin(inpFile);
	}
	inpFile.close();
}

unsigned long congTy::tongTienThuDuoc() {
	unsigned long tongTien = 0;
	for (auto khachhang : danhSachKhachHang) tongTien += khachhang->tinhSoTienPhaiTra();
	return tongTien;
}

void congTy::xuatDanhSach() {
	ofstream outFile("XYZ.OUT");
	for (auto khachhang : danhSachKhachHang) khachhang->xuatThongTin(outFile);
	outFile << tongTienThuDuoc();
}