// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;
#pragma once
class String
{
	private:
		char *str;
	public:
		String();
		String(char* p);
		String(const String&);
		String& operator = (const String&);
		~String();
		char* getCharPtr();
		size_t len();
		String noi(String);
		String reverse();
		void toUpper();
		void toLower();
		void nhap();
		void xuat();
};

