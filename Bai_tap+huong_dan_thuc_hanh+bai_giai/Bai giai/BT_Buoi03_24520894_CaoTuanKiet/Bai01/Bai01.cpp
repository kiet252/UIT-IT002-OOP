// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "cTamGiac.h"

int main()
{
	double x, y, degree;
	cTamGiac tg;
	tg.nhap();
	tg.xuat();
	cout << "Tam giac nay la loai tam giac " << tg.kiemTraloai() << endl;
	cout << "Tinh tien theo vector: " << endl;
	cout << "Nhap x cua vector: ";
	cin >> x;
	cout << "Nhap y cua vector: ";
	cin >> y;
	tg.tinhTien(x, y);
	tg.xuat();
	cout << "Quay tam giac goc: ";
	cin >> degree;
	tg.quay(degree);
	tg.xuat();
	tg.thuNhoPhongTo();
	tg.xuat();
	cout << "Chu vi tam giac la: " << tg.tinhChuVi() << endl;
	cout << "Dien tich tam giac la: " << tg.tinhDienTich() << endl;
	return 0;
}