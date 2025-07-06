// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "nongTrai.h"

nongTrai::nongTrai(size_t soLuong) {
	danhSachGiaSuc.resize(soLuong);
	luaSinh = 0;
}

void nongTrai::nhapSoLuongMoiLoai() {
	size_t soLuongBo, soLuongCuu, soLuongDe;
	cout << "Nhap so luong bo trong nong trai: ";
	cin >> soLuongBo;
	danhSachGiaSuc.resize(soLuongBo);
	for (size_t i = 0; i < soLuongBo; i++) danhSachGiaSuc[i] = new bo;
	cout << "Nhap so luong cuu trong nong trai: ";
	cin >> soLuongCuu;
	danhSachGiaSuc.resize(soLuongBo + soLuongCuu);
	for (size_t i = soLuongBo; i < soLuongBo + soLuongCuu; i++) danhSachGiaSuc[i] = new cuu;
	cout << "Nhap so luong de trong nong trai: ";
	cin >> soLuongDe;
	danhSachGiaSuc.resize(soLuongBo + soLuongCuu + soLuongDe);
	for (size_t i = soLuongBo + soLuongCuu; i < soLuongBo + soLuongCuu + soLuongDe; i++) danhSachGiaSuc[i] = new de;
}

void nongTrai::tiengKeuTatCaGiaSuc() {
	cout << "Tieng keu cua tat ca gia suc trong nong trai: " << endl;
	for (auto giaSuc : danhSachGiaSuc) giaSuc->phatRaTiengKeu();
}

void nongTrai::thongKeSoLuongGiaSucTungLoai() {
	size_t soLuongBo = 0, soLuongCuu = 0, soLuongDe = 0;
	for (auto giaSuc : danhSachGiaSuc) {
		if (giaSuc->getLoai() == "bo") soLuongBo++;
		else if (giaSuc->getLoai() == "cuu") soLuongCuu++;
		else soLuongDe++;
	}
	cout << "So luong cac gia suc trong lua thu " << luaSinh << ":" << endl;
	cout << "So luong bo: " << soLuongBo << endl;
	cout << "So luong cuu: " << soLuongCuu << endl;
	cout << "So luong de: " << soLuongDe << endl;
}

void nongTrai::thongKeTongSoLitSuaTatCaGiaSuc() {
	unsigned long tongLitSua = 0;
	for (auto& giaSuc : danhSachGiaSuc) tongLitSua += giaSuc->vatSua();
	cout << "Tong lit sua sau khi vat cac gia suc tren nong trai la: " << tongLitSua << endl;
}

void nongTrai::dongLoatSinhCon() {
	cout << "Dot sinh con thu " << ++luaSinh << " cua nong trai: " << endl;
	vector<giaSuc*> cacGiaSucMoi;
	for (auto& giasuc : danhSachGiaSuc) {
		giasuc->sinhCon();
		vector<giaSuc*> conMoi = giasuc->choCacConDutSua();
		cacGiaSucMoi.insert(cacGiaSucMoi.end(), conMoi.begin(), conMoi.end());
	}
	danhSachGiaSuc.insert(danhSachGiaSuc.end(), cacGiaSucMoi.begin(), cacGiaSucMoi.end());
}