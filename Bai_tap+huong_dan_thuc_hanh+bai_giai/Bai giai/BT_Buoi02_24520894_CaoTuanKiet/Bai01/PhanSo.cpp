// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "PhanSo.h"

int PhanSo::gcd(int i, int j) {
	int a = abs(i), b = abs(j);
	while (b > 0) {
		int c = a % b;
		a = b;
		b = c;
	}
	return a;
}

PhanSo::PhanSo() {
	tuSo = 0;
	mauSo = 1;
}

PhanSo::PhanSo(int tu = 0, int mau = 1) {
	tuSo = tu;
	mauSo = mau;
}

void PhanSo::nhap() {
	cout << "Nhap tu cua phan so: " << endl;
	cin >> tuSo;
	do {
		cout << "Nhap mau cua phan so: " << endl;
		cin >> mauSo;
		if (mauSo == 0) {
			cout << "Mau so khong hop le!" << endl;
		}
	} while (mauSo == 0);
}

void PhanSo::xuat() {
	if (tuSo == mauSo) cout << 1 << endl;
	else if (mauSo == 1) cout << tuSo << endl;
	else cout << tuSo << "/" << mauSo << endl;
}

void PhanSo::toiGian() {
	int ucln = gcd(tuSo, mauSo);
	tuSo /= ucln;
	mauSo /= ucln;
}

PhanSo PhanSo::cong(PhanSo biCong) {
	PhanSo ketQua = PhanSo(tuSo * biCong.mauSo + mauSo * biCong.tuSo, mauSo * biCong.mauSo);
	return ketQua;
}

PhanSo PhanSo::tru(PhanSo biTru) {
	PhanSo ketQua = PhanSo(tuSo * biTru.mauSo - mauSo * biTru.tuSo, mauSo * biTru.mauSo);
	return ketQua;
}

PhanSo PhanSo::nhan(PhanSo biNhan) {
	PhanSo ketQua = PhanSo(tuSo * biNhan.tuSo, mauSo * biNhan.mauSo);
	return ketQua;
}

PhanSo PhanSo::chia(PhanSo biChia) {
	PhanSo ketQua = PhanSo(tuSo * biChia.mauSo, mauSo * biChia.tuSo);
	return ketQua;
}