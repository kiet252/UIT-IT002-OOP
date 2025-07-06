// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "congTyBatDongSan.h"

bool congTyBatDongSan::kiemTraThangGiaoDichBang2NamGiaoDichBang2024(string ngayGD) {
	stringstream ss(ngayGD);
	string ngay, thang, nam;
	getline(ss, ngay, '/');
	getline(ss, thang, '/');
	getline(ss, nam, '/');
	return (stoi(thang) == 2 && stoi(nam) == 2024);
}

congTyBatDongSan::congTyBatDongSan(size_t soLuong) {
	DSGiaoDichDat.resize(soLuong);
	DSGiaoDichNhaPho.resize(soLuong);
	DSGiaoDichCanHoChungCu.resize(soLuong);
}

void congTyBatDongSan::nhapDanhSachGiaoDichDat() {
	size_t soLuong;

	cout << "Nhap so luong giao dich dat: " << endl;
	cin >> soLuong;
	DSGiaoDichDat.resize(soLuong);
	for (int i = 0; i < soLuong; i++) {
		cout << "Nhap thong tin giao dich dat thu " << i + 1 << ":" << endl;
		DSGiaoDichDat[i].nhapThongTin();
	}
}

void congTyBatDongSan::nhapDanhSachGiaoDichNhaPho() {
	size_t soLuong;

	cout << "Nhap so luong giao dich nha pho: " << endl;
	cin >> soLuong;
	DSGiaoDichNhaPho.resize(soLuong);
	for (int i = 0; i < soLuong; i++) {
		cout << "Nhap thong tin giao dich nha pho thu " << i + 1 << ":" << endl;
		DSGiaoDichNhaPho[i].nhapThongTin();
	}
}


void congTyBatDongSan::nhapDanhSachGiaoDichCanHoChungCu() {
	size_t soLuong;

	cout << "Nhap so luong giao dich can ho chung cu: " << endl;
	cin >> soLuong;
	DSGiaoDichCanHoChungCu.resize(soLuong);
	for (int i = 0; i < soLuong; i++) {
		cout << "Nhap thong tin giao dich can ho chung cu thu " << i + 1 << ":" << endl;
		DSGiaoDichCanHoChungCu[i].nhapThongTin();
	}
}

void congTyBatDongSan::tinhTongSoLuongTungLoai() {
	cout << "Tong so luong giao dich dat la: " << DSGiaoDichDat.size() << endl;
	cout << "Tong so luong giao dich nha pho la: " << DSGiaoDichNhaPho.size() << endl;
	cout << "Tong so luong giao dich can ho chung cu la: " << DSGiaoDichCanHoChungCu.size() << endl;
}

void congTyBatDongSan::tinhTrungBinhThanhTienGiaoDichCanHoChungCu() {
	unsigned long tongThanhTien = 0;
	for (giaoDichCanHoChungCu giaoDich : DSGiaoDichCanHoChungCu) tongThanhTien += giaoDich.tinhThanhTien();
	cout << "Trung binh thanh tien cac giao dich can ho chung cu: " << unsigned long(tongThanhTien / float(DSGiaoDichCanHoChungCu.size()) ) << endl;

}

void congTyBatDongSan::xuatGiaoDichNhaPhoTriGiaCaoNhat() {
	giaoDichNhaPho maxThanhTienNhaPho = DSGiaoDichNhaPho[0];
	for (giaoDichNhaPho giaoDich : DSGiaoDichNhaPho) {
		if (giaoDich.tinhThanhTien() > maxThanhTienNhaPho.tinhThanhTien()) maxThanhTienNhaPho = giaoDich;
	}
	cout << "Thong tin ve giao dich nha pho co tri gia cao nhat: " << endl;
	maxThanhTienNhaPho.xuatThongTin();
}

void congTyBatDongSan::xuatDanhSachGiaoDichThang12Nam2024() {
	cout << "Cac giao dich trong thang 12 nam 2024: " << endl;
	for (auto giaoDich : DSGiaoDichDat) {
		if (kiemTraThangGiaoDichBang2NamGiaoDichBang2024(giaoDich.getNgayGiaoDich())) giaoDich.xuatThongTin();
	}
	for (auto giaoDich : DSGiaoDichNhaPho) {
		if (kiemTraThangGiaoDichBang2NamGiaoDichBang2024(giaoDich.getNgayGiaoDich())) giaoDich.xuatThongTin();
	}
	for (auto giaoDich : DSGiaoDichCanHoChungCu) {
		if (kiemTraThangGiaoDichBang2NamGiaoDichBang2024(giaoDich.getNgayGiaoDich())) giaoDich.xuatThongTin();
	}
}