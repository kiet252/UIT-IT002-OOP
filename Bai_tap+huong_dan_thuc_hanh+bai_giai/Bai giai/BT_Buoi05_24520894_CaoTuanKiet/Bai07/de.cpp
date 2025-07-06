// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "de.h"

de::de() {
	srand(static_cast<unsigned>(time(nullptr)));
	litSuaHienCo = rand() % 11;
	child.resize(0);
}

unsigned int de::vatSua() {
	unsigned int suaDaVat = litSuaHienCo;
	srand(static_cast<unsigned>(time(nullptr)));
	litSuaHienCo = rand() % 11;
	return suaDaVat;
}

void de::phatRaTiengKeu() {
	cout << "Maa! ";
}

void de::sinhCon() {
	srand(static_cast<unsigned>(time(nullptr)));
	unsigned int soLuongConSinhRa = rand() % 3 + 1;
	child.resize(soLuongConSinhRa);
}

vector<de> de::choCacConDutSua() {
	vector<de> cacCon = child;
	child.clear();
	return cacCon;
}