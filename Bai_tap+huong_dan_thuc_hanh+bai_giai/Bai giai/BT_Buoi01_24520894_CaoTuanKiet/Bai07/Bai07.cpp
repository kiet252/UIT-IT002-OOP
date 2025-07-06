// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "stdafx.h"
#include <iostream>
using namespace std;
struct ngayThangNam {
	int ngay, thang, nam;
};

void nhapNTN(ngayThangNam &ntn) {
	cout << "Nhap ngay: ";
	cin >> ntn.ngay;
	cout << "Nhap thang: ";
	cin >> ntn.thang;
	cout << "Nhap nam: ";
	cin >> ntn.nam;
}

bool namNhuan(int nam) {
	return (nam % 400 == 0) || (nam % 4 == 0 && nam % 100 != 0);
}

int soNgayTrongThang(int thang, int nam) {
	switch (thang) {
	case 4: 
	case 6: 
	case 9: 
	case 11:
		return 30;
	case 2:
		if (namNhuan(nam)) return 29;
		else return 28;
	default:
		return 31;
	}
}

bool hopLe(ngayThangNam ntn) {
	if (ntn.nam < 1 || ntn.thang < 1 || ntn.ngay < 1 || ntn.thang > 12 || ntn.ngay > soNgayTrongThang(ntn.thang, ntn.nam)) return false;
	return true;
}

void ngayThangNamTiep(ngayThangNam &ntn) {
	ntn.ngay++;
	if (ntn.ngay > soNgayTrongThang(ntn.thang, ntn.nam)) {
		ntn.ngay = 1;
		ntn.thang++;
		if (ntn.thang > 12) {
			ntn.thang = 1;
			ntn.nam++;
		}
	}
}

int main()
{
	ngayThangNam ntn;
	nhapNTN(ntn);
	if (hopLe(ntn)) {
		ngayThangNamTiep(ntn);
		cout << "Ngay thang nam ke tiep la: Ngay " << ntn.ngay << ", thang " << ntn.thang << ", nam " << ntn.nam << "\n";
		cout << "Vay ngay ke tiep la ngay " << ntn.ngay << endl;
	} else {
		cout << "Ngay thang nam khong hop le!" << endl;
	}
    return 0;
}

