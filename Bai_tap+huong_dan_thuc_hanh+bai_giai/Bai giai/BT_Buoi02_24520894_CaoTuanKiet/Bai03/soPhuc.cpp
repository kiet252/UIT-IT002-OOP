// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "stdafx.h"
#include "soPhuc.h"


soPhuc::soPhuc() {
	phanThuc = 0;
	phanAo = 0;
}

soPhuc::soPhuc(float thuc = 0, float ao = 0) {
	phanThuc = thuc;
	phanAo = ao;
}

void soPhuc::xuat() {
	if (phanThuc != 0) cout << phanThuc;
	if (phanThuc != 0 && phanAo != 0) cout << (phanAo > 0 ? "+" : "");
	if (phanAo != 0) cout << phanAo << "i";
	if (phanThuc == 0 && phanAo == 0) cout << 0;
	cout << endl;
}

void soPhuc::nhap() {
	cout << "Nhap phan thuc: " << endl;
	cin >> phanThuc;
	cout << "Nhap phan ao: " << endl;
	cin >> phanAo;
}

soPhuc soPhuc::cong(soPhuc biCong) {
	return soPhuc(phanThuc + biCong.phanThuc, phanAo + biCong.phanAo);
}

soPhuc soPhuc::tru(soPhuc biTru) {
	return soPhuc(phanThuc - biTru.phanThuc, phanAo - biTru.phanAo);
}

soPhuc soPhuc::nhan(soPhuc biNhan) {
	return soPhuc(phanThuc * biNhan.phanThuc - phanAo * biNhan.phanAo, phanThuc * biNhan.phanAo + phanAo * biNhan.phanThuc);
}

soPhuc soPhuc::chia(soPhuc biChia) {
	float tuThuc = phanThuc * biChia.phanThuc + phanAo * biChia.phanAo;
	float tuAo = phanAo * biChia.phanThuc - phanThuc * biChia.phanAo;
	float mau = biChia.phanThuc * biChia.phanThuc + biChia.phanAo * biChia.phanAo;
	return soPhuc(tuThuc / mau, tuAo / mau);
}