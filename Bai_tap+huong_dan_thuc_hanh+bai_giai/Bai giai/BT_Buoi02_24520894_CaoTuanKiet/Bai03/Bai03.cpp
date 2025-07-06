// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "stdafx.h"
#include "soPhuc.h"

int main()
{
	soPhuc sp1, sp2, kq;
	sp1.nhap();
	sp2.nhap();

	kq = sp1.cong(sp2);
	cout << "Tong hai so phuc la: " << endl;
	kq.xuat();

	kq = sp1.tru(sp2);
	cout << "Hieu cua so phuc thu nhat voi so phuc thu hai la: " << endl;
	kq.xuat();

	kq = sp1.nhan(sp2);
	cout << "Tich hai so phuc la: " << endl;
	kq.xuat();

	kq = sp1.chia(sp2);
	cout << "Thuong cua so phuc thu nhat voi so phuc thu hai la: " << endl;
	kq.xuat();
    return 0;
}

