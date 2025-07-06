// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "sachGiaoKhoa.h"

sachGiaoKhoa::sachGiaoKhoa(string maSach, string ngayNhap, unsigned long donGia, unsigned long soLuong, string nhaXuatBan, bool tinhTrang) : sach(maSach, ngayNhap, donGia, soLuong, nhaXuatBan) {
	this->tinhTrang = tinhTrang;
}

void sachGiaoKhoa::nhapThongTin() {
	sach::nhapThongTin();
	cout << "Nhap tinh trang cua sach (0 neu la sach cu, 1 neu la sach moi): " << endl;
	cin >> tinhTrang;
}

void sachGiaoKhoa::xuatThongTin() {
	sach::xuatThongtin();
	cout << "Tinh trang cua sach: " << (tinhTrang ? "moi" : "cu") << endl;
}

unsigned long sachGiaoKhoa::tinhThanhTien() {
	return unsigned long(float(sach::tinhThanhTien()) * (tinhTrang ? 1 : 0.5));
}