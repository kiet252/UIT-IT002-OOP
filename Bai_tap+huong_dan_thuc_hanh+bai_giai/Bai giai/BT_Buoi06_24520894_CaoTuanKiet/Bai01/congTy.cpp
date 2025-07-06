// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "congTy.h"

bool congTy::kiemTraTuoiNVTraiLonHon(nhanVien* nv1, nhanVien* nv2) {
	stringstream ss1(nv1->getNgaySinh());
	stringstream ss2(nv2->getNgaySinh());

	string ngay1, thang1, nam1, ngay2, thang2, nam2;
	getline(ss1, ngay1, '/');
	getline(ss1, thang1, '/');
	getline(ss1, nam1, '/');

	getline(ss2, ngay2, '/');
	getline(ss2, thang2, '/');
	getline(ss2, nam2, '/');

	if (nam1 < nam2) return true;
	else if (nam1 > nam2) return false;
	if (thang1 < thang2) return true;
	else if (thang1 > thang2) return false;
	if (ngay1 < ngay2) return true;
	else return false;
}

congTy::congTy(size_t soLuongNhanVien) {
	DSNhanVien.resize(soLuongNhanVien);
}

void congTy::nhapThongTinDanhSachNhanVien() {
	size_t soLuongNVSanXuat, soLuongNVVanPhong;
	cout << "Nhap so luong nhan vien san xuat: ";
	cin >> soLuongNVSanXuat;
	DSNhanVien.resize(soLuongNVSanXuat);
	for (size_t i = 0; i < soLuongNVSanXuat; i++) {
		cout << "Nhap thong tin ve nhan vien san xuat thu " << i + 1 << ": " << endl;
		DSNhanVien[i] = new nhanVienSanXuat;
		DSNhanVien[i]->nhapThongTin();
	}
	cout << "Nhap so luong nhan vien van phong: ";
	cin >> soLuongNVVanPhong;
	DSNhanVien.resize(soLuongNVSanXuat + soLuongNVVanPhong);
	for (size_t i = soLuongNVSanXuat; i < soLuongNVSanXuat + soLuongNVVanPhong; i++) {
		cout << "Nhap thong tin ve nhan vien san xuat thu " << i - soLuongNVSanXuat + 1 << ": " << endl;
		DSNhanVien[i] = new nhanVienVanPhong;
		DSNhanVien[i]->nhapThongTin();
	}
}

void congTy::xuatThongTinDanhSachNhanVien() {
	cout << "Thong tin tat ca nhan vien trong cong ty: " << endl;
	for (const auto& nhanVien : DSNhanVien) {
		nhanVien->xuatThongTin();
	}
}

void congTy::tinhLuongTungNhanVien() {
	cout << "Luong cua cac nhan vien: " << endl;
	for (const auto& nhanVien : DSNhanVien) {
		cout << "Ho va ten nhan vien: " << nhanVien->getHoTen() << endl;
		cout << "Luong cua nhan vien: " << nhanVien->tinhLuong() << endl;
	}
}

void congTy::xuatTongLuongCongTyTraCacNhanVien() {
	unsigned long tongLuong = 0;
	for (const auto& nhanVien : DSNhanVien) tongLuong += nhanVien->tinhLuong();
	cout << "Tong luong ma cong ty phai tra cho cac nhan vien: " << tongLuong << endl;
}

void congTy::xuatThongTinNhanVienLuongThapNhat() {
	nhanVien* nhanVienLuongThapNhat = DSNhanVien[0];
	for (const auto& nhanVien : DSNhanVien) {
		if (nhanVienLuongThapNhat->tinhLuong() > nhanVien->tinhLuong()) nhanVienLuongThapNhat = nhanVien;
	}
	cout << "Thong tin nhan vien co luong thap nhat: " << endl;
	nhanVienLuongThapNhat->xuatThongTin();
}

void congTy::xuatThongTinNhanVienVanPhongTuoiCaoNhat() {
	size_t i = 0;
	while (i < DSNhanVien.size() && DSNhanVien[i]->getLoaiNhanVien() != "van phong") i++;
	if (i >= DSNhanVien.size()) {
		cout << "Trong cong ty hien khong co nhan vien van phong!" << endl;
		return;
	}
	nhanVien* NVVPTuoiCaoNhat = DSNhanVien[i];
	for (int j = i; j < DSNhanVien.size(); j++) {
		if (DSNhanVien[j]->getLoaiNhanVien() == "van phong" && kiemTraTuoiNVTraiLonHon(DSNhanVien[j], NVVPTuoiCaoNhat)) NVVPTuoiCaoNhat = DSNhanVien[j];
	}
	cout << "Thong tin ve nhan vien van phong co tuoi cao nhat: " << endl;
	NVVPTuoiCaoNhat->xuatThongTin();
}
