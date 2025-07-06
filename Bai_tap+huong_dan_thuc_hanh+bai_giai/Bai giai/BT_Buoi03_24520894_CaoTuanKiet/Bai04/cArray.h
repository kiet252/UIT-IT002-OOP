// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#pragma once
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

class cArray
{
private:
	vector<int> array;
public:
	static bool kiemTraSoNguyenTo(int);
	cArray();
	cArray(int);
	void xuat();
	int demLanXuatHien(int);
	bool kiemTraTangDan();
	int timSoLeNhoNhat();
	int timNguyenToLonNhat();
	void sapXepTangDanQuicksort(int, int);
	void sapXepGiamDanQuicksort(int, int);
};

