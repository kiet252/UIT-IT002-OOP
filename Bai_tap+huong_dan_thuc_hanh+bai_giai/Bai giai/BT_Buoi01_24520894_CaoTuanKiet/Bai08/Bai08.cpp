// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include <iostream>
using namespace std;

struct ngayThangNam {
	int ngay, thang, nam;
};


void nhapNTN(ngayThangNam& ntn) {
	cout << "Nhap ngay: ";
	cin >> ntn.ngay;
	cout << "Nhap thang: ";
	cin >> ntn.thang;
	cout << "Nhap nam: ";
	cin >> ntn.nam;
}

string thuTuongUng(int thu) {
	switch (thu) {
		case 0:
			return "thu Bay";
		case 1:
			return "Chu Nhat";
		case 2:
			return "thu Hai";
		case 3:
			return "thu Ba";
		case 4:
			return "thu Tu";
		case 5:
			return "thu Nam";
		case 6:
			return "thu Sau";
		default:
			return "";
	}


}

bool namNhuan(int nam) {
	return (nam % 400 == 0) || (nam % 4 == 0 && nam % 100 != 0);
}

int soNgayTrongThang(int thang, int nam) {
	switch (thang) {
	case 4:
	case 6:
	case 9:
	case 11:
		return 30;
	case 2:
		if (namNhuan(nam)) return 29;
		else return 28;
	default:
		return 31;
	}
}

bool hopLe(ngayThangNam ntn) {
	if (ntn.nam < 1 || ntn.thang < 1 || ntn.ngay < 1 || ntn.thang > 12 || ntn.ngay > soNgayTrongThang(ntn.thang, ntn.nam)) return false;
	return true;
}

int  ZellersCongruence(ngayThangNam ntn) {
	if (ntn.thang < 3) {
		ntn.thang += 12;
		ntn.nam--;
	}

	int A = ntn.nam % 100;
	int B = ntn.nam / 100;
	int thu = (ntn.ngay + 13 * (ntn.thang + 1) / 5 + A + A / 4 + B / 4 + 5 * B) % 7;
	return thu;
}


int main() {
	ngayThangNam ntn;
	do {
		nhapNTN(ntn);
		if (!hopLe(ntn)) {
			cout << "Ngay thang nam nhap vao chua hop le! Hay nhap lai! \n";
		}
	} while (!hopLe(ntn));
	int thu = ZellersCongruence(ntn);
	cout << "Thu trong tuan tuong ung voi ngay " << ntn.ngay << " thang " << ntn.thang << " nam " << ntn.nam << " la " << thuTuongUng(thu) << "\n";
	return 0;
}