// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include <iostream>

#include "cDanhSachNhanVienSX.h"
int main()
{
    cDanhSachNhanVienSX danhSachNV;
    int n;
    cout << "Nhap so nhan vien san xuat: ";
    cin >> n;
    cin.ignore();
    danhSachNV.nhap(n);
    cout << "Danh sach nhan vien: " << endl;
    danhSachNV.xuat();
    cout << "Nhan vien co luong thap nhat: " << endl;
    danhSachNV.nhanVienLuongThapNhat().xuat();
    cout << "Tong luong ma cong ty phai tra cho cac nhan vien la: " << danhSachNV.tongLuongPhaiTra() << endl;
    cout << "Nhan vien co tuoi cao nhat: " << endl;
    danhSachNV.nhanVienTuoiCaoNhat().xuat();
    cout << "Danh sach nhan vien khi sap xep tang dan theo luong: " << endl;
    danhSachNV.sapXepTangDanTheoLuong();
    danhSachNV.xuat();
    return 0;
}

