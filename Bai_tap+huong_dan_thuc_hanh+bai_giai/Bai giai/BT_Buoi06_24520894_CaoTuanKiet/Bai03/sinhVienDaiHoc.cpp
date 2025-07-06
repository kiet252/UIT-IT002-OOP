// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "sinhVienDaiHoc.h"

sinhVienDaiHoc::sinhVienDaiHoc(string maSo, string hoTen, string diaChi, unsigned int tongSoTinChi, unsigned short diemTrungBinh, string tenLuanVan, unsigned short diemLuanVan) : sinhVien(maSo, hoTen, diaChi, tongSoTinChi, diemTrungBinh) {
	this->tenLuanVan = tenLuanVan;
	this->diemLuanVan = diemLuanVan;
}

void sinhVienDaiHoc::nhapThongTin() {
	sinhVien::nhapThongTin();
	cin.ignore();
	cout << "Nhap ten luan van sinh vien lam: " << endl;
	getline(cin, tenLuanVan);
	cout << "Nhap diem luan van cua sinh vien: " << endl;
	do {
		cin >> diemLuanVan;
		if (diemLuanVan > 10) cout << "Diem luan van cua sinh vien khong hop le! Xin hay nhap lai." << endl;
	} while (diemLuanVan > 10);
}

void sinhVienDaiHoc::xuatThongTin() {
	sinhVien::xuatThongtin();
	cout << "Ten luan van cua sinh vien: " << tenLuanVan << endl;
	cout << "Diem luan van cua sinh vien: " << diemLuanVan << endl;
}

bool sinhVienDaiHoc::duDieuKienTotNghiep() {
	return (tongSoTinChi >= 170 && diemTrungBinh >= 5 && diemLuanVan >= 5);
}

string sinhVienDaiHoc::getLoai() {
	return "sinh vien dai hoc";
}