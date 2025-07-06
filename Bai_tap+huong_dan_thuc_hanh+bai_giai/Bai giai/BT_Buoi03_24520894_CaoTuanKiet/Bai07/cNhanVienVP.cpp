// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "cNhanVienVP.h"

bool cNhanVienVP::kiemTraNgayThangNamSinhHopLe() {
	short dauXet = 0;
	for (char c : ngaySinh) {
		if (!isdigit(c) && c != '/') return false;
		if (c == '/') dauXet++;
	}
	return (dauXet == 2);
}

bool cNhanVienVP::kiemTraTenHopLe() {
	for (const char& c : hoTen) {
		if (!(isalpha(c) || c == ' ')) return false;
	}
	return true;
}

void cNhanVienVP::chuanHoaTu(string& tu) {
	for (char& x : tu) {
		x = tolower(x);
	}
	tu[0] = toupper(tu[0]);
}

void cNhanVienVP::chuanHoaTen() {
	stringstream ss(hoTen);
	string chuan = "";
	string temp;
	bool first = true;
	while (ss >> temp) {
		if (!first) chuan += ' ';
		chuanHoaTu(temp);
		chuan += temp;
		first = false;
	}
	hoTen = chuan;
}

void cNhanVienVP::chuanHoaNgayThangNamSinh() {
	stringstream ss(ngaySinh);
	string ngaySinhChuan = "";
	string temp;
	while (ss >> temp) {
		ngaySinhChuan += temp;
	}
	if (ngaySinhChuan[2] != '/') ngaySinhChuan.insert(ngaySinhChuan.begin(), '0');
	if (ngaySinhChuan[5] != '/') ngaySinhChuan.insert(ngaySinhChuan.begin() + 3, '0');
	ngaySinh = ngaySinhChuan;
}

cNhanVienVP::cNhanVienVP() {
	ma = "";
	hoTen = "";
	ngaySinh = "";
	luong = 0;
}

cNhanVienVP::cNhanVienVP(string ma, string hoTen, string ngaySinh, unsigned int luong) {
	this->ma = ma;
	this->hoTen = hoTen;
	this->ngaySinh = ngaySinh;
	this->luong = luong;
}

string cNhanVienVP::getMa() {
	return ma;
}

string cNhanVienVP::getHoTen() {
	return hoTen;
}

string cNhanVienVP::getNgaySinh() {
	return ngaySinh;
}

unsigned int cNhanVienVP::getLuong() {
	return luong;
}

void cNhanVienVP::setMa() {
	cout << "Nhap ma moi cho nhan vien: " << endl;
	cin >> ma;
	cin.ignore();
}

void cNhanVienVP::setHoTen() {
	cout << "Nhap ho ten moi cho nhan vien: " << endl;
	do {
		getline(cin, hoTen);
		if (!kiemTraTenHopLe()) cout << "Ho va ten khong hop le! Xin hay nhap lai." << endl;
	} while (!kiemTraTenHopLe());
	chuanHoaTen();
}

void cNhanVienVP::setNgaySinh() {
	cout << "Nhap ngay thang nam sinh moi cho nhan vien: " << endl;
	do {
		getline(cin, ngaySinh);
		if (!kiemTraNgayThangNamSinhHopLe()) cout << "Ngay thang nam sinh khong hop le! Xin hay nhap lai." << endl;
	} while (!kiemTraNgayThangNamSinhHopLe());
	chuanHoaNgayThangNamSinh();
}

void cNhanVienVP::setLuong() {
	do {
		cout << "Nhap luong moi cho nhan vien: " << endl;
		cin >> luong;
		if (luong < 0) cout << "Luong khong hop le! Xin hay nhap lai." << endl;
	} while (luong < 0);
}

void cNhanVienVP::nhap() {
	cout << "Nhap ma nhan vien: ";
	getline(cin, ma);
	cout << "Nhap ho va ten nhan vien: ";
	do {
		getline(cin, hoTen);
		if (!kiemTraTenHopLe()) cout << "Ho va ten nhan vien khong hop le! Xin hay nhap lai." << endl;
	} while (!kiemTraTenHopLe());
	chuanHoaTen();
	do {
		cout << "Nhap ngay thang nam sinh cua nhan vien: " << endl;
		getline(cin, ngaySinh);
		if (!kiemTraNgayThangNamSinhHopLe()) cout << "Ngay thang nam sinh khong hop le! Xin hay nhap lai." << endl;
	} while (!kiemTraNgayThangNamSinhHopLe());
	chuanHoaNgayThangNamSinh();
	do {
		cout << "Nhap luong cua nhan vien: " << endl;
		cin >> luong;
		cin.ignore();
		if (luong < 0) cout << "Luong khong hop le! Xin hay nhap lai." << endl;
	} while (luong < 0);
}


void cNhanVienVP::xuat() {
	cout << "Ma nhan vien: " << ma << endl;
	cout << "Ho va ten nhan vien: " << hoTen << endl;
	cout << "Ngay thang nam sinh cua nhan vien: " << ngaySinh << endl;
	cout << "Luong cua nhan vien: " << luong << endl;
}

