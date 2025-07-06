// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "stdafx.h"
#include "Diem.h"

int main()
{
	Diem diem;
	float x, y;
	//minh hoa cac phuong thuc nhap va xuat
	diem.nhap();
	diem.xuat();

	//minh hoa cac getters
	cout << "Hoanh do va tung do cua diem trong ham main la: x = " << diem.gethoanhDo() << ", y = " << diem.gettungDo() << endl;

	//minh hoa cac setters
	cout << "Thay doi hoanh do cua diem: " << endl;
	cin >> x;
	diem.sethoanhDo(x);
	diem.xuat();
	cout << "Thay doi tung do cua diem: " << endl;
	cin >> y;
	diem.settungDo(y);
	diem.xuat();

	//minh hoa phuong thuc tinh tien
	cout << "Nhap vecto tinh tuyen: " << endl;
	cin >> x >> y;
	diem.tinhTien(x, y);
	cout << "Diem sau khi tinh tuyen la: " << endl;
	diem.xuat();
    return 0;
}

