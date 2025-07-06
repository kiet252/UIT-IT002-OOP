// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26
#include "cDSPhanSo.h"

bool cDSPhanSo::isNguyenTo(int n) {
	if (n < 2) return false;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) return false;
	}
	return true;
}

cDSPhanSo::cDSPhanSo() : DSPhanSo() {}

cDSPhanSo::cDSPhanSo(int n) {
	DSPhanSo.resize(n);
	for (cPhanSo& ps : DSPhanSo) {
		cin >> ps;
	}
}

void cDSPhanSo::nhap() {
	int n;
	cout << "Nhap so luong phan so: ";
	cin >> n;
	vector<cPhanSo> dsMoi(n);
	for (cPhanSo& ps : dsMoi) {
		cin >> ps;
	}
	DSPhanSo = dsMoi;
}

void cDSPhanSo::in() {
	cout << "Danh sach phan so: " << endl;
	for (cPhanSo ps : DSPhanSo) cout << ps << " ";
	cout << endl;
}

void cDSPhanSo::them_cuoi(cPhanSo ps) {
	DSPhanSo.push_back(ps);
}

void cDSPhanSo::rutGon() {
	for (cPhanSo& ps : DSPhanSo) {
		ps.rutGon();
	}
}

cPhanSo cDSPhanSo::tong() {
	cPhanSo sum;
	for (cPhanSo ps : DSPhanSo) sum = sum + ps;
	return sum;
}

cPhanSo cDSPhanSo::PSLonNhat() {
	cPhanSo lonNhat = DSPhanSo[0];
	int size = DSPhanSo.size();
	for (int i = 1; i < size; i++) {
		if (DSPhanSo[i] > lonNhat) lonNhat = DSPhanSo[i];
	}
	return lonNhat;
}

cPhanSo cDSPhanSo::PSNhoNhat() {
	cPhanSo nhoNhat = DSPhanSo[0];
	int size = DSPhanSo.size();
	for (int i = 1; i < size; i++) {
		if (DSPhanSo[i] < nhoNhat) nhoNhat = DSPhanSo[i];
	}
	return nhoNhat;
}

cPhanSo cDSPhanSo::PSTuNguyenToLonNhat() {
	int i = 0;
	int size = DSPhanSo.size();
	while (i < size && !( cDSPhanSo::isNguyenTo(DSPhanSo[i].getTu()) )) i++;
	if (i == size) return cPhanSo(-1, 1);
	cPhanSo lonNhatThoaDieuKien = DSPhanSo[i];
	for (int j = i; j < size; j++) {
		if (DSPhanSo[j] > lonNhatThoaDieuKien && cDSPhanSo::isNguyenTo(DSPhanSo[i].getTu())) lonNhatThoaDieuKien = DSPhanSo[i];
	}
	return lonNhatThoaDieuKien;
}

void cDSPhanSo::sapXepTangDan() {
	sort(DSPhanSo.begin(), DSPhanSo.end());
}

void cDSPhanSo::sapXepGiamDan() {
	sort(DSPhanSo.begin(), DSPhanSo.end(), [](cPhanSo a, cPhanSo b) {return a > b;} );
}