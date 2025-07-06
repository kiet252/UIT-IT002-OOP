// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "sinhVienCaoDang.h"

sinhVienCaoDang::sinhVienCaoDang(string maSo, string hoTen, string diaChi, unsigned int tongSoTinChi, float diemTrungBinh, unsigned int diemThiTotNghiep) : sinhVien(maSo, hoTen, diaChi, tongSoTinChi, diemTrungBinh) {
	this->diemThiTotNghiep = diemThiTotNghiep;
}

void sinhVienCaoDang::nhapThongTin() {
	sinhVien::nhapThongTin();
	cout << "Nhap diem thi tot nghiep cua sinh vien: " << endl;
	cin >> diemThiTotNghiep;
}

void sinhVienCaoDang::xuatThongTin() const{
	sinhVien::xuatThongTin();
	cout << "Diem thi tot nghiep cua sinh vien: " << diemThiTotNghiep << endl;
}

bool sinhVienCaoDang::xetDuDieuKienTotNghiep() const{
	return (sinhVien::xetDuDieuKienTotNghiep() && tongSoTinChi >= 110 && diemThiTotNghiep >= 5);
}