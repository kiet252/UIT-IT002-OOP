// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26
#include "cSoPhuc.h"

cSoPhuc::cSoPhuc(double thuc, double ao) {
	phanThuc = thuc;
	phanAo = ao;
}

ostream& operator<<(ostream& os,cSoPhuc sp) {
	if (sp.phanThuc != 0) os << sp.phanThuc;
	if (sp.phanThuc != 0 && sp.phanAo != 0) os << (sp.phanAo > 0 ? "+" : "");
	if (sp.phanAo != 0) {
		if (sp.phanAo != abs(1)) os << sp.phanAo;
		os << (sp.phanAo == -1 ? "-" : "") << "i";
	}
	if (sp.phanThuc == 0 && sp.phanAo == 0) os << 0;
	return os;
}

istream& operator>>(istream& is, cSoPhuc& sp) {
	cout << "Nhap phan thuc: " << endl;
	is >> sp.phanThuc;
	cout << "Nhap phan ao: " << endl;
	is >> sp.phanAo;
	return is;
}

cSoPhuc cSoPhuc::operator+(cSoPhuc biCong) {
	return cSoPhuc(phanThuc + biCong.phanThuc, phanAo + biCong.phanAo);
}

cSoPhuc cSoPhuc::operator+(double so) {
	return cSoPhuc(phanThuc + so, phanAo);
}

cSoPhuc operator+(double so, cSoPhuc sp) {
	return cSoPhuc(sp.phanThuc + so, sp.phanAo);
}

cSoPhuc cSoPhuc::operator-(cSoPhuc biTru) {
	return cSoPhuc(phanThuc - biTru.phanThuc, phanAo - biTru.phanAo);
}

cSoPhuc cSoPhuc::operator-(double soThucBiTru) {
	return cSoPhuc(phanThuc - soThucBiTru, phanAo);
}

cSoPhuc operator-(double soThucTru, cSoPhuc biTru) {
	return cSoPhuc(soThucTru - biTru.phanThuc, -biTru.phanAo);
}

cSoPhuc cSoPhuc::operator*(cSoPhuc biNhan) {
	return cSoPhuc(phanThuc * biNhan.phanThuc - phanAo * biNhan.phanAo, phanThuc * biNhan.phanAo + phanAo * biNhan.phanThuc);
}

cSoPhuc cSoPhuc::operator*(double biNhan) {
	return cSoPhuc(phanThuc * biNhan, phanAo * biNhan);
}

cSoPhuc operator*(double soNhan, cSoPhuc biNhan) {
	return cSoPhuc(soNhan * biNhan.phanThuc, soNhan * biNhan.phanAo);
}

cSoPhuc cSoPhuc::operator/(cSoPhuc biChia) {
	double tuThuc = phanThuc * biChia.phanThuc + phanAo * biChia.phanAo;
	double tuAo = phanAo * biChia.phanThuc - phanThuc * biChia.phanAo;
	double mau = biChia.phanThuc * biChia.phanThuc + biChia.phanAo * biChia.phanAo;
	return cSoPhuc(tuThuc / mau, tuAo / mau);
}

cSoPhuc cSoPhuc::operator/(double biChia) {
	return cSoPhuc(phanThuc / biChia, phanAo / biChia);
}

cSoPhuc operator/(double soChia, cSoPhuc biChia) {
	double tuThuc = soChia * biChia.phanThuc;
	double tuAo = -soChia * biChia.phanAo;
	double mau = biChia.phanThuc * biChia.phanThuc + biChia.phanAo * biChia.phanAo;
	return cSoPhuc(tuThuc / mau, tuAo / mau);
}

bool cSoPhuc::operator==(cSoPhuc sp) {
	return (phanThuc == sp.phanThuc && phanAo == sp.phanAo);
}

bool cSoPhuc::operator==(double so) {
	return (phanThuc == so && phanAo == 0);
}

bool operator==(double so, cSoPhuc sp) {
	return (so == sp.phanThuc && sp.phanThuc == 0);
}

bool cSoPhuc::operator!=(cSoPhuc sp) {
	return (phanThuc != sp.phanThuc || phanAo != sp.phanAo);
}

bool cSoPhuc::operator!=(double so) {
	return (phanAo != 0 || phanThuc != so);
}

bool operator!=(double so, cSoPhuc sp) {
	return (sp.phanAo != 0 || sp.phanThuc != so);
}