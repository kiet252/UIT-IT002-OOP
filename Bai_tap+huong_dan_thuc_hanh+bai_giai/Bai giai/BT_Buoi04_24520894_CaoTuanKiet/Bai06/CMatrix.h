// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#pragma once
#include "CVector.h"
#include <iostream>
#include <vector>
using namespace std;
class CMatrix
{
private:
	vector<vector<double>> maTran;
public:
	CMatrix(int = 0, int = 0);
	CMatrix(vector<vector<double>>);
	CMatrix(CVector);
	double dinhThuc();
	CMatrix hoanVi();
	CMatrix nghichDao();
	bool isEmpty();
	friend istream& operator>> (istream&, CMatrix&);
	friend ostream& operator<< (ostream&, CMatrix);
	CMatrix operator+(CMatrix);
	CMatrix operator-(CMatrix);
	CMatrix operator*(CMatrix);
	CMatrix operator*(double);
	friend CMatrix operator*(double, CMatrix);
	friend CMatrix operator*(CVector, CMatrix);
	CMatrix operator/(CMatrix);
};

