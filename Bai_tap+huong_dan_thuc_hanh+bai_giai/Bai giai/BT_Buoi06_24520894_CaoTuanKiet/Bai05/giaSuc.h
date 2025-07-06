// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#pragma once
#include <iostream>
#include <vector>
#include <time.h>
using namespace std;
class giaSuc
{
protected:
	unsigned int litSua;
	vector<giaSuc*> child;
public:
	giaSuc(unsigned int = 0);

	virtual unsigned int vatSua() = 0;
	virtual void phatRaTiengKeu() = 0;
	virtual void sinhCon() = 0;
	virtual vector<giaSuc*> choCacConDutSua() = 0;
	virtual string getLoai() = 0;
};

