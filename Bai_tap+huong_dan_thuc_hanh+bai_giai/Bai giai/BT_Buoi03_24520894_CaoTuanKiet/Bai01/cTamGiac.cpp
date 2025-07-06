// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "cTamGiac.h"


cTamGiac::cTamGiac() : dinhA(0, 0), dinhB(0, 0), dinhC(0, 0) {
	canhA = 0;
	canhB = 0;
	canhC = 0;
}


cTamGiac::cTamGiac(double dinhAx = 0, double dinhAy = 0, double dinhBx = 0, double dinhBy = 0, double dinhCx = 0, double dinhCy = 0) : dinhA(dinhAx, dinhAy), dinhB(dinhBx, dinhBy), dinhC(dinhCx, dinhCy) {
	canhA = dinhA.doDaiVoi(dinhB);
	canhB = dinhB.doDaiVoi(dinhC);
	canhC = dinhC.doDaiVoi(dinhA);
}

cTamGiac::cTamGiac(cDiem dinhA, cDiem dinhB, cDiem dinhC) {
	this->dinhA = dinhA;
	this->dinhB = dinhB;
	this->dinhC = dinhC;
	canhA = dinhA.doDaiVoi(dinhB);
	canhB = dinhB.doDaiVoi(dinhC);
	canhC = dinhC.doDaiVoi(dinhA);
}

void cTamGiac::nhap() {
	double inpt;
	do {
		cout << "Nhap toa do x cua diem A trong tam giac: " << endl;
		cin >> inpt;
		dinhA.setx(inpt);
		cout << "Nhap toa do y cua diem A trong tam giac: " << endl;
		cin >> inpt;
		dinhA.sety(inpt);
		cout << "Nhap toa do x cua diem B trong tam giac: " << endl;
		cin >> inpt;
		dinhB.setx(inpt);
		cout << "Nhap toa do y cua diem B trong tam giac: " << endl;
		cin >> inpt;
		dinhB.sety(inpt);
		cout << "Nhap toa do x cua diem C trong tam giac: " << endl;
		cin >> inpt;
		dinhC.setx(inpt);
		cout << "Nhap toa do y cua diem C trong tam giac: " << endl;
		cin >> inpt;
		dinhC.sety(inpt);
		canhA = dinhA.doDaiVoi(dinhB);
		canhB = dinhB.doDaiVoi(dinhC);
		canhC = dinhC.doDaiVoi(dinhA);
		if (!(canhA > canhB - canhC && canhB + canhC > canhA)) {
			cout << "Tam giac khong ton tai! Xin hay nhap lai." << endl;
		}
	} while (!(canhA > canhB - canhC && canhB + canhC > canhA));
}

void cTamGiac::xuat() {
	cout << "Toa do dinh A trong tam giac: " << endl;
	dinhA.xuat();
	cout << "Toa do dinh B trong tam giac: " << endl;
	dinhB.xuat();
	cout << "Toa do dinh C trong tam giac: " << endl;
	dinhC.xuat();
}

string cTamGiac::kiemTraloai() {
	string loai;
	//Kiem tra tam giac can
	bool laTamGiacCan = (canhA == canhB || canhB == canhC || canhC == canhA);
	//Kiem tra tam giac vuong
	const double epslon = 1e-9;
	double canhLonNhat = max({ canhA, canhB, canhC }), tongBinh2CanhConLai = 0;
	if (canhLonNhat == canhA) tongBinh2CanhConLai = canhB * canhB + canhC * canhC;
	else if (canhLonNhat == canhB) tongBinh2CanhConLai = canhA * canhA + canhC * canhC;
	else tongBinh2CanhConLai = canhB * canhB + canhA * canhA;
	//fabs tra ve abs cua so thuc
	//Kiem tra xem sai so giua tong binh 2 canh con lai voi binh phuong canh lon nhat co dang ke khong
	//Neu co thi khong phai tam giac vuong (Tuc lon hon epslon)
	bool laTamGiacVuong = (fabs(tongBinh2CanhConLai - canhLonNhat * canhLonNhat) < epslon);
	//Kiem tra cac tam giac
	if (canhA == canhB && canhB == canhC) {
		loai = "deu";
	} else if (laTamGiacCan && laTamGiacVuong) {
		loai = "vuong can";
	} else if (laTamGiacCan) {
		loai = "can";
	} else if (laTamGiacVuong) {
		loai = "vuong";
	} else {
		loai = "thuong";
	}
	return loai;
}

double cTamGiac::tinhChuVi() {
	return canhA + canhB + canhC;
}

double cTamGiac::tinhDienTich() {
	double p = tinhChuVi() / 2;
	return sqrt(p * (p - canhA) * (p - canhB) * (p - canhC));
}

void cTamGiac::tinhTien(double a, double b) {
	dinhA.tinhTien(a, b);
	dinhB.tinhTien(a, b);
	dinhC.tinhTien(a, b);
}

void cTamGiac::quay(double degree) {
	dinhA.quay(degree);
	dinhB.quay(degree);
	dinhC.quay(degree);
}

void cTamGiac::thuNhoPhongTo() {
	double k;
	do {
		cout << "Nhap he so thu nho / phong to (Luu y, he so phai khac 0): ";
		cin >> k;
		if (k == 0) cout << "He so thu nho / phong to khong hop le! Xin hay nhap lai." << endl;
	} while (k == 0);
	dinhA.setx(dinhA.getx() * k); dinhA.sety(dinhA.gety() * k);
	dinhB.setx(dinhB.getx() * k); dinhB.sety(dinhB.gety() * k);
	dinhC.setx(dinhC.getx() * k); dinhC.sety(dinhC.gety() * k);
}