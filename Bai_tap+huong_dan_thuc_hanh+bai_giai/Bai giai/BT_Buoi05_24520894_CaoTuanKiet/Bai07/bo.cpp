// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "bo.h"

bo::bo() {
	srand(static_cast<unsigned>(time(nullptr)));
	litSuaHienCo = rand() % 21;
	child.resize(0);
}

unsigned int bo::vatSua() {
	unsigned int suaDaVat = litSuaHienCo;
	srand(static_cast<unsigned>(time(nullptr)));
	litSuaHienCo = rand() % 21;
	return suaDaVat;
}

void bo::phatRaTiengKeu() {
	cout << "Moo! ";
}

void bo::sinhCon() {
	srand(static_cast<unsigned>(time(nullptr)));
	unsigned int soLuongConSinhRa = rand() % 3 + 1;
	child.resize(soLuongConSinhRa);
}

vector<bo> bo::choCacConDutSua() {
	vector<bo> cacCon = child;
	child.clear();
	child.resize(0);
	return cacCon;
}