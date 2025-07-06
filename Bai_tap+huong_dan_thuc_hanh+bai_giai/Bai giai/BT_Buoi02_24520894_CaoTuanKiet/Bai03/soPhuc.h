// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include <iostream>
using namespace std;
#pragma once
class soPhuc {
private:
	float phanThuc, phanAo;
public:
	soPhuc();
	soPhuc(float, float);
	void xuat();
	void nhap();
	soPhuc cong(soPhuc);
	soPhuc tru(soPhuc);
	soPhuc nhan(soPhuc);
	soPhuc chia(soPhuc);
};

