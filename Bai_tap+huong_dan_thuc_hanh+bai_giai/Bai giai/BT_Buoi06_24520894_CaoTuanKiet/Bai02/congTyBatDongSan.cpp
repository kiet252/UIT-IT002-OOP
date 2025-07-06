// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "congTyBatDongSan.h"

bool congTyBatDongSan::kiemTraThangBang12NamBan2024(string ngayGiaoDich) {
	stringstream ntn(ngayGiaoDich);
	string ngay, thang, nam;
	getline(ntn, ngay, '/');
	getline(ntn, thang, '/');
	getline(ntn, nam, '/');
	return (thang == "02" && nam == "2024");
}

congTyBatDongSan::congTyBatDongSan(size_t soLuong) {
	danhSachCacGiaoDich.resize(soLuong);
}

void congTyBatDongSan::nhapDanhSachGiaoDich() {
	size_t soLuongGiaoDichDat, soLuongGiaoDichNhaPho, soLuongGiaoDichCanHoChungCu;
	cout << "Nhap so luong giao dich dat cua cong ty: " << endl;
	cin >> soLuongGiaoDichDat;
	danhSachCacGiaoDich.resize(soLuongGiaoDichDat);
	for (size_t i = 0; i < soLuongGiaoDichDat; i++) {
		cout << "Nhap thong tin ve giao dich nha dat thu " << i + 1 << ": " << endl;
		danhSachCacGiaoDich[i] = new giaoDichDat;
		danhSachCacGiaoDich[i]->nhapThongTin();
	}
	cout << "Nhap so luong giao dich nha pho cua cong ty: " << endl;
	cin >> soLuongGiaoDichNhaPho;
	danhSachCacGiaoDich.resize(soLuongGiaoDichDat + soLuongGiaoDichNhaPho);
	for (size_t i = soLuongGiaoDichDat; i < soLuongGiaoDichDat + soLuongGiaoDichNhaPho; i++) {
		cout << "Nhap thong tin ve giao dich nha pho thu " << i - soLuongGiaoDichDat + 1 << ": " << endl;
		danhSachCacGiaoDich[i] = new giaoDichNhaPho;
		danhSachCacGiaoDich[i]->nhapThongTin();
	}
	cout << "Nhap so luong giao dich can ho chung cu cua cong ty: " << endl;
	cin >> soLuongGiaoDichCanHoChungCu;
	danhSachCacGiaoDich.resize(soLuongGiaoDichDat + soLuongGiaoDichNhaPho + soLuongGiaoDichCanHoChungCu);
	for (size_t i = soLuongGiaoDichDat + soLuongGiaoDichNhaPho; i < soLuongGiaoDichDat + soLuongGiaoDichNhaPho + soLuongGiaoDichCanHoChungCu; i++) {
		cout << "Nhap thong tin ve giao dich can ho chung cu thu " << i - (soLuongGiaoDichDat + soLuongGiaoDichNhaPho) + 1 << ": " << endl;
		danhSachCacGiaoDich[i] = new giaoDichCanHoChungCu;
		danhSachCacGiaoDich[i]->nhapThongTin();
	}
}

void congTyBatDongSan::xuatTongSoLuongTungLoai() {
	size_t soLuongGiaoDichDat = 0, soLuongGiaoDichNhaPho = 0, soLuongGiaoDichCanHoChungCu = 0;
	for (giaoDich* giaoDich : danhSachCacGiaoDich) {
		if (giaoDich->getLoai() == "giao dich dat") soLuongGiaoDichDat++;
		else if (giaoDich->getLoai() == "giao dich nha pho") soLuongGiaoDichNhaPho++;
		else soLuongGiaoDichCanHoChungCu++;
	}
	cout << "So luong giao dich dat: " << soLuongGiaoDichDat << endl;
	cout << "So luong giao dich nha pho: " << soLuongGiaoDichNhaPho << endl;
	cout << "So luong gia dich can ho chung cu: " << soLuongGiaoDichCanHoChungCu << endl;
}

unsigned long congTyBatDongSan::tinhTrungBinhThanhTienGiaoDichCanHoChungCu() {
	size_t soLuong = 0;
	unsigned long trungBinh = 0;
	for (giaoDich* giaoDich : danhSachCacGiaoDich) {
		if (giaoDich->getLoai() == "giao dich can ho chung cu") {
			soLuong++;
			trungBinh += giaoDich->tinhThanhTien();
		}
	}
	if (soLuong == 0) return 0;
	else return unsigned long(float(trungBinh) / soLuong);
}

void congTyBatDongSan::xuatThongTinGiaoDichNhaPhoThanhTienCaoNhat() {
	size_t i = 0;
	while (i < danhSachCacGiaoDich.size() && danhSachCacGiaoDich[i]->getLoai() != "giao dich nha pho") i++;
	if (i >= danhSachCacGiaoDich.size()) {
		cout << "Khong ton tai giao dich nha pho trong cong ty!" << endl;
		return;
	}
	giaoDich* giaoDichNhaPhoMaxThanhTien = danhSachCacGiaoDich[i];
	for (size_t j = i; j < danhSachCacGiaoDich.size(); j++) {
		if (giaoDichNhaPhoMaxThanhTien->tinhThanhTien() < danhSachCacGiaoDich[j]->tinhThanhTien() && danhSachCacGiaoDich[j]->getLoai() == "giao dich nha pho") giaoDichNhaPhoMaxThanhTien = danhSachCacGiaoDich[j];
	}
	cout << "Thong tin ve giao dich nha pho co thanh tien cao nhat: " << endl;
	giaoDichNhaPhoMaxThanhTien->xuatThongTin();
}

void congTyBatDongSan::xuatDanhSachGiaoDichThang12Nam2024() {
	cout << "Cac giao dich trong thang 12 nam 2024: " << endl;
	for (giaoDich* giaoDich : danhSachCacGiaoDich) {
		if (kiemTraThangBang12NamBan2024(giaoDich->getNgay())) giaoDich->xuatThongTin();
	}
}
