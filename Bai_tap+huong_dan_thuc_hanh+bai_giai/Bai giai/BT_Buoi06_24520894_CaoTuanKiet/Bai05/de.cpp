// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "de.h"

de::de(unsigned int litSuaHienCo) {
	if (litSuaHienCo != 0) return;
	srand(static_cast<unsigned>(time(nullptr)));
	litSua = rand() % 11;
	child.resize(0);
}

unsigned int de::vatSua() {
	unsigned int suaDaVat = litSua;
	srand(static_cast<unsigned>(time(nullptr)));
	litSua = rand() % 11;
	return suaDaVat;
}

void de::phatRaTiengKeu() {
	cout << "Maa! ";
}

void de::sinhCon() {
	srand(static_cast<unsigned>(time(nullptr)));
	unsigned int soLuongConSinhRa = rand() % 3 + 1;
	child.resize(soLuongConSinhRa, nullptr);

	for (size_t i = 0; i < child.size(); i++) child[i] = new de;
}

vector<giaSuc*> de::choCacConDutSua() {
	vector<giaSuc*> cacCon = child;
	child.clear();
	return cacCon;
}

string de::getLoai() {
	return "de";
}