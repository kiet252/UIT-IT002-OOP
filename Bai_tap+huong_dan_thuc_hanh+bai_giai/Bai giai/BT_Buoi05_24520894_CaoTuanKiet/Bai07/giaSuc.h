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
class giaSuc
{
protected:
	unsigned int litSuaHienCo;
public:
	giaSuc();

	unsigned int vatSua();
	void phatRaTiengKeu();
	void sinhCon();
	vector<giaSuc> choCacConDutSua();
};

