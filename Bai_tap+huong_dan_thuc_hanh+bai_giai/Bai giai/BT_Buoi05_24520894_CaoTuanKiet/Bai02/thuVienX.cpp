// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "thuVienX.h"

thuVienX::thuVienX(size_t soLuong) {
	DSSachGiaoKhoa.resize(soLuong);
	DSSachThamKhao.resize(soLuong);
}

void thuVienX::nhapThongTin() {
	size_t soLuong = DSSachGiaoKhoa.size();
	if (soLuong == 0) {
		size_t n;
		cout << "Nhap so luong sach cua thu vien:" << endl;
		cin >> n;
		DSSachGiaoKhoa.resize(n);
		DSSachThamKhao.resize(n);
		soLuong = n;
	}

	for (size_t i = 0; i < soLuong; i++) {
		cout << "Nhap thong tin sach giao khoa thu " << i + 1 << ":" << endl;
		DSSachGiaoKhoa[i].nhapThongTin();
	}

	for (size_t i = 0; i < soLuong; i++) {
		cout << "Nhap thong tin sach tham khao thu " << i + 1 << ":" << endl;
		DSSachThamKhao[i].nhapThongTin();
	}
}

void thuVienX::xuatThongTin() {
	cout << "Thong tin tat ca sach giao khoa trong thu vien: " << endl;
	for (auto sach : DSSachGiaoKhoa) sach.xuatThongTin();
	cout << "Thong tin tat ca sach tham khao trong thu vien: " << endl;
	for (auto sach : DSSachThamKhao) sach.xuatThongTin();
}

void thuVienX::tinhThanhTienTungQuyenSach() {
	cout << "Thanh tien cua tung quyen sach giao khoa: " << endl;
	for (auto sach : DSSachGiaoKhoa) {
		cout << "Ma sach: " << sach.getMaSach() << endl;
		cout << "Thanh tien cua sach: " << sach.tinhThanhTien() << endl;
	}
	cout << "Thanh tien cua tung quyen sach tham khao: " << endl;
	for (auto sach : DSSachThamKhao) {
		cout << "Ma sach: " << sach.getMaSach() << endl;
		cout << "Thanh tien cua sach: " << sach.tinhThanhTien() << endl;
	}
}

void thuVienX::tinhTongThanhTienTungLoaiSach() {
	unsigned long tongThanhTien = 0;
	for (auto sach : DSSachGiaoKhoa) tongThanhTien += sach.tinhThanhTien();
	cout << "Tong thanh tien loai sach giao khoa: " << tongThanhTien << endl;
	tongThanhTien = 0;
	for (auto sach : DSSachThamKhao) tongThanhTien += sach.tinhThanhTien();
	cout << "Tong thanh tien loai sach tham khao: " << tongThanhTien << endl;
}

void thuVienX::tinhTrungBinhCongDonGiaSachThamKhao() {
	size_t soLuong = DSSachThamKhao.size();
	float tongDonGia = 0;
	for (auto sach : DSSachThamKhao) tongDonGia += float(sach.getDonGia());
	cout << "Trung binh cong don gia sach tham khao la: " << long(tongDonGia / soLuong) << endl;
}

void thuVienX::xuatCacSachGiaoKhoaCuaNhaXuatBan(string nhaXuatBanCanTim) {
	cout << "Nhung quyen sach tu nha xuat ban " << nhaXuatBanCanTim << " la: " << endl;
	for (auto sach : DSSachGiaoKhoa) {
		if (sach.getNhaXuatBan() == nhaXuatBanCanTim) sach.xuatThongTin();
	}
	for (auto sach : DSSachThamKhao) {
		if (sach.getNhaXuatBan() == nhaXuatBanCanTim) sach.xuatThongTin();
	}
}