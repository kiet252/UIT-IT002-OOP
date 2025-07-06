// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "cDaThuc.h"

bool cDaThuc::bacBeHon(cDonThuc donThuc1, cDonThuc donThuc2) {
	return donThuc1.getBac() < donThuc2.getBac();
}

cDonThuc cDaThuc::layDonThucBacLonNhat() {
	if (danhSachDonThuc.empty()) return cDonThuc(0, 0);
	int size = danhSachDonThuc.size();
	for (int i = size - 1; i >= 0; i--) {
		if (danhSachDonThuc[i].getHeSo() != 0) return danhSachDonThuc[i];
	}
	return cDonThuc(0, 0);
}

cDaThuc::cDaThuc(size_t bac) {
	danhSachDonThuc.resize(bac + 1);
}

cDaThuc::cDaThuc(vector<cDonThuc> danhSachDonThuc) {
	this->danhSachDonThuc = danhSachDonThuc;
}

bool cDaThuc::isEmpty() {
	return (danhSachDonThuc.size() == 1 && danhSachDonThuc[0].getHeSo() == 0);
}

void cDaThuc::ketHopDonThucTrungLap() {
	map<int, double> tongHeSoMoiBac;

	int maxBac = 0;
	for (cDonThuc donThuc : danhSachDonThuc) {
		int bacDangXet = donThuc.getBac();
		tongHeSoMoiBac[bacDangXet] += donThuc.getHeSo();
		if (bacDangXet > maxBac) maxBac = bacDangXet;
	}

	danhSachDonThuc.clear();
	danhSachDonThuc.resize(maxBac + 1);

	for (int i = 0; i <= maxBac; i++) {
		danhSachDonThuc[i].setBac(i);
		danhSachDonThuc[i].setHeSo(tongHeSoMoiBac[i]);
	}

	sort(danhSachDonThuc.begin(), danhSachDonThuc.end(), bacBeHon);
}

istream& operator>>(istream& is, cDaThuc& daThuc) {
	int n;
	do {
		cout << "Nhap bac cua da thuc: ";
		is >> n;
		if (n < 0) cout << "Bac da thuc khong hop le! Xin hay nhap lai." << endl;
	} while (n < 0);
	cDonThuc::laBacThu = 0;
	daThuc.danhSachDonThuc.resize(n + 1);
	
	for (int i = 0; i <= n; i++) {
		cDonThuc newDonThuc(0, i);
		is >> newDonThuc;
		daThuc.danhSachDonThuc[i] = newDonThuc;
	}
	return is;
}

ostream& operator<<(ostream& os, cDaThuc daThuc) {
	int size = daThuc.danhSachDonThuc.size();
	for (int i = 0; i < size; i++) {
		os << daThuc.danhSachDonThuc[i];
	}
	cDonThuc::laDonThucDau = true;
	return os;
}

cDaThuc cDaThuc::operator+(cDaThuc daThucKhac) {
	int minSize = min(daThucKhac.danhSachDonThuc.size(), danhSachDonThuc.size());

	if (daThucKhac.danhSachDonThuc.size() == minSize) {
		vector<cDonThuc> dup = danhSachDonThuc;
		for (int i = 0; i < minSize; i++) {
			dup[i] = dup[i] + daThucKhac.danhSachDonThuc[i];
		}
		return cDaThuc(dup);
	} else {
		for (int i = 0; i < minSize; i++) {
			daThucKhac.danhSachDonThuc[i] = danhSachDonThuc[i] + daThucKhac.danhSachDonThuc[i];
		}
		return daThucKhac;
	}
}

cDaThuc cDaThuc::operator-(cDaThuc daThucKhac) {
	int otherSize = daThucKhac.danhSachDonThuc.size();
	int mySize = danhSachDonThuc.size();
	int minSize = min(otherSize, mySize);

	if (otherSize == minSize) {
		vector<cDonThuc> dup = danhSachDonThuc;
		for (int i = 0; i < minSize; i++) {
			dup[i] = dup[i] - daThucKhac.danhSachDonThuc[i];
		}
		return cDaThuc(dup);
	} else {
		for (int i = 0; i < minSize; i++) {
			daThucKhac.danhSachDonThuc[i] = danhSachDonThuc[i] - daThucKhac.danhSachDonThuc[i];
		}
		for (int i = minSize; i < otherSize; i++) {
			daThucKhac.danhSachDonThuc[i] = cDonThuc(0, i) - daThucKhac.danhSachDonThuc[i];
		}
		return daThucKhac;
	}
}

cDaThuc cDaThuc::operator*(cDaThuc daThucKhac) {
	cDaThuc ketQua;
	for (cDonThuc donThuc1 : danhSachDonThuc) {
		for (cDonThuc donThuc2 : daThucKhac.danhSachDonThuc) {
			ketQua.danhSachDonThuc.push_back(donThuc1 * donThuc2);
		}
	}

	ketQua.ketHopDonThucTrungLap();
	return ketQua;
}

cDaThuc cDaThuc::chia(cDaThuc daThucBiChia, cDaThuc& phanDuTraVe) {
	cDaThuc thuong; cDaThuc phanDuHienTai = *this;
	while (!phanDuHienTai.danhSachDonThuc.empty() && phanDuHienTai.layDonThucBacLonNhat().getBac() >= daThucBiChia.layDonThucBacLonNhat().getBac()) {
		cDonThuc donThucLonNhatCuaPhanDu = phanDuHienTai.layDonThucBacLonNhat();
		cDonThuc donThucLonNhatCuaDaThucBiChia = daThucBiChia.layDonThucBacLonNhat();

		cDonThuc donThucMoi = donThucLonNhatCuaPhanDu / donThucLonNhatCuaDaThucBiChia;
		thuong.danhSachDonThuc.push_back(donThucMoi);

		cDaThuc tam;
		for (cDonThuc dt : daThucBiChia.danhSachDonThuc) {
			tam.danhSachDonThuc.push_back(donThucMoi * dt);
		}
		tam.ketHopDonThucTrungLap();
		phanDuHienTai = phanDuHienTai - tam;
		phanDuHienTai.ketHopDonThucTrungLap();
	}

	phanDuTraVe = phanDuHienTai;
	return thuong;
}

double cDaThuc::tinhGiaTri(double x) {
	double tongGiaTri = 0;
	for (cDonThuc dt : danhSachDonThuc) {
		tongGiaTri += dt.giaTri(x);
	}
	return tongGiaTri;
}