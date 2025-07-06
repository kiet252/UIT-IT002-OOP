// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include <iostream>
#include "nongTrai.h"

int main()
{
    nongTrai nongtrai;
    nongtrai.nhapSoLuongMoiLoai();
    cout << endl << "Sau khi nguoi chu di vang, cac gia suc trong nong trai bat dau doi bung." << endl;
    nongtrai.tiengKeuTatCaGiaSuc();
    cout << endl;
    nongtrai.thongKeSoLuongGiaSucTungLoai();
    cout << endl;
    nongtrai.dongLoatSinhCon();
    cout << endl;
    nongtrai.thongKeSoLuongGiaSucTungLoai();
    cout << endl;
    nongtrai.thongKeTongSoLitSuaTatCaGiaSuc();
    return 0;
}
