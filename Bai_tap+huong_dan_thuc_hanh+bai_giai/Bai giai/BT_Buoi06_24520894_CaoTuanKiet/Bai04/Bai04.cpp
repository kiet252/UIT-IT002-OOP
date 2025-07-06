// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "congTyPhanMem.h"
#include <iostream>

int main()
{
    congTyPhanMem congTyPhanMemHoanCau;
    congTyPhanMemHoanCau.nhapDS();
    cout << endl;
    congTyPhanMemHoanCau.xuatDS();
    cout << endl;
    congTyPhanMemHoanCau.xuatDSCacNhanVienLuongThapHonLuongTrungBinh();
    cout << endl;
    congTyPhanMemHoanCau.xuatThongTinNhanVienLuongCaoNhat();
    cout << endl;
    congTyPhanMemHoanCau.xuatThongTinNhanVienLuongThapNhat();
    cout << endl;
    congTyPhanMemHoanCau.xuatThongTinLapTrinhVienLuongCaoNhat();
    cout << endl;
    congTyPhanMemHoanCau.xuatThongTinKiemChungVienLuongThapNhat();
    return 0;
}