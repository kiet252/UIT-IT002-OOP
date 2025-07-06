// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "cDaGiac.h"

bool cDaGiac::ganBang0(double soCanKiemTra) {
	return (fabs(soCanKiemTra) < 1e-9);
}

Diem cDaGiac::tinhTrongTam(vector<Diem> cacDinh) {
	double tongX = 0;
	double tongY = 0;
	for (Diem p : cacDinh) {
		tongX += p.getx();
		tongY += p.gety();
	}
	return Diem(tongX / cacDinh.size(), tongY / cacDinh.size());
}

bool cDaGiac::soSanhGocDuaVaoTrongTam(Diem a, Diem b, Diem trongTam) {
	//atan2: arc tan cua (y / x)
	double gocA = atan2(a.gety() - trongTam.gety(), a.getx() - trongTam.getx());
	double gocB = atan2(b.gety() - trongTam.gety(), b.getx() - trongTam.getx());
	return gocA < gocB;
}

void cDaGiac::sapXepDiemTheoNguocChieuKimDongHo(vector<Diem>& cacDinhCanXep) {
	Diem trongTam = tinhTrongTam(cacDinhCanXep);
	//Su dung lambda function cho ham sort de co the doc duoc trongTam
	sort(cacDinhCanXep.begin(), cacDinhCanXep.end(), [this, trongTam](Diem a, Diem b) {
		return soSanhGocDuaVaoTrongTam(a, b, trongTam);
		}
	);
}

cDaGiac::cDaGiac() {
	//Mac dinh da giac nho nhat la 1 tam giac => it nhat co 3 canh
	vector<Diem> diemMoi(3);
	//Mot tam giac co 3 canh
	vector<double> canhMoi(3);
	cacDinh = diemMoi;
	cacCanh = canhMoi;
}

cDaGiac::cDaGiac(vector<Diem> cacDinh) {
	this->cacDinh = cacDinh;
	int size = cacDinh.size();
	for (int i = 0; i < size - 1; i++) {
		cacCanh[i] = cacDinh[i].doDaiVoi(cacDinh[i + 1]);
	}
	cacCanh[size - 1] = cacDinh[size - 1].doDaiVoi(cacDinh[0]);
}

void cDaGiac::nhap() {
	int n = 0;
	cout << "Nhap so dinh cua da giac: " << endl;
	do {
		cin >> n;
		if (n < 3) cout << "So luong dinh khong hop le! Xin hay nhap lai." << endl;
	} while (n < 3);
	vector<Diem> diemMoi(n);
	do {
		for (Diem& diem : diemMoi) {
			diem.nhap();
		}
		
		cacDinh = diemMoi;
		vector<double> canhMoi(n);
		int size = cacDinh.size();
		for (int i = 0; i < size - 1; i++) {
			canhMoi[i] = cacDinh[i].doDaiVoi(cacDinh[i + 1]);
		}
		canhMoi[size - 1] = cacDinh[size - 1].doDaiVoi(cacDinh[0]);
		cacCanh = canhMoi;
		if (tinhDienTich() <= 0 || ganBang0(tinhDienTich())) cout << "Da giac khong ton tai! Xin hay nhap lai." << endl;
	} while (tinhDienTich() <= 0 || ganBang0(tinhDienTich()));
}

void cDaGiac::xuat() {
	cout << "Cac dinh cua da giac la: " << endl;
	for (Diem dinh : cacDinh) {
		dinh.xuat();
	}
}

string cDaGiac::kiemTraLoai() {
	int soDinh = cacDinh.size();
	switch (soDinh) {
	case 3:
		return "tam giac";
	case 4:
		return "tu giac";
	case 5:
		return "ngu giac";
	case 6:
		return "luc giac";
	case 7:
		return "that giac";
	case 8:
		return "bat giac";
	case 9:
		return "cuu giac";
	case 10:
		return "thap giac";
	default:
		return "da giac";
	}
}

double cDaGiac::tinhChuVi() {
	double chuVi = 0;
	for (double doDai : cacCanh) chuVi += doDai;
	return chuVi;
}

double cDaGiac::tinhDienTich() {
	//Su dung cong thuc shoelace
	int size = cacDinh.size();
	vector<Diem> cacDinhCanXep = cacDinh;
	//Sap xep cac dinh lai de ap dung cong thuc shoelace
	sapXepDiemTheoNguocChieuKimDongHo(cacDinhCanXep);
	double sumLeft = 0, sumRight = 0;
	for (int i = 0; i < size; i++) {
		int next = (i + 1) % size;
		sumLeft += (cacDinhCanXep[i].getx() * cacDinhCanXep[next].gety());
		sumRight += (cacDinhCanXep[i].gety() * cacDinhCanXep[next].getx());
	}
	return (0.5 * abs(sumLeft - sumRight));
}

void cDaGiac::tinhTien(double a, double b) {
	for (Diem &diem : cacDinh) diem.tinhTien(a, b);
}

void cDaGiac::quay(double degree) {
	for (Diem& diem : cacDinh) diem.quay(degree);
}

void cDaGiac::phongToThuNho() {
	double k;
	do {
		cout << "Nhap he so thu nho / phong to cho da giac (He so k phai khac 0): ";
		cin >> k;
		if (k == 0) cout << "He so k khong hop le! Xin hay nhap lai." << endl;
	} while (k == 0);
	for (Diem& diem : cacDinh) {
		diem.setx(diem.getx() * k);
		diem.sety(diem.gety() * k);
	}
}