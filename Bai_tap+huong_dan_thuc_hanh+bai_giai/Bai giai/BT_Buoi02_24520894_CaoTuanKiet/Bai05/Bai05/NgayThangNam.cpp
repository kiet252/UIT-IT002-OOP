// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "NgayThangNam.h"

string NgayThangNam::thuTuongUng() {
	if (thang < 3) {
		thang += 12;
		nam--;
	}

	short A = nam % 100;
	short B = nam / 100;
	short thu = (ngay + 13 * (thang + 1) / 5 + A + A / 4 + B / 4 + 5 * B) % 7;
	switch (thu) {
	case 0:
		return "thu Bay";
	case 1:
		return "Chu Nhat";
	case 2:
		return "thu Hai";
	case 3:
		return "thu Ba";
	case 4:
		return "thu Tu";
	case 5:
		return "thu Nam";
	case 6:
		return "thu Sau";
	default:
		return "";
	}
}

short NgayThangNam::soNgayTrongThang() {
	switch (thang) {
	case 4:
	case 6:
	case 9:
	case 11:
		return 30;
	case 2:
		if (isNamNhuan()) return 29;
		else return 28;
	default:
		return 31;
	}
}

NgayThangNam::NgayThangNam() {
	ngay = 0;
	thang = 0;
	nam = 0;
}

NgayThangNam::NgayThangNam(short d = 0, short m = 0, short y = 0) {
	ngay = d;
	thang = m;
	nam = y;
}

void NgayThangNam::nhap() {
	cout << "Nhap nam: " << endl;
	cin >> nam;
	cout << "Nhap thang: " << endl;
	do {
		cin >> thang;
		if (thang < 1 || thang > 12) cout << "thang khong hop le! Xin hay nhap lai." << endl;
	} while (thang < 1 || thang > 12);
	cout << "Nhap ngay: " << endl;
	do {
		cin >> ngay;
		if (ngay < 1 || ngay > soNgayTrongThang() ) cout << "Ngay khong hop le! Xin hay nhap lai." << endl;
	} while (ngay < 1 || ngay > soNgayTrongThang() );
}

void NgayThangNam::xuat() {
	if (ngay < 10) cout << "0";
	cout << ngay << "/";
	if (thang < 10) cout << "0";
	cout << thang << "/" << nam << endl;
}

void NgayThangNam::setNgay(short d) {
	if (d < 1 || d > soNgayTrongThang()) cout << "Ngay khong hop le!" << endl;
}

void NgayThangNam::setThang(short m) {
	if (m < 1 || m > 31) cout << "Thang khong hop le!" << endl;
	else thang = m;
}

void NgayThangNam::setNam(short y) {
	nam = y;
}

void NgayThangNam::chuanHoa() {
	if (thang > 12) {
		nam += thang / 12;
		thang %= 12;
	}

	if (thang < 1) {
		nam -= abs(thang) / 12;
		thang = (abs(thang) % 12);
	}

	while (ngay > soNgayTrongThang()) {
		ngay -= soNgayTrongThang();
		thang++;
		if (thang > 12) {
			thang = 1;
			nam++;
		}
	}

	while (ngay < 0) {
		ngay += soNgayTrongThang();
		thang--;
		if (thang < 1) {
			thang = 12;
			nam--;
		}
	}

}

void NgayThangNam::thayDoiNgay(short d) {
	ngay += d;
}

void NgayThangNam::thayDoiThang(short m) {
	thang += m;
}

void NgayThangNam::thayDoiNam(short y) {
	nam += y;
}

short NgayThangNam::getNgay() {
	return ngay;
}

short NgayThangNam::getThang() {
	return thang;
}

short NgayThangNam::getNam() {
	return nam;
}

void NgayThangNam::getThu() {
	cout << "Ngay thang nam tuong ung roi vao " << thuTuongUng() << endl;
}

bool NgayThangNam::isNamNhuan() {
	return ( (nam % 400 == 0) || (nam % 4 == 0 && nam % 100 != 0) );
}
