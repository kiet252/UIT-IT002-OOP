// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "chuyenXeNoiThanh.h"

chuyenXeNoiThanh::chuyenXeNoiThanh(string maSoChuyen, string hoTenTaiXe, string soXe, unsigned long doanhThu, unsigned int soTuyen, unsigned int soKmDiDuoc) : chuyenXe(maSoChuyen, hoTenTaiXe, soXe, doanhThu)
{
	this->soTuyen = soTuyen;
	this->soKmDiDuoc = soKmDiDuoc;
}

void chuyenXeNoiThanh::nhapThongTin() {
	chuyenXe::nhapThongTin();
	cout << "Nhap so tuyen cua xe: " << endl;
	cin >> soTuyen;
	cout << "Nhap so Km di duoc cua xe: " << endl;
	cin >> soKmDiDuoc;
	cin.ignore();
}

void chuyenXeNoiThanh::xuatThongTin() {
	chuyenXe::xuatThongTin();
	cout << "So tuyen cua xe: " << soTuyen << endl;
	cout << "So Km xe di duoc: " << soKmDiDuoc << endl;
}