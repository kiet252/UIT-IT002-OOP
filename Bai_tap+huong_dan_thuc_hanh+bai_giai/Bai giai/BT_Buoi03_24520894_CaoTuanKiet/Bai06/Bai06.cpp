// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include <iostream>
#include "cListCandidate.h"

int main()
{
    cListCandidate dsThiSinh;
    dsThiSinh.nhap();
    cout << "Danh sach thi sinh sau khi nhap la:" << endl;
    dsThiSinh.xuat();
    cout << "Cac thi sinh co tong diem tren 15 la: " << endl;
    dsThiSinh.xuatTongDiemLonHon15();
    cout << "Thi sinh co tong diem lon nhat la: " << endl;
    cout << dsThiSinh.timThiSinhTongDiemCaoNhat();
    cout << "Sap xep danh sach thi sinh theo tong diem giam dan la: " << endl;
    dsThiSinh.sapXepTongDiemGiamDan();
    dsThiSinh.xuat();
    return 0;
}
