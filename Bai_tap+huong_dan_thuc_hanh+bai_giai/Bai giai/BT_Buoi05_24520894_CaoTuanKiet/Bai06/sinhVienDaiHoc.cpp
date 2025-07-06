// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "sinhVienDaiHoc.h"

sinhVienDaiHoc::sinhVienDaiHoc(string maSo, string hoTen, string diaChi, unsigned int tongSoTinChi, float diemTrungBinh, string tenLuanVan, float diemLuanVan) : sinhVien(maSo, hoTen, diaChi, tongSoTinChi, diemTrungBinh) {
	this->tenLuanVan = tenLuanVan;
	this->diemLuanVan = diemLuanVan;
}

void sinhVienDaiHoc::nhapThongTin() {
	sinhVien::nhapThongTin();
	cin.ignore();
	cout << "Nhap ten luan van sinh vien thuc hien: ";
	getline(cin, tenLuanVan);
	cout << "Nhap diem luan van cua sinh vien: ";
	cin >> diemLuanVan;
}

void sinhVienDaiHoc::xuatThongTin() const{
	sinhVien::xuatThongTin();
	cout << "Ten luan van sinh vien thuc hien: " << tenLuanVan << endl;
	cout << "Diem luan van cua sinh vien: " << diemLuanVan << endl;
}

bool sinhVienDaiHoc::xetDuDieuKienTotNghiep() const{
	return (sinhVien::xetDuDieuKienTotNghiep() && tongSoTinChi >= 145 && diemLuanVan >= 5);
}