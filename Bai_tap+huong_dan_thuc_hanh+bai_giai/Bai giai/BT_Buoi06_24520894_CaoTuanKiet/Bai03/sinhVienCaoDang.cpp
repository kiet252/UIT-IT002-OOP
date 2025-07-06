// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "sinhVienCaoDang.h"

sinhVienCaoDang::sinhVienCaoDang(string maSo, string hoTen, string diaChi, unsigned int tongSoTinChi, unsigned short diemTrungBinh, unsigned short diemThiTotNghiep) : sinhVien(maSo, hoTen, diaChi, tongSoTinChi, diemTrungBinh) {
	this->diemThiTotNghiep = diemThiTotNghiep;
}

void sinhVienCaoDang::nhapThongTin() {
	sinhVien::nhapThongTin();
	cout << "Nhap diem thi tot nghiep cua sinh vien: " << endl;
	do {
		cin >> diemThiTotNghiep;
		if (diemThiTotNghiep > 10) cout << "Diem thi tot nghiep cua sinh vien khong hop le! Xin hay nhap lai." << endl;
	} while (diemThiTotNghiep > 10);
}

void sinhVienCaoDang::xuatThongTin() {
	sinhVien::xuatThongtin();
	cout << "Diem thi tot nghiep cua sinh vien: " << diemThiTotNghiep << endl;
}

bool sinhVienCaoDang::duDieuKienTotNghiep() {
	return (tongSoTinChi >= 120 && diemTrungBinh >= 5 && diemThiTotNghiep >= 5);
}

string sinhVienCaoDang::getLoai() {
	return "sinh vien cao dang";
}