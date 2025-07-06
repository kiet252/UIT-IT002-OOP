// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "cDanhSachNhanVienVP.h"

bool cDanhSachNhanVienVP::luongTangDan(cNhanVienVP a, cNhanVienVP b) {
	return a.getLuong() < b.getLuong();
}

bool cDanhSachNhanVienVP::lonTuoiHon(cNhanVienVP a, cNhanVienVP b) {
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

cDanhSachNhanVienVP::cDanhSachNhanVienVP() : danhSachNhanVien() {}

cDanhSachNhanVienVP::cDanhSachNhanVienVP(int n) {
	danhSachNhanVien.resize(n);
}

void cDanhSachNhanVienVP::nhap(int n) {
	danhSachNhanVien.resize(n);
	for (int i = 0; i < n; i++) {
		danhSachNhanVien[i].nhap();
	}
}

void cDanhSachNhanVienVP::xuat() {
	for (cNhanVienVP nhanVien : danhSachNhanVien) {
		nhanVien.xuat();
	}
	cout << endl;
}

cNhanVienVP cDanhSachNhanVienVP::nhanVienLuongCaoNhat() {
	cNhanVienVP luongCaoNhat = danhSachNhanVien[0];
	for (cNhanVienVP nhanVien : danhSachNhanVien) {
		if (nhanVien.getLuong() > luongCaoNhat.getLuong()) luongCaoNhat = nhanVien;
	}
	return luongCaoNhat;
}

unsigned long long cDanhSachNhanVienVP::tongLuongPhaiTra() {
	unsigned long long tongLuong = 0;
	for (cNhanVienVP nhanVien : danhSachNhanVien) {
		tongLuong += nhanVien.getLuong();
	}
	return tongLuong;
}

cNhanVienVP cDanhSachNhanVienVP::nhanVienTuoiCaoNhat() {
	cNhanVienVP tuoiCaoNhat = danhSachNhanVien[0];
	for (cNhanVienVP nhanVien : danhSachNhanVien) {
		if (lonTuoiHon(nhanVien, tuoiCaoNhat) ) tuoiCaoNhat = nhanVien;
	}
	return tuoiCaoNhat;
}

void cDanhSachNhanVienVP::sapXepTangDanTheoLuong() {
	sort(danhSachNhanVien.begin(), danhSachNhanVien.end(), luongTangDan);
}

