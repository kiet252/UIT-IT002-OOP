// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "nongTrai.h"

nongTrai::nongTrai(size_t soLuong) {
	danhSachBo.resize(soLuong);
	danhSachCuu.resize(soLuong);
	danhSachDe.resize(soLuong);
	luaSinh = 0;
}

void nongTrai::nhapSoLuongMoiLoai() {
	size_t soLuong;
	cout << "Nhap so luong bo trong nong trai: ";
	cin >> soLuong;
	danhSachBo.resize(soLuong);
	cout << "Nhap so luong cuu trong nong trai: ";
	cin >> soLuong;
	danhSachCuu.resize(soLuong);
	cout << "Nhap so luong de trong nong trai: ";
	cin >> soLuong;
	danhSachDe.resize(soLuong);
}

void nongTrai::tiengKeuTatCaGiaSuc() {
	cout << "Tieng keu cua tat ca gia suc trong nong trai: " << endl;
	for (auto conBo : danhSachBo) conBo.phatRaTiengKeu();
	for (auto conCuu : danhSachCuu) conCuu.phatRaTiengKeu();
	for (auto conDe : danhSachDe) conDe.phatRaTiengKeu();
}

void nongTrai::thongKeSoLuongGiaSucTungLoai() {
	cout << "So luong cac gia suc trong lua thu " << luaSinh << ":" << endl;
	cout << "So luong bo: " << danhSachBo.size() << endl;
	cout << "So luong cuu: " << danhSachCuu.size() << endl;
	cout << "So luong de: " << danhSachDe.size() << endl;
}

void nongTrai::thongKeTongSoLitSuaTatCaGiaSuc() {
	unsigned long tongLitSua = 0;
	for (auto& conBo : danhSachBo) tongLitSua += conBo.vatSua();
	for (auto& conCuu : danhSachCuu) tongLitSua += conCuu.vatSua();
	for (auto& conDe : danhSachDe) tongLitSua += conDe.vatSua();
	cout << "Tong lit sua sau khi vat cac gia suc tren nong trai la: " << tongLitSua << endl;
}

void nongTrai::dongLoatSinhCon() {
	cout << "Dot sinh con thu " << ++luaSinh << " cua nong trai: " << endl;
	vector<bo> cacConBoMoi;
	for (auto& conBo : danhSachBo) {
		conBo.sinhCon();
		vector<bo> conMoi = conBo.choCacConDutSua();
		cacConBoMoi.insert(cacConBoMoi.end(), conMoi.begin(), conMoi.end());
	}
	danhSachBo.insert(danhSachBo.end(), cacConBoMoi.begin(), cacConBoMoi.end());
	
	vector<cuu> cacConCuuMoi;
	for (auto& conCuu : danhSachCuu) {
		conCuu.sinhCon();
		vector<cuu> conMoi = conCuu.choCacConDutSua();
		cacConCuuMoi.insert(cacConCuuMoi.end(), conMoi.begin(), conMoi.end());
	}
	danhSachCuu.insert(danhSachCuu.end(), cacConCuuMoi.begin(), cacConCuuMoi.end());

	vector<de> cacConDeMoi;
	for (auto& conDe : danhSachDe) {
		conDe.sinhCon();
		vector<de> conMoi = conDe.choCacConDutSua();
		cacConDeMoi.insert(cacConDeMoi.end(), conMoi.begin(), conMoi.end());
	}
	danhSachDe.insert(danhSachDe.end(), cacConDeMoi.begin(), cacConDeMoi.end());
}