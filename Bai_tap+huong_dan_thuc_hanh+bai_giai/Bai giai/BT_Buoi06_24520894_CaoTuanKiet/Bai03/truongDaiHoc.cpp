// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "truongDaiHoc.h"

truongDaiHoc::truongDaiHoc(size_t soLuong) {
	danhSachSinhVien.resize(soLuong);
}

void truongDaiHoc::nhapDanhSachSinhVien() {
	size_t soLuongSVCD, soLuongSVDH;
	cout << "Nhap so luong sinh vien cao dang o truong dai hoc: " << endl;
	cin >> soLuongSVCD;
	danhSachSinhVien.resize(soLuongSVCD);
	for (size_t i = 0; i < soLuongSVCD; i++) {
		cout << "Nhap thong tin sinh vien cao dang thu " << i + 1 << " : " << endl;
		danhSachSinhVien[i] = new sinhVienCaoDang;
		danhSachSinhVien[i]->nhapThongTin();
	}

	cout << "Nhap so luong sinh vien dai hoc o truong dai hoc: " << endl;
	cin >> soLuongSVDH;
	danhSachSinhVien.resize(soLuongSVCD + soLuongSVDH);
	for (size_t i = soLuongSVCD; i < soLuongSVCD + soLuongSVDH; i++) {
		cout << "Nhap thong tin sinh vien dai hoc thu " << i - soLuongSVCD + 1 << " : " << endl;
		danhSachSinhVien[i] = new sinhVienDaiHoc;
		danhSachSinhVien[i]->nhapThongTin();
	}
}

void truongDaiHoc::xuatDanhSachSinhVien() {
	cout << "Thong tin ve cac sinh vien trong truong dai hoc: " << endl;
	for (auto sinhVien : danhSachSinhVien) {
		sinhVien->xuatThongtin();
	}
}

void truongDaiHoc::xuatDanhSachSinhVienDuDKTotNghiep() {
	cout << "Thong tin ve cac sinh vien du dieu kien tot nghiep: " << endl;
	for (auto sinhVien : danhSachSinhVien) {
		if (sinhVien->duDieuKienTotNghiep()) sinhVien->xuatThongtin();
	}
}

void truongDaiHoc::xuatDanhSachSinhVienKhongDuDKTotNghiep() {
	cout << "Thong tin ve cac sinh vien khong du dieu kien tot nghiep: " << endl;
	for (auto sinhVien : danhSachSinhVien) {
		if (!sinhVien->duDieuKienTotNghiep()) sinhVien->xuatThongtin();
	}
}

void truongDaiHoc::xuatThongTinSinhVienDaiHocDiemTrungBinhCaoNhat() {
	size_t i = 0;
	while (i < danhSachSinhVien.size() && danhSachSinhVien[i]->getLoai() != "sinh vien dai hoc") i++;
	sinhVien* SVDHDiemTBCaoNhat = danhSachSinhVien[i];
	for (size_t j = i; j < danhSachSinhVien.size(); j++) {
		if (danhSachSinhVien[j]->getLoai() == "sinh vien dai hoc" && danhSachSinhVien[j]->getDiemTrungBinh() > SVDHDiemTBCaoNhat->getDiemTrungBinh()) SVDHDiemTBCaoNhat = danhSachSinhVien[j];
	}
	cout << "Thong tin ve sinh vien dai hoc co diem trung binh cao nhat: " << endl;
	SVDHDiemTBCaoNhat->xuatThongtin();
}

void truongDaiHoc::xuatThongTinSinhVienCaoDangDiemTrungBinhCaoNhat() {
	size_t i = 0;
	while (i < danhSachSinhVien.size() && danhSachSinhVien[i]->getLoai() != "sinh vien cao dang") i++;
	sinhVien* SVCDDiemTBCaoNhat = danhSachSinhVien[i];
	for (size_t j = i; j < danhSachSinhVien.size(); j++) {
		if (danhSachSinhVien[j]->getLoai() == "sinh vien cao dang" && danhSachSinhVien[j]->getDiemTrungBinh() > SVCDDiemTBCaoNhat->getDiemTrungBinh()) SVCDDiemTBCaoNhat = danhSachSinhVien[j];
	}
	cout << "Thong tin ve sinh vien cao dang co diem trung binh cao nhat: " << endl;
	SVCDDiemTBCaoNhat->xuatThongtin();
}

void truongDaiHoc::xuatSoLuongSinhVienOMoiLoaiKhongDuDKTotNghiep() {
	size_t soLuongSVDHKoDuDK = 0;
	size_t soLuongSVCDKoDuDk = 0;

	for (auto sinhVien : danhSachSinhVien) {
		if (!sinhVien->duDieuKienTotNghiep()) {
			if (sinhVien->getLoai() == "sinh vien dai hoc") soLuongSVDHKoDuDK++;
			else soLuongSVCDKoDuDk++;
		}
	}

	cout << "So luong sinh vien cao dang khong du dieu kien tot nghiep la: " << soLuongSVCDKoDuDk << endl;
	cout << "So luong sinh vien dai hoc khong du dieu kien tot nghiep la: " << soLuongSVDHKoDuDK << endl;
}