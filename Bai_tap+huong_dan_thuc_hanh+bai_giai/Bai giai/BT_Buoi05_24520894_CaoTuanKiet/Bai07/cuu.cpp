// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "cuu.h"

cuu::cuu() {
	srand(static_cast<unsigned>(time(nullptr)));
	litSuaHienCo = rand() % 6;
	child.resize(0);
}

unsigned int cuu::vatSua() {
	unsigned int suaDaVat = litSuaHienCo;
	srand(static_cast<unsigned>(time(nullptr)));
	litSuaHienCo = rand() % 6;
	return suaDaVat;
}

void cuu::phatRaTiengKeu() {
	cout << "Baa! ";
}

void cuu::sinhCon() {
	srand(static_cast<unsigned>(time(nullptr)));
	unsigned int soLuongConSinhRa = rand() % 3 + 1;
	child.resize(soLuongConSinhRa);
}

vector<cuu> cuu::choCacConDutSua() {
	vector<cuu> cacCon = child;
	child.clear();
	return cacCon;
}