// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "cuu.h"

cuu::cuu(unsigned int litSuaHienCo) : giaSuc(litSuaHienCo) {
	if (litSuaHienCo != 0) return;
	srand(static_cast<unsigned>(time(nullptr)));
	litSua = rand() % 6;
	child.resize(0);
}

unsigned int cuu::vatSua() {
	unsigned int suaDaVat = litSua;
	srand(static_cast<unsigned>(time(nullptr)));
	litSua = rand() % 6;
	return suaDaVat;
}

void cuu::phatRaTiengKeu() {
	cout << "Baa! ";
}

void cuu::sinhCon() {
	srand(static_cast<unsigned>(time(nullptr)));
	unsigned int soLuongConSinhRa = rand() % 3 + 1;
	child.resize(soLuongConSinhRa, nullptr);

	for (size_t i = 0; i < child.size(); i++) child[i] = new cuu;
}

vector<giaSuc*> cuu::choCacConDutSua() {
	vector<giaSuc*> cacCon = child;
	child.clear();
	child.resize(0);
	return cacCon;
}

string cuu::getLoai() {
	return "cuu";
}