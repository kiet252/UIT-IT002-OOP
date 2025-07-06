// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "congTy.h"

#include <iostream>

int main()
{
    congTy congty;
    congty.nhapThongTinDanhSachNhanVien();
    cout << endl;
    congty.tinhLuongTungNhanVien();
    cout << endl;
    congty.xuatThongTinDanhSachNhanVien();
    cout << endl;
    congty.xuatTongLuongCongTyTraCacNhanVien();
    cout << endl;
    congty.xuatThongTinNhanVienLuongThapNhat();
    cout << endl;
    congty.xuatThongTinNhanVienVanPhongTuoiCaoNhat();
    return 0;
}
