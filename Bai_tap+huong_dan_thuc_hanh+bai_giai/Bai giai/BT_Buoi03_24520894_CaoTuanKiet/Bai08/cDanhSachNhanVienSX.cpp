// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "cDanhSachNhanVienSX.h"

bool cDanhSachNhanVienSX::luongTangDan(cNhanVienSX a, cNhanVienSX b) {
	return a.getLuong() < b.getLuong();
}

bool cDanhSachNhanVienSX::lonTuoiHon(cNhanVienSX a, cNhanVienSX b) {
	stringstream ss1(a.getNgaySinh());
	stringstream ss2(b.getNgaySinh());
	string ngayA, thangA, namA;
	string ngayB, thangB, namB;

	getline(ss1, ngayA, '/');
	getline(ss1, thangA, '/');
	getline(ss1, namA, '/');

	getline(ss2, ngayB, '/');
	getline(ss2, thangB, '/');
	getline(ss2, namB, '/');

	if (namA < namB) return true;
	else if (namA > namB) return false;

	if (thangA < thangB) return true;
	else if (thangA > thangB) return false;

	if (ngayA <= ngayB) return true;
	else return false;
}

cDanhSachNhanVienSX::cDanhSachNhanVienSX() : danhSachNhanVien() {}

cDanhSachNhanVienSX::cDanhSachNhanVienSX(int n) {
	danhSachNhanVien.resize(n);
}

void cDanhSachNhanVienSX::nhap(int n) {
	danhSachNhanVien.resize(n);
	for (int i = 0; i < n; i++) {
		danhSachNhanVien[i].nhap();
	}
}

void cDanhSachNhanVienSX::xuat() {
	for (cNhanVienSX nhanVien : danhSachNhanVien) {
		nhanVien.xuat();
	}
	cout << endl;
}

cNhanVienSX cDanhSachNhanVienSX::nhanVienLuongThapNhat() {
	cNhanVienSX luongThapNhat = danhSachNhanVien[0];
	for (cNhanVienSX nhanVien : danhSachNhanVien) {
		if (nhanVien.getLuong() < luongThapNhat.getLuong()) luongThapNhat = nhanVien;
	}
	return luongThapNhat;
}

unsigned long long cDanhSachNhanVienSX::tongLuongPhaiTra() {
	unsigned long long tongLuong = 0;
	for (cNhanVienSX nhanVien : danhSachNhanVien) {
		tongLuong += nhanVien.getLuong();
	}
	return tongLuong;
}

cNhanVienSX cDanhSachNhanVienSX::nhanVienTuoiCaoNhat() {
	cNhanVienSX tuoiCaoNhat = danhSachNhanVien[0];
	for (cNhanVienSX nhanVien : danhSachNhanVien) {
		if (lonTuoiHon(nhanVien, tuoiCaoNhat)) tuoiCaoNhat = nhanVien;
	}
	return tuoiCaoNhat;
}

void cDanhSachNhanVienSX::sapXepTangDanTheoLuong() {
	sort(danhSachNhanVien.begin(), danhSachNhanVien.end(), luongTangDan);
}