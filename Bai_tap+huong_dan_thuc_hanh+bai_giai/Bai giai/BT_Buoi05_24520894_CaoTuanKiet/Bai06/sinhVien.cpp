// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "sinhVien.h"

bool sinhVien::kiemTraHoTen() {
	for (char c : hoTen) {
		if (!isalpha(c) && c != ' ') return false;
	}
	return true;
}

void sinhVien::chuanHoaTu(string& tu) {
	for (char& c : tu) {
		c = tolower(c);
	}
	tu[0] = toupper(tu[0]);
}

void sinhVien::chuanHoaHoTen() {
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

sinhVien::sinhVien(string maSo, string hoTen, string diaChi, unsigned int tongSoTinChi, float diemTrungBinh) {
	this->maSo = maSo;
	this->hoTen = hoTen;
	this->diaChi = diaChi;
	this->tongSoTinChi = tongSoTinChi;
	this->diemTrungBinh = diemTrungBinh;
}

void sinhVien::nhapThongTin() {
	cout << "Nhap ma so sinh vien: ";
	cin >> maSo;
	cout << "Nhap ho ten sinh vien: ";
	cin.ignore();
	do {
		getline(cin, hoTen);
		if (!kiemTraHoTen()) cout << "Ho ten sinh vien khong hop le! Xin hay nhap lai." << endl;
	} while (!kiemTraHoTen());

	cout << "Nhap dia chi noi sinh vien o: ";
	getline(cin, diaChi);
	cout << "Nhap tong so tin chi tich luy cua sinh vien: ";
	cin >> tongSoTinChi;
	cout << "Nhap diem trung binh cua sinh vien: ";
	cin >> diemTrungBinh;
}

void sinhVien::xuatThongTin() const{
	cout << "Ma so sinh vien: " << maSo << endl;
	cout << "Ho va ten cua sinh vien: " << hoTen << endl;
	cout << "Dia chi noi sinh vien o: " << diaChi << endl;
	cout << "Tong so tin chi tich luy cua sinh vien: " << tongSoTinChi << endl;
	cout << "Diem trung binh cua sinh vien: " << diemTrungBinh << endl;
}

bool sinhVien::xetDuDieuKienTotNghiep() const{
	return (diemTrungBinh >= 5);
}

float sinhVien::getDiemTrungBinh() const {
	return diemTrungBinh;
}