// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#pragma once
#include "Diem.h"
#include <vector>
#include <string>
#include <algorithm>
class cDaGiac {
private:
	vector<Diem> cacDinh;
	vector<double> cacCanh;
	bool ganBang0(double);
	//De dam bao cong thuc shoelace (Cong thuc tinh dien tinh da thuc) chinh xac,
	//Ta phai sap xep cac diem theo thu tu nguoc chieu kim dong ho
	Diem tinhTrongTam(vector<Diem>);
	bool soSanhGocDuaVaoTrongTam(Diem, Diem, Diem);
	void sapXepDiemTheoNguocChieuKimDongHo(vector<Diem>&);
public:
	cDaGiac();
	cDaGiac(vector<Diem>);
	void nhap();
	void xuat();
	string kiemTraLoai();
	double tinhChuVi();
	double tinhDienTich();
	void tinhTien(double, double);
	void quay(double);
	void phongToThuNho();
};