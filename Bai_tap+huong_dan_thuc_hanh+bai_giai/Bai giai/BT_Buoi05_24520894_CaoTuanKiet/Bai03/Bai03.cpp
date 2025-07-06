// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "congTyX.h"
#include <iostream>

int main()
{
    congTyX congTy;
    congTy.nhapThongTinGiaoDichVang();
    congTy.nhapThongTinGiaoDichTienTe();
    cout << endl;
    congTy.xuatThongTinGiaoDichVang();
    congTy.xuatThongTinGiaoDichTienTe();
    cout << endl;
    congTy.timGiaoDichVangThanhTienCaoNhat();
    congTy.timGiaoDichNgoaiTeEuroThanhTienThapNhat();
    congTy.xuatThongTinCacGiaoDichThanhTienTrenMotTy();
    return 0;
}

