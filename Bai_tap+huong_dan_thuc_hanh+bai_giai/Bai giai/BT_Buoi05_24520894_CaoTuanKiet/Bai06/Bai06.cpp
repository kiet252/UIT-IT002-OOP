// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include <iostream>
#include "truongDaiHoc.h"

int main()
{
    truongDaiHoc DHCNTTTPHCM;
    DHCNTTTPHCM.nhapDanhSachSinhVienCaoDang();
    DHCNTTTPHCM.nhapDanhSachSinhVienDaiHoc();
    cout << endl;
    DHCNTTTPHCM.xuatDanhSachSinhVien();
    cout << endl;
    DHCNTTTPHCM.xuatDanhSachSinhVienDuDieuKienTotNghiep();
    cout << endl;
    DHCNTTTPHCM.xuatDanhSachSinhVienKhongDuDieuKienTotNghiep();
    cout << endl;
    DHCNTTTPHCM.xuatSinhVienDiemTrungBinhCaoNhat();
    return 0;
}

