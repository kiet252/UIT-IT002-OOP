// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "congTyX.h"

congTyX::congTyX(size_t n) {
	DSGiaoDichTienTe.resize(n);
	DSGiaoDichVang.resize(n);
}

void congTyX::nhapThongTinGiaoDichVang() {
	size_t n;
	cout << "Nhap so luong giao dich vang cong ty thuc hien: " << endl;
	cin >> n;
	DSGiaoDichVang.resize(n);
	for (int i = 0; i < n; i++) {
		cout << "Nhap thong tin giao dich vang thu " << i + 1 << ":" << endl;
		DSGiaoDichVang[i].nhapThongTin();
	}
}

void congTyX::nhapThongTinGiaoDichTienTe() {
	size_t n;
	cout << "Nhap so luong giao dich tien te cong ty thuc hien: " << endl;
	cin >> n;
	DSGiaoDichTienTe.resize(n);
	for (int i = 0; i < n; i++) {
		cout << "Nhap thong tin giao dich tien te thu " << i + 1 << ":" << endl;
		DSGiaoDichTienTe[i].nhapThongTin();
	}
}

void congTyX::xuatThongTinGiaoDichVang() {
	cout << "Thong tin ve cac giao dich vang trong cong ty: " << endl;
	for (auto giaoDich : DSGiaoDichVang) giaoDich.xuatThongTin();
}

void congTyX::xuatThongTinGiaoDichTienTe() {
	cout << "Thong tin ve cac giao dich tien te trong cong ty: " << endl;
	for (auto giaoDich : DSGiaoDichTienTe) giaoDich.xuatThongTin();
}

void congTyX::timGiaoDichVangThanhTienCaoNhat() {
	giaoDichVang maxThanhTien = DSGiaoDichVang[0];
	for (auto giaoDich : DSGiaoDichVang) {
		if (giaoDich.tinhThanhTien() > maxThanhTien.tinhThanhTien()) maxThanhTien = giaoDich;
	}
	cout << "Thong tin ve giao dich vang co thanh tien cao nhat:" << endl;
	maxThanhTien.xuatThongTin();
}

void congTyX::timGiaoDichNgoaiTeEuroThanhTienThapNhat() {
	size_t soLuong = DSGiaoDichTienTe.size();
	int i = 0;
	while (i < soLuong && DSGiaoDichTienTe[i].getLoaiTien() != 3) i++;
	if (i >= soLuong) {
		cout << "Khong ton tai giao dich ngoai te Euro!" << endl;
		return;
	}
	giaoDichTienTe minGiaoDichEuro = DSGiaoDichTienTe[i];
	for (int j = i; j < soLuong; j++) {
		if (DSGiaoDichTienTe[j].tinhThanhTien() < minGiaoDichEuro.tinhThanhTien()) minGiaoDichEuro = DSGiaoDichTienTe[j];
	}
	cout << "Thong tin ve giao dich Euro co thanh tien thap nhat: " << endl;
	minGiaoDichEuro.xuatThongTin();
}

void congTyX::xuatThongTinCacGiaoDichThanhTienTrenMotTy() {
	cout << "Danh sach cac giao dich co than tien tren 1000000000d: " << endl;
	for (auto giaoDich : DSGiaoDichVang) {
		if (giaoDich.tinhThanhTien() > 1000000000) giaoDich.xuatThongTin();
	}
	for (auto giaoDich : DSGiaoDichTienTe) {
		if (giaoDich.tinhThanhTien() > 1000000000) giaoDich.xuatThongTin();
	}
}