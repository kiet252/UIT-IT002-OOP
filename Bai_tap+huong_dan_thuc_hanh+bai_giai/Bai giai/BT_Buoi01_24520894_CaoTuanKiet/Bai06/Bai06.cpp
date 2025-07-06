// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct sinhVien {
	string hoTen;
	float diemToan, diemVan;
	float diemTB() {
		return (diemToan + diemVan) / 2;
	}
};

void nhapThongTinSV(sinhVien &sv) {
	cout << "Nhap ten sinh vien: ";
	getline(cin, sv.hoTen);
	cout << "Nhap diem Toan cua sinh vien: ";
	cin >> sv.diemToan;
	cout << "Nhap diem Van cua sinh vien: ";
	cin >> sv.diemVan;
	cin.ignore();
}

void xuatThongTinSV(sinhVien sv) {
	cout << "Ho va ten sinh vien: " << sv.hoTen << endl;
	cout << "Diem trung binh cua sinh vien la: " << sv.diemTB() << endl;
}


bool tieuChi(sinhVien a, sinhVien b) {
	return a.diemTB() < b.diemTB();
}

int main()
{
	int n;
	vector<sinhVien> danhSachSV;
	cout << "Nhap so luong sinh vien: " << endl;
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++) {
		sinhVien svMoi;
		nhapThongTinSV(svMoi);
		danhSachSV.push_back(svMoi);
	}
	sort(danhSachSV.begin(), danhSachSV.end(), tieuChi);
	cout << "Thong tin sinh vien co diem trung binh cao nhat: " << endl;
	xuatThongTinSV(danhSachSV[n - 1]);
	cout << "Thong tin sinh vien co diem trung binh thap nhat: " << endl;
	xuatThongTinSV(danhSachSV[0]);
	return 0;
}