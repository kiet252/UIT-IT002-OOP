// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "cListCandidate.h"

bool cListCandidate::tieuChiSapXep(cCandidate candidate1, cCandidate candidate2) {
	return candidate1.TinhTongDiem() > candidate2.TinhTongDiem();
}

cListCandidate::cListCandidate() : danhSachThiSinh() {}

cListCandidate::cListCandidate(int n) {
	danhSachThiSinh.resize(n);
}

void cListCandidate::nhap() {
	int n;
	cout << "Nhap so luong thi sinh: ";
	cin >> n;
	cin.ignore();
	danhSachThiSinh.resize(n);
	for (cCandidate &thiSinh : danhSachThiSinh) {
		cin >> thiSinh;
	}
}

void cListCandidate::xuat() {
	for (cCandidate thiSinh : danhSachThiSinh) {
		cout << thiSinh;
	}
	cout << endl;
}

void cListCandidate::xuatTongDiemLonHon15() {
	for (cCandidate thiSinh : danhSachThiSinh) {
		if (thiSinh.TinhTongDiem() > 15) cout << thiSinh;
	}
	cout << endl;
}

cCandidate cListCandidate::timThiSinhTongDiemCaoNhat() {
	cCandidate thiSinhTongCaoNhat = danhSachThiSinh[0];
	for (cCandidate thiSinh : danhSachThiSinh) {
		if (thiSinh.TinhTongDiem() > thiSinhTongCaoNhat.TinhTongDiem()) thiSinhTongCaoNhat = thiSinh;
	}
	return thiSinhTongCaoNhat;
}

void cListCandidate::sapXepTongDiemGiamDan() {
	sort(danhSachThiSinh.begin(), danhSachThiSinh.end(), tieuChiSapXep);
}