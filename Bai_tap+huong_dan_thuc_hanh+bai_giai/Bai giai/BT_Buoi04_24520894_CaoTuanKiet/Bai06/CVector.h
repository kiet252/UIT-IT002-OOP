// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#pragma once
#include <iostream>
#include <vector>
using namespace std;
class CVector
{
private:
	vector<double> trucToaDo;
public:
	CVector(size_t = 0);
	friend istream& operator>>(istream&, CVector&);
	friend ostream& operator<<(ostream&, CVector);
	bool isEmpty();
	size_t getDim();
	double getToaDo(size_t);
	CVector operator+(CVector);
	CVector operator-(CVector);
	double operator*(CVector);
};

