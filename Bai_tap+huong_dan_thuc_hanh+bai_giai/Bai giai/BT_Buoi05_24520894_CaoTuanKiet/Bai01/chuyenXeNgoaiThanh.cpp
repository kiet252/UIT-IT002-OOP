// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "chuyenXeNgoaiThanh.h"

chuyenXeNgoaiThanh::chuyenXeNgoaiThanh(string maSoChuyen, string hoTenTaiXe, string soXe, unsigned long doanhThu, string noiDen, unsigned int soNgayDiDuoc) : chuyenXe(maSoChuyen, hoTenTaiXe, soXe, doanhThu) {
	this->noiDen = noiDen;
	this->soNgayDiDuoc = soNgayDiDuoc;
}


void chuyenXeNgoaiThanh::nhapThongTin() {
	chuyenXe::nhapThongTin();
	cout << "Nhap diem den cua xe: " << endl;
	getline(cin, noiDen);
	cout << "Nhap so ngay di duoc cua xe: " << endl;
	cin >> soNgayDiDuoc;
	cin.ignore();
}

void chuyenXeNgoaiThanh::xuatThongTin() {
	chuyenXe::xuatThongTin();
	cout << "Noi xe di den la: " << noiDen << endl;
	cout << "So ngay xe di duoc: " << soNgayDiDuoc << endl;
}