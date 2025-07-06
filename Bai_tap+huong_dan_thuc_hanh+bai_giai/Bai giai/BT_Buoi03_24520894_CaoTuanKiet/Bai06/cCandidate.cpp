// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "cCandidate.h"

int cCandidate::soLuong = 0;

bool cCandidate::kiemTraTenHopLe() {
	for (const char& c : hoVaTen) {
		if (!(isalpha(c) || c == ' ')) return false;
	}
	return true;
}

bool cCandidate::kiemTraNgayThangNamSinhHopLe() {
	short dauXet = 0;
	for (char c : ngayThangNamSinh) {
		if (!isdigit(c) && c != '/') return false;
		if (c == '/') dauXet++;
	}
	return (dauXet == 2);
}

void cCandidate::chuanHoaTu(string& tu) {
	for (char& x : tu) {
		x = tolower(x);
	}
	tu[0] = toupper(tu[0]);
}

void cCandidate::chuanHoaTen() {
	stringstream ss(hoVaTen);
	string chuan = "";
	string temp;
	bool first = true;
	while (ss >> temp) {
		if (!first) chuan += ' ';
		chuanHoaTu(temp);
		chuan += temp;
		first = false;
	}
	hoVaTen = chuan;
}

void cCandidate::chuanHoaNgayThangNamSinh() {
	stringstream ss(ngayThangNamSinh);
	string ngaySinhChuan = "";
	string temp;
	while (ss >> temp) {
		ngaySinhChuan += temp;
	}
	if (ngaySinhChuan[2] != '/') ngaySinhChuan.insert(ngaySinhChuan.begin(), '0');
	if (ngaySinhChuan[5] != '/') ngaySinhChuan.insert(ngaySinhChuan.begin() + 3, '0');
	ngayThangNamSinh = ngaySinhChuan;
}

cCandidate::cCandidate() {
	ma = "TSXXX";
	hoVaTen = "";
	ngayThangNamSinh = "";
	diemToan = 0;
	diemVan = 0;
	diemAnh = 0;
}

cCandidate::cCandidate(string ma = "", string hoVaTen = "", string ngayThangNamSinh = "", double diemToan = 0, double diemVan = 0, double diemAnh = 0) {
	this->ma = ma;
	this->hoVaTen = hoVaTen;
	this->ngayThangNamSinh = ngayThangNamSinh;
	this->diemToan = diemToan;
	this->diemVan = diemVan;
	this->diemAnh = diemAnh;
}

istream& operator>>(istream& is, cCandidate& candidate) {
	stringstream ss;
	ss << "TS" << setw(3) << setfill('0') << cCandidate::soLuong + 1;
	candidate.ma = ss.str();

	cout << "Nhap ho va ten cua thi sinh: " << endl;
	do {
		getline(is, candidate.hoVaTen);
		if (!candidate.kiemTraTenHopLe()) cout << "Ho va ten khong hop le! Xin hay nhap lai." << endl;
	} while (!candidate.kiemTraTenHopLe());
	candidate.chuanHoaTen();

	do {
		cout << "Nhap ngay thang nam sinh cua thi sinh: " << endl;
		getline(is, candidate.ngayThangNamSinh);
		if (!candidate.kiemTraNgayThangNamSinhHopLe()) cout << "Nam sinh khong hop le! Xin hay nhap lai." << endl;
	} while (!candidate.kiemTraNgayThangNamSinhHopLe());
	candidate.chuanHoaNgayThangNamSinh();

	do {
		cout << "Nhap diem Toan cua thi sinh: ";
		is >> candidate.diemToan;
		if (candidate.diemToan < 0 || candidate.diemToan > 10) cout << "Diem Toan khong hop le! Xin hay nhap lai." << endl;
	} while (candidate.diemToan < 0 || candidate.diemToan > 10);

	do {
		cout << "Nhap diem Van cua thi sinh: ";
		is >> candidate.diemVan;
		if (candidate.diemVan < 0 || candidate.diemVan > 10) cout << "Diem Van khong hop le! Xin hay nhap lai." << endl;
	} while (candidate.diemVan < 0 || candidate.diemVan > 10);

	do {
		cout << "Nhap diem Anh cua thi sinh: ";
		is >> candidate.diemAnh;
		if (candidate.diemAnh < 0 || candidate.diemAnh > 10) cout << "Diem Anh khong hop le! Xin hay nhap lai." << endl;
	} while (candidate.diemAnh < 0 || candidate.diemAnh > 10);

	cCandidate::soLuong++;
	is.ignore();
	return is;
}

ostream& operator<<(ostream& os, cCandidate candidate) {
	os << "Ma so thi sinh: " << candidate.ma << endl;
	os << "Ho va ten thi sinh: " << candidate.hoVaTen << endl;
	os << "Ngay thang nam sinh: " << candidate.ngayThangNamSinh << endl;
	os << "Diem Toan thi sinh dat duoc: " << candidate.diemToan << endl;
	os << "Diem Van thi sinh dat duoc: " << candidate.diemVan << endl;
	os << "Diem Anh thi sinh dat duoc: " << candidate.diemAnh << endl;
	os << "Tong diem thi sinh dat duoc: " << candidate.TinhTongDiem() << endl;
	cout << endl;
	return os;
}

double cCandidate::TinhTongDiem() {
	return (diemToan + diemVan + diemAnh);
}

