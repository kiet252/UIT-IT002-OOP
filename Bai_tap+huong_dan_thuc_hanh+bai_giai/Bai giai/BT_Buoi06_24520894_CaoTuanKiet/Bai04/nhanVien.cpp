// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "nhanVien.h"

bool nhanVien::kiemTraHoTenHopLe() {
	for (const char& c : hoTen) {
		if (!isalpha(c) && c != ' ') return false;
	}
	return true;
}

void nhanVien::chuanHoaHoTen() {
	stringstream ss(hoTen);
	string tenMoi = "";
	string temp;
	bool first = true;

	while (ss >> temp) {
		for (char& c : temp) c = tolower(c);
		temp[0] = toupper(temp[0]);
		if (!first) tenMoi += " ";
		tenMoi += temp;
		first = false;
	}

	hoTen = tenMoi;
}

bool nhanVien::kiemTraSDTHopLe() {
	if (soDienThoai.size() != 10 || soDienThoai[0] != '0') return false;
	for (const char& c : soDienThoai) if (!isdigit(c)) return false;
	return true;
}

bool nhanVien::kiemTraEmailHopLe() {
	size_t aCongCount = 0;
	size_t chamCount = 0;
	for (const char& c : email) {
		if (c == '@') aCongCount++;
		if (c == '.') chamCount++;
	}
	return (aCongCount == 1 && chamCount > 0);
}

nhanVien::nhanVien(string ma, string hoTen, unsigned short tuoi, string soDienThoai, string email, unsigned long luongCoBan) {
	this->ma = ma;
	this->hoTen = hoTen;
	this->tuoi = tuoi;
	this->soDienThoai = soDienThoai;
	this->email = email;
	this->luongCoBan = luongCoBan;
}

void nhanVien::nhapThongTin() {
	cout << "Nhap ma nhan vien: ";
	cin >> ma;

	cout << "Nhap ho va ten nhan vien: ";
	cin.ignore();
	do {
		getline(cin, hoTen);
		if (!kiemTraHoTenHopLe()) cout << "Ho ten ban nhap khong hop le! Xin hay nhap lai." << endl;
	} while (!kiemTraHoTenHopLe());

	cout << "Nhap tuoi cua nhan vien: ";
	cin >> tuoi;

	cout << "Nhap so dien thoai cua nhan vien: ";
	do {
		cin >> soDienThoai;
		if (!kiemTraSDTHopLe()) cout << "So dien thoai da nhap khong hop le! Xin hay nhap lai." << endl;
	} while (!kiemTraSDTHopLe());

	cout << "Nhap email cua nhan vien: ";
	do {
		cin >> email;
		if (!kiemTraEmailHopLe()) cout << "Email da nhap khong hop le! Xin hay nhap lai." << endl;
	} while (!kiemTraEmailHopLe());

	cout << "Nhap luong co ban cua nhan vien: ";
	cin >> luongCoBan;
}

void nhanVien::xuatThongTin() {
	cout << "Ma nhan vien: " << ma << endl;
	cout << "Ho va ten cua nhan vien: " << hoTen << endl;
	cout << "Tuoi cua nhan vien: " << tuoi << endl;
	cout << "So dien thoai cua nhan vien: " << soDienThoai << endl;
	cout << "Email cua nhan vien: " << email << endl;
	cout << "Luong co ban cua nhan vien: " << luongCoBan << endl;
}


