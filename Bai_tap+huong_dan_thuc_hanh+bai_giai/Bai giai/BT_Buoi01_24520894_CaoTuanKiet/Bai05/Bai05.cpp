// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

struct sinhVien {
	string hoTen;
	float diemToan, diemVan;
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
	cout << "Ten sinh vien: " << sv.hoTen << endl;
	cout << "Diem trung binh cua sinh vien la: ";
	cout << (sv.diemToan + sv.diemVan) / 2;
}


int main()
{
	sinhVien sv;
	nhapThongTinSV(sv);
	xuatThongTinSV(sv);
    return 0;
}

