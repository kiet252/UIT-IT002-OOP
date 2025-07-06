// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "cDaThuc.h"

cDaThuc::cDaThuc() {
	danhSachDonThuc.resize(1);
}

cDaThuc::cDaThuc(int bac) {
	danhSachDonThuc.resize(bac + 1);
}

cDaThuc::cDaThuc(vector<cDonThuc> dt) {
	danhSachDonThuc = dt;
}

double cDaThuc::tinhGiaTri(double x) {
	double tong = 0;
	for (cDonThuc donThuc : danhSachDonThuc) {
		tong += donThuc.tinhGiaTri(x);
	}
	return tong;
}

istream& operator>>(istream& is, cDaThuc& dt) {
	int n;
	cout << "Nhap bac cua da thuc ban muon nhap (Bac cua da thuc la so nguyen): ";
	cin >> n;
	dt.danhSachDonThuc.resize(n + 1);
	for (int i = 0; i < n + 1; i++) {
		dt.danhSachDonThuc[i].nhap(i);
	}
	return is;
}

ostream& operator<<(ostream& os, cDaThuc dt) {
	int bac = dt.danhSachDonThuc.size();
	for (int i = 0; i < bac; i++) {
		os << dt.danhSachDonThuc[i];
	}
	cDonThuc::firstDonThuc = true;
	return os;
}

cDaThuc cDaThuc::operator+(cDaThuc dt) {
	int minSize = min(dt.danhSachDonThuc.size(), danhSachDonThuc.size());
	if (dt.danhSachDonThuc.size() == minSize) {
		vector<cDonThuc> dup = danhSachDonThuc;
		for (int i = 0; i < minSize; i++) {
			dup[i] = dup[i] + dt.danhSachDonThuc[i];
		}
		return cDaThuc(dup);
	}
	else {
		for (int i = 0; i < minSize; i++) {
			dt.danhSachDonThuc[i] = danhSachDonThuc[i] + dt.danhSachDonThuc[i];
		}
		return dt;
	}
}

cDaThuc cDaThuc::operator-(cDaThuc dt) {
	int minSize = min(dt.danhSachDonThuc.size(), danhSachDonThuc.size());
	if (dt.danhSachDonThuc.size() == minSize) {
		vector<cDonThuc> dup = danhSachDonThuc;
		for (int i = 0; i < minSize; i++) {
			dup[i] = dup[i] - dt.danhSachDonThuc[i];
		}
		return cDaThuc(dup);
	}
	else {
		for (int i = 0; i < minSize; i++) {
			dt.danhSachDonThuc[i] = danhSachDonThuc[i] - dt.danhSachDonThuc[i];
		}
		return dt;
	}
}

