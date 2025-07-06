// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "sinhVien.h"

void sinhVien::chuanHoaTuTrongTen(string& tuTrongTen) {
	for (char& c : tuTrongTen) {
		c = tolower(c);
	}
	tuTrongTen[0] = toupper(tuTrongTen[0]);
}

void sinhVien::chuanHoaHoTen() {
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

bool sinhVien::kiemTraHoTenHopLe() {
	for (const char& c : hoTen) {
		if (!isalpha(c) && c != ' ') return false;
	}
	return true;
}

sinhVien::sinhVien(string maSo, string hoTen, string diaChi, unsigned int tongSoTinChi, unsigned short diemTrungBinh) {
	this->maSo = maSo;
	this->hoTen = hoTen;
	this->diaChi = diaChi;
	this->tongSoTinChi = tongSoTinChi;
	this->diemTrungBinh = diemTrungBinh;
}

void sinhVien::nhapThongTin() {
	cout << "Nhap ma so sinh vien: " << endl;
	cin >> maSo;
	cout << "Nhap ho ten sinh vien: " << endl;
	cin.ignore();
	do {
		getline(cin, hoTen);
		if (!kiemTraHoTenHopLe()) cout << "Ho ten sinh vien khong hop le! Xin hay nhap lai." << endl;
	} while (!kiemTraHoTenHopLe());
	chuanHoaHoTen();
	cout << "Nhap dia chi cua sinh vien: " << endl;
	getline(cin, diaChi);
	cout << "Nhap tong so tin chi cua sinh vien: " << endl;
	cin >> tongSoTinChi;
	cout << "Nhap diem trung binh cua sinh vien: " << endl;
	do {
		cin >> diemTrungBinh;
		if (diemTrungBinh > 10) cout << "Diem trung binh cua sinh vien khong hop le! Xin hay nhap lai." << endl;
	} while (diemTrungBinh > 10);
}

void sinhVien::xuatThongtin() {
	cout << "Ma so sinh vien: " << maSo << endl;
	cout << "Ho ten sinh vien: " << hoTen << endl;
	cout << "Dia chi cua sinh vien: " << diaChi << endl;
	cout << "Tong so tin chi cua sinh vien: " << tongSoTinChi << endl;
	cout << "Diem trung binh cua sinh vien: " << diemTrungBinh << endl;
}

unsigned short sinhVien::getDiemTrungBinh() {
	return diemTrungBinh;
}
