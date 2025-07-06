// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#pragma once
#include "giaSuc.h"
class de : public giaSuc
{
private:
	vector<de> child;
public:
	de();
	unsigned int vatSua();
	void phatRaTiengKeu();
	void sinhCon();
	vector<de> choCacConDutSua();
};

