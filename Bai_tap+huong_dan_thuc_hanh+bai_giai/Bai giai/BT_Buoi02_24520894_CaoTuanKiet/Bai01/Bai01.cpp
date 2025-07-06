// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26
#include "PhanSo.h"

int main()
{
	PhanSo ps1, ps2, kq;
	//nhap phan so
	ps1.nhap();
	ps2.nhap();

	//cong hai phan so
	kq = ps1.cong(ps2);
	cout << "Tong cua hai phan so: " << endl;
	kq.xuat();
	kq.toiGian();
	cout << "Tong cua hai phan so sau khi toi gian la: " << endl;
	kq.xuat();

	//tru phan so thu nhat cho phan so thu hai
	kq = ps1.tru(ps2);
	cout << "Hieu cua phan so thu nhat tru phan so thu hai: " << endl;
	kq.xuat();
	kq.toiGian();
	cout << "Hieu cua phan so thu nhat tru phan so thu hai sau khi toi gian la: " << endl;
	kq.xuat();

	//nhan hai phan so
	kq = ps1.nhan(ps2);
	cout << "Tich cua hai phan so: " << endl;
	kq.xuat();
	kq.toiGian();
	cout << "Tich cua hai phan so sau khi toi gian la: " << endl;
	kq.xuat();

	//chia phan so thu nhat cho phan so thu hai
	kq = ps1.chia(ps2);
	cout << "Thuong cua phan so thu nhat chia phan so thu hai: " << endl;
	kq.xuat();
	kq.toiGian();
	cout << "Thuong cua phan so thu nhat chia phan so thu hai sau khi toi gian la: " << endl;
	kq.xuat();
	return 0;
}