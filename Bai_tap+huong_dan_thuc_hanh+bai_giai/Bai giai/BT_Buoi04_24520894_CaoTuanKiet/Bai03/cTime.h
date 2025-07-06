// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#pragma once
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
class cTime {
private:
	int gio, phut, giay;
	void tangGiay();
	void giamGiay();
	void chuanHoa();
	void clrscr();
public:
	cTime(int = 0, int = 0, int = 0);
	void operator+(int);
	void operator-(int);
	cTime& operator++();
	cTime operator++(int);
	cTime& operator--();
	cTime operator--(int);
	friend istream& operator >> (istream&, cTime&);
	friend ostream& operator << (ostream&, cTime);
};

