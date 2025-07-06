// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "chuyenXe.h"

chuyenXe::chuyenXe(string maSoChuyen, string hoTenTaiXe, string soXe, unsigned long doanhThu) {
	this->maSoChuyen = maSoChuyen;
	this->hoTenTaiXe = hoTenTaiXe;
	this->soXe = soXe;
	this->doanhThu = doanhThu;
}

void chuyenXe::chuanHoaTuTrongTen(string& tu) {
	for (char& c : tu) {
		c = tolower(c);
	}
	tu[0] = toupper(tu[0]);
}

void chuyenXe::chuanHoaHoTenTaiXe() {
	stringstream ss(hoTenTaiXe);
	string temp;
	string hoTenMoi = "";
	bool first = true;
	while (ss >> temp) {
		chuanHoaTuTrongTen(temp);
		if (!first) hoTenMoi += " ";
		hoTenMoi += temp;
		first = false;
	}
	hoTenTaiXe = hoTenMoi;
}

bool chuyenXe::kiemTraHoTenHopLe() {
	for (char c : hoTenTaiXe) {
		if (!isalpha(c) && c != ' ') return false;
	}
	return true;
}

void chuyenXe::nhapThongTin() {
	cout << "Nhap ma so chuyen xe: " << endl;
	getline(cin, maSoChuyen);
	do {
		cout << "Nhap ho va ten cua tai xe: " << endl;
		getline(cin, hoTenTaiXe);
		if (!kiemTraHoTenHopLe()) cout << "Ho va ten tai xe khong hop le! Xin hay nhap lai." << endl;
	} while (!kiemTraHoTenHopLe());
	chuanHoaHoTenTaiXe();
	cout << "Nhap bien so xe: " << endl;
	cin >> soXe;
	cout << "Nhap doanh thu cua xe: " << endl;
	cin >> doanhThu;
	cin.ignore();
}

void chuyenXe::xuatThongTin() {
	cout << "Ma so chuyen: " << maSoChuyen << endl;
	cout << "Ho va ten tai xe: " << hoTenTaiXe << endl;
	cout << "Bien so xe: " << soXe << endl;
	cout << "Doanh thu: " << doanhThu << endl;
}

unsigned long chuyenXe::getDoanhThu() {
	return doanhThu;
}