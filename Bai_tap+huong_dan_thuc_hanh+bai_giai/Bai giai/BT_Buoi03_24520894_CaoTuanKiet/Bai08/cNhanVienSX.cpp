// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "cNhanVienSX.h"

bool cNhanVienSX::kiemTraNgayThangNamSinhHopLe() {
	short dauXet = 0;
	for (char c : ngaySinh) {
		if (!isdigit(c) && c != '/') return false;
		if (c == '/') dauXet++;
	}
	return (dauXet == 2);
}

bool cNhanVienSX::kiemTraTenHopLe() {
	for (const char& c : hoTen) {
		if (!(isalpha(c) || c == ' ')) return false;
	}
	return true;
}

void cNhanVienSX::chuanHoaTu(string& tu) {
	for (char& x : tu) {
		x = tolower(x);
	}
	tu[0] = toupper(tu[0]);
}

void cNhanVienSX::chuanHoaTen() {
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

void cNhanVienSX::chuanHoaNgayThangNamSinh() {
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

cNhanVienSX::cNhanVienSX() {
	ma = "NVXXX";
	hoTen = "";
	ngaySinh = "";
	soSanPhamDaGiaCong = 0;
	donGiaMotSanPham = 0;
}

cNhanVienSX::cNhanVienSX(string ma, string hoTen, string ngaySinh, unsigned int soSanPhamDaGiaCong, unsigned int donGiaMotSanPham) {
	this->ma = ma;
	this->hoTen = hoTen;
	this->ngaySinh = ngaySinh;
	this->soSanPhamDaGiaCong = soSanPhamDaGiaCong;
	this->donGiaMotSanPham = donGiaMotSanPham;
}

string cNhanVienSX::getMa() {
	return ma;
}

string cNhanVienSX::getHoTen() {
	return hoTen;
}

string cNhanVienSX::getNgaySinh() {
	return ngaySinh;
}

unsigned int cNhanVienSX::getSoSanPhamDaGiaCong() {
	return soSanPhamDaGiaCong;
}

unsigned int cNhanVienSX::getDonGiaMotSanPham() {
	return donGiaMotSanPham;
}

void cNhanVienSX::setMa() {
	cout << "Nhap ma moi cho nhan vien: " << endl;
	cin >> ma;
	cin.ignore();
}

void cNhanVienSX::setHoTen() {
	cout << "Nhap ho ten moi cho nhan vien: " << endl;
	do {
		getline(cin, hoTen);
		if (!kiemTraTenHopLe()) cout << "Ho va ten khong hop le! Xin hay nhap lai." << endl;
	} while (!kiemTraTenHopLe());
	chuanHoaTen();
}

void cNhanVienSX::setNgaySinh() {
	cout << "Nhap ngay thang nam sinh moi cho nhan vien: " << endl;
	do {
		getline(cin, ngaySinh);
		if (!kiemTraNgayThangNamSinhHopLe()) cout << "Ngay thang nam sinh khong hop le! Xin hay nhap lai." << endl;
	} while (!kiemTraNgayThangNamSinhHopLe());
	chuanHoaNgayThangNamSinh();
}

void cNhanVienSX::setSoSanPhamDaGiaCong() {
	cout << "Nhap so luong san pham da gia cong cua nhan vien: " << endl;
	cin >> soSanPhamDaGiaCong;
	cin.ignore();
}

void cNhanVienSX::setDonGiaMotSanPham() {
	cout << "Nhap don gia cua mot san pham: " << endl;
	cin >> donGiaMotSanPham;
	cin.ignore();
}

void cNhanVienSX::nhap() {
	cout << "Nhap ma cho nhan vien:";
	cin >> ma;
	cin.ignore();
	cout << "Nhap ho ten cua nhan vien:";
	do {
		getline(cin, hoTen);
		if (!kiemTraTenHopLe()) cout << "Ho va ten khong hop le! Xin hay nhap lai." << endl;
	} while (!kiemTraTenHopLe());
	chuanHoaTen();
	cout << "Nhap ngay thang nam sinh cho nhan vien: " << endl;
	do {
		getline(cin, ngaySinh);
		if (!kiemTraNgayThangNamSinhHopLe()) cout << "Ngay thang nam sinh khong hop le! Xin hay nhap lai." << endl;
	} while (!kiemTraNgayThangNamSinhHopLe());
	chuanHoaNgayThangNamSinh();
	cout << "Nhap so luong san pham da gia cong cua nhan vien: " << endl;
	cin >> soSanPhamDaGiaCong;
	cout << "Nhap don gia cua mot san pham: " << endl;
	cin >> donGiaMotSanPham;
	cin.ignore();
}

void cNhanVienSX::xuat() {
	cout << "Ma nhan vien: " << ma << endl;
	cout << "Ho va ten nhan vien: " << hoTen << endl;
	cout << "Ngay thang nam sinh cua nhan vien: " << ngaySinh << endl;
	cout << "So luong san pham da gia cong cua nhan vien: " << soSanPhamDaGiaCong << endl;
	cout << "Don gia cua mot san pham cua nhan vien: " << donGiaMotSanPham << endl;
	cout << endl;
}

unsigned long long cNhanVienSX::getLuong() {
	return soSanPhamDaGiaCong * donGiaMotSanPham;
}