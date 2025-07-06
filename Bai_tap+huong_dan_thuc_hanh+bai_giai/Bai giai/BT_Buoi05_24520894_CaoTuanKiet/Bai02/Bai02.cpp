// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "thuVienX.h"
#include <iostream>

int main()
{
    thuVienX thuVien(3);
    string nhaXuatBan;
    thuVien.nhapThongTin();
    thuVien.xuatThongTin();
    thuVien.tinhThanhTienTungQuyenSach();
    thuVien.tinhTongThanhTienTungLoaiSach();
    thuVien.tinhTrungBinhCongDonGiaSachThamKhao();
    cout << "Nhap ten nha xuat ban ban can tim sach: " << endl;
    cin.ignore();
    getline(cin, nhaXuatBan);
    thuVien.xuatCacSachGiaoKhoaCuaNhaXuatBan(nhaXuatBan);
    return 0;
}
