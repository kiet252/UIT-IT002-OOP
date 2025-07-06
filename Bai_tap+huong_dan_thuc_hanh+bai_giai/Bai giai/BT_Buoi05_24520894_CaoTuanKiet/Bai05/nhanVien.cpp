// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "nhanVien.h"

bool nhanVien::kiemTraHoTen() {
	for (char c : hoTen) {
		if (!isalpha(c) && c != ' ') return false;
	}
	return true;
}

bool nhanVien::kiemTraNgaySinh() {
	short soDauXet = 0;
	for (char c : ngaySinh) {
		if (!isdigit(c) && c != '/') return false;
		if (c == '/') soDauXet++;
	}
	return (soDauXet == 2);
}

void nhanVien::chuanHoaTu(string& tu) {
	for (char &c : tu) {
		c = tolower(c);
	}
	tu[0] = toupper(tu[0]);
}

void nhanVien::chuanHoaNgaySinh() {
	if (ngaySinh[2] != '/') ngaySinh.insert(ngaySinh.begin(), '0');
	if (ngaySinh[5] != '/') ngaySinh.insert(ngaySinh.begin() + 3, '0');
}

void nhanVien::chuanHoaHoTen() {
	stringstream ss(hoTen);
	string tenMoi = "";
	string temp;
	bool dauTien = true;
	while (ss >> temp) {
		chuanHoaTu(temp);
		if (!dauTien) tenMoi += " ";
		tenMoi += temp;
	}
	hoTen = tenMoi;
}

nhanVien::nhanVien(string hoTen, string ngaySinh) {
	this->hoTen = hoTen;
	this->ngaySinh = ngaySinh;
}

void nhanVien::nhapThongTin() {
	cout << "Nhap ho va ten nhan vien: ";
	cin.ignore();
	do {
		getline(cin, hoTen);
		if (!kiemTraHoTen()) cout << "Ho va ten nhan vien khong hop le! Xin hay nhap lai." << endl;
	} while (!kiemTraHoTen());

	cout << "Nhap ngay thang nam sinh cua nhan vien theo dinh dang ngay/thang/nam: ";
	do {
		cin >> ngaySinh;
		if (!kiemTraNgaySinh()) cout << "Ngay thang nam sinh cua nhan vien khong hop le! Xin hay nhap lai." << endl;
	} while (!kiemTraNgaySinh());
}

void nhanVien::xuatThongTin() const {
	cout << "Ho va ten nhan vien: " << hoTen << endl;
	cout << "Ngay sinh cua nhan vien: " << ngaySinh << endl;
}


unsigned long nhanVien::tinhLuong() const{
	return 0;
}

string nhanVien::getHoTen() const {
	return hoTen;
}