// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26
#include <iostream>
using namespace std;
#pragma once
class cSoPhuc {
private:
	double phanThuc, phanAo;
public:
	cSoPhuc(double = 0, double = 0);
	friend ostream& operator<<(ostream&, cSoPhuc);
	friend istream& operator>>(istream&, cSoPhuc&);
	cSoPhuc operator+(cSoPhuc);
	cSoPhuc operator+(double);
	friend cSoPhuc operator+(double, cSoPhuc);
	cSoPhuc operator-(cSoPhuc);
	cSoPhuc operator-(double);
	friend cSoPhuc operator-(double, cSoPhuc);
	cSoPhuc operator*(cSoPhuc);
	cSoPhuc operator*(double);
	friend cSoPhuc operator*(double, cSoPhuc);
	cSoPhuc operator/(cSoPhuc);
	cSoPhuc operator/(double);
	friend cSoPhuc operator/(double, cSoPhuc);
	
	bool operator==(cSoPhuc);
	bool operator==(double);
	friend bool operator==(double, cSoPhuc);

	bool operator!=(cSoPhuc);
	bool operator!=(double);
	friend bool operator!=(double, cSoPhuc);
};

