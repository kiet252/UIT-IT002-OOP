// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#pragma once
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class Vehicle
{
	private:
		string chuXe, loaiXe;
		float dungTich, triGia;
		float thuePhaiDong();
		bool tenNguoiHopLe(string);
	public:
		Vehicle();
		Vehicle(string, string, float, float);
		void nhapThongTin();
		void inThongTin();
};

