// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include <iostream>
#include "congTyBatDongSan.h"

int main()
{
    congTyBatDongSan congTyVAKALAND;
    congTyVAKALAND.nhapDanhSachGiaoDich();
    cout << endl;
    congTyVAKALAND.xuatTongSoLuongTungLoai();
    cout << endl;
    cout << "Trung binh thanh tien cac giao dich can ho chung cu trong cong ty: " << congTyVAKALAND.tinhTrungBinhThanhTienGiaoDichCanHoChungCu() << endl;
    cout << endl;
    congTyVAKALAND.xuatThongTinGiaoDichNhaPhoThanhTienCaoNhat();
    cout << endl;
    congTyVAKALAND.xuatDanhSachGiaoDichThang12Nam2024();
    return 0;
}
