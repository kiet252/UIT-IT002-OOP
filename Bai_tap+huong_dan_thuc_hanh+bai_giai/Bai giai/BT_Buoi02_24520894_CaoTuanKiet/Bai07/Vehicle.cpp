// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "Vehicle.h"

bool Vehicle::tenNguoiHopLe(string ten) {
	for (const char& x : ten) {
		if (x != ' ' && !isalpha(x)) return false;
	}
	return true;
}

float Vehicle::thuePhaiDong() {
	if (dungTich <= 100) return triGia * 0.01;
	else if (dungTich <= 200) return triGia * 0.03;
	else return triGia * 0.05;
}

Vehicle::Vehicle() {
	chuXe = "";
	loaiXe = "";
	dungTich = 0;
	triGia = 0;
}

Vehicle::Vehicle(string chuXe = "", string loaiXe = "", float dungTich = 0, float triGia = 0) {
	this->chuXe = chuXe;
	this->loaiXe = loaiXe;
	this->dungTich = dungTich;
	this->triGia = triGia;
}

void Vehicle::nhapThongTin() {
	cout << "Nhap ten chu xe (Ten chu xe khong duoc co ki tu dac biet hay so): " << endl;
	do {
		getline(cin, chuXe);
		if (!tenNguoiHopLe(chuXe)) cout << "Ten chu xe khong hop le! Xin hay nhap lai." << endl;
	} while (!tenNguoiHopLe(chuXe));
	cout << "Nhap ten loai xe: " << endl;
	getline(cin, loaiXe);
	cout << "Nhap dung tich xylanh cua xe (don vi: cm3) : " << endl;
	do {
		cin >> dungTich;
		if (dungTich < 0) cout << "Dung tich xylanh khong hop le! Xin hay nhap lai." << endl;
	} while (dungTich < 0);
	cout << "Nhap tri gia cua xe (don vi: VND) : " << endl;
	do {
		cin >> triGia;
		if (triGia < 0) cout << "Tri gia cua xe khong hop le! Xin hay nhap lai." << endl;
	} while (triGia < 0);
	cin.ignore();
}

void Vehicle::inThongTin() {
	cout << "Ten chu xe: " << chuXe << endl;
	cout << "Loai xe: " << loaiXe << endl;
	cout << "Dung tich xylanh: " << dungTich << "cm3" << endl;
	cout << "Tri gia cua xe: " << fixed << setprecision(2) << triGia << "VND" << endl;
	cout << "Tien thue truoc ba: " << fixed << setprecision(2) << thuePhaiDong() << "VND" << endl;
	cout << endl;
}