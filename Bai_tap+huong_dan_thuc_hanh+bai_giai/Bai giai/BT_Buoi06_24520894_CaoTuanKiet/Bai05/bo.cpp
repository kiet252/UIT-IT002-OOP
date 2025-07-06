// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "bo.h"

bo::bo(unsigned int litSuaHienCo) : giaSuc(litSuaHienCo) {
	if (litSuaHienCo != 0) return;
	srand(static_cast<unsigned>(time(nullptr)));
	litSua = rand() % 21;
	child.resize(0);
}

unsigned int bo::vatSua() {
	unsigned int suaDaVat = litSua;
	srand(static_cast<unsigned>(time(nullptr)));
	litSua = rand() % 21;
	return suaDaVat;
}

void bo::phatRaTiengKeu() {
	cout << "Moo! ";
}

void bo::sinhCon() {
	srand(static_cast<unsigned>(time(nullptr)));
	unsigned int soLuongConSinhRa = rand() % 3 + 1;
	child.resize(soLuongConSinhRa, nullptr);

	for (size_t i = 0; i < child.size(); i++) child[i] = new bo;
}

vector<giaSuc*> bo::choCacConDutSua() {
	vector<giaSuc*> cacCon = child;
	child.clear();
	child.resize(0);
	return cacCon;
}

string bo::getLoai() {
	return "bo";
}