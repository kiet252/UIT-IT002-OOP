// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "truongDaiHoc.h"

truongDaiHoc::truongDaiHoc(size_t soLuong) {
	DSSinhVienCaoDang.resize(soLuong);
	DSSinhVienDaiHoc.resize(soLuong);
}

void truongDaiHoc::nhapDanhSachSinhVienCaoDang() {
	size_t soLuong;
	cout << "Nhap so luong sinh vien cao dang: " << endl;
	cin >> soLuong;
	DSSinhVienCaoDang.resize(soLuong);
	for (auto& sinhVien : DSSinhVienCaoDang) sinhVien.nhapThongTin();
}

void truongDaiHoc::nhapDanhSachSinhVienDaiHoc() {
	size_t soLuong;
	cout << "Nhap so luong sinh vien dai hoc: " << endl;
	cin >> soLuong;
	DSSinhVienDaiHoc.resize(soLuong);
	for (auto& sinhVien : DSSinhVienDaiHoc) sinhVien.nhapThongTin();
}

void truongDaiHoc::xuatDanhSachSinhVien() const {
	cout << "Danh sach sinh vien cao dang trong truong la: " << endl;
	for (const auto& sinhVien : DSSinhVienCaoDang) sinhVien.xuatThongTin();
	cout << "Danh sach sinh vien dai hoc trong truong la: " << endl;
	for (const auto& sinhVien : DSSinhVienDaiHoc) sinhVien.xuatThongTin();
}

void truongDaiHoc::xuatDanhSachSinhVienDuDieuKienTotNghiep() const{
	cout << "Danh sach thong tin cac sinh vien du dieu kien tot nghiep la: " << endl;
	for (const auto& sinhVien : DSSinhVienCaoDang) if (sinhVien.xetDuDieuKienTotNghiep()) sinhVien.xuatThongTin();
	for (const auto& sinhVien : DSSinhVienDaiHoc) if (sinhVien.xetDuDieuKienTotNghiep()) sinhVien.xuatThongTin();
}

void truongDaiHoc::xuatDanhSachSinhVienKhongDuDieuKienTotNghiep() const {
	cout << "Danh sach thong tin cac sinh vien khong du dieu kien tot nghiep la: " << endl;
	for (const auto& sinhVien : DSSinhVienCaoDang) if (!sinhVien.xetDuDieuKienTotNghiep()) sinhVien.xuatThongTin();
	for (const auto& sinhVien : DSSinhVienDaiHoc) if (!sinhVien.xetDuDieuKienTotNghiep()) sinhVien.xuatThongTin();
}

void truongDaiHoc::xuatSinhVienDiemTrungBinhCaoNhat() const {
	sinhVienCaoDang SVCaoDangMax = DSSinhVienCaoDang[0];
	sinhVienDaiHoc SVDaiHocMax = DSSinhVienDaiHoc[0];
	for (const auto& sinhVien : DSSinhVienCaoDang) {
		if (sinhVien.getDiemTrungBinh() > SVCaoDangMax.getDiemTrungBinh()) SVCaoDangMax = sinhVien;
	}

	for (const auto& sinhVien : DSSinhVienDaiHoc) {
		if (sinhVien.getDiemTrungBinh() > SVDaiHocMax.getDiemTrungBinh()) SVDaiHocMax = sinhVien;
	}

	cout << "Thong tin ve sinh vien co diem trung binh cao nhat la: " << endl;
	if (SVCaoDangMax.getDiemTrungBinh() > SVDaiHocMax.getDiemTrungBinh()) {
		SVCaoDangMax.xuatThongTin();
	} else {
		SVDaiHocMax.xuatThongTin();
	}
}