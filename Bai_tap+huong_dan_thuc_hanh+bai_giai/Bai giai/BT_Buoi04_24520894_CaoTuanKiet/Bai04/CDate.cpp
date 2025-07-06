// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "CDate.h"

CDate::CDate(int ngay, int thang, int nam) {
	this->ngay = ngay;
	this->thang = thang;
	this->nam = nam;
	chuanHoaTangNgay();
}

int CDate::getNgay() {
	return ngay;
}

int CDate::getThang() {
	return thang;
}

int CDate::getNam() {
	return nam;
}

int CDate::xuatSoNgayTrongThang(int thang, int nam) {
	switch (thang) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		return 31;
	case 2:
		if (kiemTraNamNhuan(nam)) return 29;
		return 28;
	case 4:
	case 6:
	case 9:
	case 11:
		return 30;
	default:
		return 0;
	}
}

bool CDate::kiemTraNamNhuan(int year) {
	return ((year % 400 == 0) || (year % 100 != 0 && year % 4 == 0));
}

int CDate::tinhTongNgay() {
	int soNamNhuan = (nam - 1) / 4 - (nam - 1) / 100 + (nam - 1) / 400;
	int soNgayTuongUngVoiThang = 0;
	for (int i = 1; i < thang; i++) soNgayTuongUngVoiThang += xuatSoNgayTrongThang(i, nam);
	return (nam - 1) * 365 + soNamNhuan + soNgayTuongUngVoiThang + ngay;
}

void CDate::chuanHoaTangNgay() {;
	while (ngay > xuatSoNgayTrongThang(thang, nam) ) {
		ngay -= xuatSoNgayTrongThang(thang, nam);
		thang++;

		if (thang > 12) {
			thang = 1;
			nam++;
		}
	}
}

void CDate::chuanHoaGiamNgay() {
	while (ngay <= 0) {
		thang--;

		if (thang <= 0) {
			thang = 12;
			nam--;
		}
		ngay += xuatSoNgayTrongThang(thang, nam);
	}
}

void CDate::tangMotNgay() {
	ngay++;
	chuanHoaTangNgay();
}

void CDate::giamMotNgay() {
	ngay--;
	chuanHoaGiamNgay();
}

CDate CDate::operator+(int ngay) {
	CDate ngaySauTang = *this;
	ngaySauTang.ngay += ngay;
	ngaySauTang.chuanHoaTangNgay();
	return ngaySauTang;
}

CDate CDate::operator-(int ngay) {
	CDate ngaySauTang = *this;
	ngaySauTang.ngay -= ngay;
	ngaySauTang.chuanHoaGiamNgay();
	return ngaySauTang;
}

CDate& CDate::operator++() {
	tangMotNgay();
	return *this;
}

CDate CDate::operator++(int) {
	CDate temp = *this;
	tangMotNgay();
	return temp;
}

CDate& CDate::operator--() {
	giamMotNgay();
	return *this;
}

CDate CDate::operator--(int) {
	CDate temp = *this;
	giamMotNgay();
	return temp;
}

int CDate::operator-(CDate date) {
	return tinhTongNgay() - date.tinhTongNgay();
}

istream& operator>>(istream& is, CDate& date) {
	cout << "Nhap ngay: ";
	do {
		is >> date.ngay;
		if (date.ngay < 0 || date.ngay > 31) cout << "Ngay khong hop le! Xin hay nhap lai." << endl;
	} while (date.ngay < 0 || date.ngay > 31);
	cout << "Nhap thang: ";
	do {
		is >> date.thang;
		if (date.thang < 0 || date.thang > 12) cout << "Thang khong hop le! Xin hay nhap lai." << endl;
	} while (date.thang < 0 || date.thang > 12);
	cout << "Nhap nam: ";
	is >> date.nam;
	date.chuanHoaTangNgay();
	return is;
}

ostream& operator<<(ostream& os, CDate date) {
	os << setw(2) << setfill('0') << date.ngay;
	os << "/" << setw(2) << setfill('0') << date.thang;
	os << "/" << date.nam;
	return os;
}