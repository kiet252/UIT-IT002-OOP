// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "CVector.h"

CVector::CVector(size_t n) {
	trucToaDo.resize(n);
}

istream& operator>>(istream& is, CVector& vector) {
	int n;
	cout << "Nhap so chieu cua vector: " << endl;
	do {
		is >> n;
		if (n < 0) cout << "So chieu khong hop le! Xin hay nhap lai." << endl;
	} while (n < 0);
	vector.trucToaDo.resize(n);

	cout << "Nhap toa do cua " << n << " truc toa do vector: " << endl;

	for (int i = 0; i < n; i++) {
		is >> vector.trucToaDo[i];
	}

	return is;
}

ostream& operator<<(ostream& os, CVector vector) {
	os << "(";
	bool first = true;
	for (double x : vector.trucToaDo) {
		if (!first) os << ", ";
		os << x;
		first = false;
	}
	os << ")";

	return os;
}

bool CVector::isEmpty() {
	return trucToaDo.empty();
}

size_t CVector::getDim() {
	return trucToaDo.size();
}

double CVector::getToaDo(size_t index) {
	if (index < 0 || index >= trucToaDo.size()) return 0;
	return trucToaDo[index];
}

CVector CVector::operator+(CVector vtKhac) {
	if (trucToaDo.size() != vtKhac.trucToaDo.size()) return 0;
	for (size_t i = 0; i < trucToaDo.size(); i++) vtKhac.trucToaDo[i] += trucToaDo[i];
	return vtKhac;
}

CVector CVector::operator-(CVector vtKhac) {
	if (trucToaDo.size() != vtKhac.trucToaDo.size()) return 0;
	for (size_t i = 0; i < trucToaDo.size(); i++) vtKhac.trucToaDo[i] = trucToaDo[i] - vtKhac.trucToaDo[i];
	return vtKhac;
}

double CVector::operator*(CVector vtKhac) {
	if (trucToaDo.size() != vtKhac.trucToaDo.size()) return 0;
	double tong = 0;
	for (size_t i = 0; i < trucToaDo.size(); i++) tong += (vtKhac.trucToaDo[i] * trucToaDo[i]);
	return tong;
}