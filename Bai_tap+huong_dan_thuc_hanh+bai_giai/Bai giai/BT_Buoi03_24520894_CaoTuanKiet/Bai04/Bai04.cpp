// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "cArray.h"

int main()
{
    int n, x;
    cout << "Nhap so luong so nguyen: " << endl;
    cin >> n;
    cArray arr(n);
    arr.xuat();
    cout << "Nhap so can kiem tra so lan xuat hien: " << endl;
    cin >> x;
    cout << "So lan " << x << " xuat hien trong mang la: " << arr.demLanXuatHien(x) << endl;
    cout << (arr.kiemTraTangDan() ? "Mang da tao la mang tang dan" : "Mang da tao khong la mang tang dan") << endl;
    cout << "So le nho nhat trong mang la (-1 neu khong ton tai) : " << arr.timSoLeNhoNhat() << endl;
    cout << "So nguyen to lon nhat trong mang la (-1 neu khong ton tai): " << arr.timNguyenToLonNhat() << endl;
    arr.sapXepTangDanQuicksort(0, n - 1);
    cout << "Mang sau khi da sap xep tang dan: " << endl;
    arr.xuat();
    arr.sapXepGiamDanQuicksort(0, n - 1);
    cout << "Mang sau khi da sap xep giam dan: " << endl;
    arr.xuat();
}

