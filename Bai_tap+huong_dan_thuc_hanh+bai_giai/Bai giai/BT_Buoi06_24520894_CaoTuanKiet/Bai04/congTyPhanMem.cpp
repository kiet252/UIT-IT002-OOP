// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "congTyPhanMem.h"

congTyPhanMem::congTyPhanMem(size_t soLuong) {
	danhSachNhanVien.resize(soLuong);
}
void congTyPhanMem::nhapDS() {
	size_t soLuongLTV, soLuongKCV;
	cout << "Nhap so luong lap trinh vien trong cong ty: ";
	cin >> soLuongLTV;
	danhSachNhanVien.resize(soLuongLTV);
	for (size_t i = 0; i < soLuongLTV; i++) {
		danhSachNhanVien[i] = new lapTrinhVien;
		cout << "Nhap thong tin ve lap trinh vien thu " << i + 1 << ":" << endl;
		danhSachNhanVien[i]->nhapThongTin();
	}

	cout << "Nhap so luong kiem chung vien trong cong ty: ";
	cin >> soLuongKCV;
	danhSachNhanVien.resize(soLuongLTV + soLuongKCV);
	for (size_t i = soLuongLTV; i < soLuongLTV + soLuongKCV; i++) {
		danhSachNhanVien[i] = new kiemChungVien;
		cout << "Nhap thong tin ve kiem chung vien thu " << i + 1 - soLuongLTV << ":" << endl;
		danhSachNhanVien[i]->nhapThongTin();
	}
}
void congTyPhanMem::xuatDS() {
	cout << "Danh sach cac nhan vien trong cong ty: " << endl;
	for (nhanVien* nhanvien : danhSachNhanVien) {
		nhanvien->xuatThongTin();
	}
}
void congTyPhanMem::xuatDSCacNhanVienLuongThapHonLuongTrungBinh() {
	if (danhSachNhanVien.size() == 0) {
		cout << "Hien tai trong cong ty khong co nhan vien!" << endl;
		return;
	}
	unsigned long luongTrungBinh = 0;
	for (nhanVien* nhanvien : danhSachNhanVien) {
		luongTrungBinh += nhanvien->tinhLuong();
	}
	luongTrungBinh /= danhSachNhanVien.size();
	cout << "Luong trung binh cua cac nhan vien trong cong ty: " << luongTrungBinh << endl;
	cout << "Danh sach cac nhan vien co luong duoi trung binh: " << endl;
	for (nhanVien* nhanvien : danhSachNhanVien) {
		if (nhanvien->tinhLuong() < luongTrungBinh) nhanvien->xuatThongTin();
	}
}

void congTyPhanMem::xuatThongTinNhanVienLuongCaoNhat() {
	nhanVien* NVLuongCaoNhat = danhSachNhanVien[0];
	for (nhanVien* nhanvien : danhSachNhanVien) {
		if (NVLuongCaoNhat->tinhLuong() < nhanvien->tinhLuong()) NVLuongCaoNhat = nhanvien;
	}
	cout << "Thong tin ve nhan vien co luong cao nhat: " << endl;
	NVLuongCaoNhat->xuatThongTin();
}

void congTyPhanMem::xuatThongTinNhanVienLuongThapNhat() {
	nhanVien* NVLuongThapNhat = danhSachNhanVien[0];
	for (nhanVien* nhanvien : danhSachNhanVien) {
		if (NVLuongThapNhat->tinhLuong() > nhanvien->tinhLuong()) NVLuongThapNhat = nhanvien;
	}
	cout << "Thong tin ve nhan vien co luong thap nhat: " << endl;
	NVLuongThapNhat->xuatThongTin();
}
void congTyPhanMem::xuatThongTinLapTrinhVienLuongCaoNhat() {
	size_t i = 0;
	while (i < danhSachNhanVien.size() && danhSachNhanVien[i]->getLoai() != "lap trinh vien") i++;
	if (i >= danhSachNhanVien.size()) {
		cout << "Hien tai trong cong ty khong co lap trinh vien! Khong xuat duoc thong tin lap trinh vien co luong cao nhat." << endl;
		return;
	}
	nhanVien* lapTrinhVienLuongCaoNhat = danhSachNhanVien[i];
	for (size_t j = i; j < danhSachNhanVien.size(); j++) {
		if (danhSachNhanVien[j]->getLoai() == "lap trinh vien" && lapTrinhVienLuongCaoNhat->tinhLuong() < danhSachNhanVien[j]->tinhLuong()) lapTrinhVienLuongCaoNhat = danhSachNhanVien[j];
	}
	cout << "Thong tin ve lap trinh vien co luong cao nhat: " << endl;
	lapTrinhVienLuongCaoNhat->xuatThongTin();
}
void congTyPhanMem::xuatThongTinKiemChungVienLuongThapNhat() {
	size_t i = 0;
	while (i < danhSachNhanVien.size() && danhSachNhanVien[i]->getLoai() != "kiem chung vien") i++;
	if (i >= danhSachNhanVien.size()) {
		cout << "Hien tai trong cong ty khong co kiem chung vien! Khong xuat duoc thong tin kiem chung vien co luong thap nhat." << endl;
		return;
	}
	nhanVien* kiemChungVienLuongThapNhat = danhSachNhanVien[i];
	for (size_t j = i; j < danhSachNhanVien.size(); j++) {
		if (danhSachNhanVien[j]->getLoai() == "kiem chung vien" && kiemChungVienLuongThapNhat->tinhLuong() < danhSachNhanVien[j]->tinhLuong()) kiemChungVienLuongThapNhat = danhSachNhanVien[j];
	}
	cout << "Thong tin ve lap trinh vien co luong cao nhat: " << endl;
	kiemChungVienLuongThapNhat->xuatThongTin();
}