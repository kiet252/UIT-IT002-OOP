// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include <iostream>
#include "congTyBatDongSan.h"

int main()
{
    congTyBatDongSan VAKALAND;
    VAKALAND.nhapDanhSachGiaoDichDat();
    VAKALAND.nhapDanhSachGiaoDichNhaPho();
    VAKALAND.nhapDanhSachGiaoDichCanHoChungCu();
    cout << endl;
    VAKALAND.tinhTongSoLuongTungLoai();
    cout << endl;
    VAKALAND.tinhTrungBinhThanhTienGiaoDichCanHoChungCu();
    cout << endl;
    VAKALAND.xuatGiaoDichNhaPhoTriGiaCaoNhat();
    cout << endl;
    VAKALAND.xuatDanhSachGiaoDichThang12Nam2024();
    return 0;
}
