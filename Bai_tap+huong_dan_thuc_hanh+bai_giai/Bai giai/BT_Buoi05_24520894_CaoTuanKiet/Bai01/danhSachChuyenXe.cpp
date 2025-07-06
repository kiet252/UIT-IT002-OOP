// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "danhSachChuyenXe.h"

danhSachChuyenXe::danhSachChuyenXe(size_t soLuong)
{
	DSXeNgoaiThanh.resize(soLuong);
	DSXeNoiThanh.resize(soLuong);
}

void danhSachChuyenXe::nhapThongTin() {
	size_t n, m;
	cout << "Nhap so chuyen xe di noi thanh: " << endl;
	cin >> n;
	cin.ignore();
	DSXeNoiThanh.resize(n);
	for (auto& chuyenXe : DSXeNoiThanh) chuyenXe.nhapThongTin();

	cout << "Nhap so chuyen xe di ngoai thanh: " << endl;
	cin >> m;
	cin.ignore();
	DSXeNgoaiThanh.resize(m);
	for (auto& chuyenXe : DSXeNgoaiThanh) chuyenXe.nhapThongTin();
}

void danhSachChuyenXe::xuatThongTin() {
	cout << "Cac chuyen xe di noi thanh la: " << endl;
	for (auto chuyenXe : DSXeNoiThanh) chuyenXe.xuatThongTin();
	cout << "Cac chuyen xe di ngoai thanh la: " << endl;
	for (auto chuyenXe : DSXeNgoaiThanh) chuyenXe.xuatThongTin();
}

unsigned long danhSachChuyenXe::tongDoanhThuNoiThanh() {
	unsigned long tongDoanhThu = 0;
	for (auto chuyenXe : DSXeNoiThanh) tongDoanhThu += chuyenXe.getDoanhThu();
	return tongDoanhThu;
}

unsigned long danhSachChuyenXe::tongDoanhThuNgoaiThanh() {
	unsigned long tongDoanhThu = 0;
	for (auto chuyenXe : DSXeNgoaiThanh) tongDoanhThu += chuyenXe.getDoanhThu();
	return tongDoanhThu;
}

unsigned long danhSachChuyenXe::tongDoanhThu() {
	return tongDoanhThuNgoaiThanh() + tongDoanhThuNoiThanh();
}