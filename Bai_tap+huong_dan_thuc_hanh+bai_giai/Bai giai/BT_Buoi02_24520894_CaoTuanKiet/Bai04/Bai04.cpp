// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "stdafx.h"
#include "thoiGian.h"

int main()
{
	thoiGian tg;
	int h = 0;
	short m = 0, s = 0;
	//minh hoa phuong thuc nhap va xuat
	tg.nhap();
	cout << "Thoi gian hien tai la: " << endl;
	tg.xuat();

	//minh hoa cac setters
	cout << "Thiet lap lai gio: " << endl;
	cin >> h;
	tg.setGio(h);
	cout << "Thiet lap lai phut: " << endl;
	cin >> m;
	tg.setPhut(m);
	cout << "Thiet lap lai giay: " << endl;
	cin >> s;
	tg.setGiay(s);
	//minh hoa cac getters
	cout << "Gio, phut va giay lan luot trong ham main la: " << tg.getGio() << ", " << tg.getPhut() << ", " << tg.getGiay() << endl;
	//minh hoa cac phuong thuc thay doi thoi gian
	cout << "Nhap so gio can thay doi (gio am la giam, gio duong la tang)" << endl;
	cin >> h;
	tg.doiGio(h);
	cout << "Thoi gian sau khi thay doi la: " << endl;
	tg.xuat();
	tg.chuanHoa();
	cout << "Thoi gian sau khi chuan hoa la: " << endl;
	tg.xuat();
	cout << "Nhap so phut can thay doi (phut am la giam, phut duong la tang)" << endl;
	cin >> m;
	tg.doiPhut(m);
	cout << "Thoi gian sau khi thay doi la: " << endl;
	tg.xuat();
	tg.chuanHoa();
	cout << "Thoi gian sau khi chuan hoa la: " << endl;
	tg.xuat();
	cout << "Nhap so giay can thay doi (giay am la giam, giay duong la tang)" << endl;
	cin >> s;
	tg.doiGiay(s);
	cout << "Thoi gian sau khi thay doi la: " << endl;
	tg.xuat();
	tg.chuanHoa();
	cout << "Thoi gian sau khi chuan hoa la: " << endl;
	tg.xuat();
	return 0;
}

