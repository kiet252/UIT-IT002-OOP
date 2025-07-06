// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include <iostream>
#include "congTy.h"

int main()
{
    congTy congty;
    congty.nhapDanhSachNhanVien();
    cout << endl;
    congty.tinhLuongTungNhanVien();
    cout << endl;
    congty.xuatDanhSachNhanVien();
    cout << endl << "Tong luong ma cong ty phai tra cho nhan vien la: " << congty.tinhTongLuongTraChoCacNhanVien() << endl;
    return 0;
}
