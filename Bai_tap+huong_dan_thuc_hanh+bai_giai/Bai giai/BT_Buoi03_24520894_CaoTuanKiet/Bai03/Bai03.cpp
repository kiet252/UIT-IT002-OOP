// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include <iostream>
#include "cDSPhanSo.h"

int main()
{
    cDSPhanSo dsps;
    dsps.nhap();
    dsps.in();
    dsps.rutGon();
    cout << "Danh sach phan so sau khi rut gon: " << endl;
    dsps.in();
    cout << "Tong cac phan so trong danh sach la: " << dsps.tong() << endl;
    cout << "Phan so lon nhat trong danh sach la: " << dsps.PSLonNhat() << endl;
    cout << "Phan so nho nhat trong danh sach la: " << dsps.PSNhoNhat() << endl;
    cout << "Phan so co tu la so nguyen to lon nhat la (-1 neu khong ton tai): " << dsps.PSTuNguyenToLonNhat() << endl;
    cout << "Sap xep danh sach tang dan: " << endl;
    dsps.sapXepTangDan();
    dsps.in();
    cout << "Sap xep danh sach giam dan: " << endl;
    dsps.in();
    dsps.sapXepGiamDan();
    return 0;
}

