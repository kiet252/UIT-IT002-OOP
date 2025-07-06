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

bool nhanVien::kiemTraNgaySinhHopLe() {
	short int soDauXet = 0;
	short lastCharIndex = ngaySinh.size() - 1;
	for (const char& c : ngaySinh) {
		if (c == '/') soDauXet++;
		if (!isdigit(c) && c != '/' && soDauXet > 2) return false;
	}
	if (soDauXet != 2 || !isdigit(ngaySinh[lastCharIndex])) return false;
	return true;
}

void nhanVien::chuanHoaNgaySinh() {
	if (ngaySinh[2] != '/') ngaySinh.insert(ngaySinh.begin(), '0');
	if (ngaySinh[5] != '/') ngaySinh.insert(ngaySinh.begin() + 3, '0');
}

void nhanVien::chuanHoaTuTrongTen(string& tuTrongTen) {
	for (char& c : tuTrongTen) {
		c = tolower(c);
	}
	tuTrongTen[0] = toupper(tuTrongTen[0]);
}

void nhanVien::chuanHoaHoTen() {
	stringstream ss(hoTen);
	string tenMoi = "";
	string temp;
	bool first = true;
	while (ss >> temp) {
		if (!first) tenMoi += " ";
		chuanHoaTuTrongTen(temp);
		tenMoi += temp;
		first = false;
	}
	hoTen = tenMoi;
}

nhanVien::nhanVien(string hoTen, string ngaySinh) {
	this->hoTen = hoTen;
	this->ngaySinh = ngaySinh;
}

void nhanVien::nhapThongTin() {
	cout << "Nhap ho ten cua nhan vien: ";
	cin.ignore();
	do {
		getline(cin, hoTen);
		if (!kiemTraHoTenHopLe()) cout << "Ho ten cua nhan vien khong hop le! Xin hay nhap lai." << endl;
	} while (!kiemTraHoTenHopLe());
	chuanHoaHoTen();

	cout << "Nhap ngay sinh cua nhan vien theo dinh dang ngay/thang/nam: ";
	do {
		cin >> ngaySinh;
		if (!kiemTraNgaySinhHopLe()) cout << "Ngay sinh cua nhan vien khong hop le! Xin hay nhap lai." << endl;
	} while (!kiemTraNgaySinhHopLe());
	chuanHoaNgaySinh();
}

void nhanVien::xuatThongTin() const {
	cout << "Ho va ten cua nhan vien: " << hoTen << endl;
	cout << "Ngay sinh cua nhan vien: " << ngaySinh << endl;
}

string nhanVien::getHoTen() const {
	return hoTen;
}

string nhanVien::getNgaySinh() const {
	return ngaySinh;
}