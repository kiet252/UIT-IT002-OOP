// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26


#include <iostream>
#include "cDaThuc.h"

size_t cDonThuc::laBacThu = 0;
bool cDonThuc::laDonThucDau = true;

int main()
{
    cDaThuc daThuc1, daThuc2, daThucKetQua;
    cout << "Nhap gia tri cho da thuc thu nhat: " << endl;
    cin >> daThuc1;
    cout << "Nhap gia tri cho da thuc thu hai: " << endl;
    cin >> daThuc2;

    cout << "Da thuc thu nhat la: " << endl;
    cout << daThuc1 << endl;
    cout << "Da thuc thu hai la: " << endl;
    cout << daThuc2 << endl;

    cout << "Tong cua hai da thuc la: " << endl;
    cout << daThuc1 + daThuc2 << endl;

    cout << "Hieu cua da thuc thu nhat cho da thuc thu hai la: " << endl;
    cout << daThuc1 - daThuc2 << endl;
    cout << "Hieu cua da thuc thu hai cho da thuc thu nhat la: " << endl;
    cout << daThuc2 - daThuc1 << endl;

    cout << "Tich cua hai da thuc: " << endl;
    cout << daThuc1 * daThuc2 << endl;


    cDaThuc phanDu;
    cDaThuc thuong = daThuc1.chia(daThuc2, phanDu);
    if (thuong.isEmpty()) {
        cout << "Khong the chia da thuc 1 cho da thuc 2!" << endl;
    } else {
        cout << "Thuong cua da thuc 1 cho da thuc 2 la: " << endl;
        cout << thuong << endl;
        cout << "Phan du khi chia da thuc 1 cho da thuc 2 la: " << endl;
        cout << phanDu << endl;
    }
    
    thuong = daThuc2.chia(daThuc1, phanDu);
    if (thuong.isEmpty()) {
        cout << "Khong the chia da thuc 2 cho da thuc 1!" << endl;
    } else {
        cout << "Thuong cua da thuc 2 cho da thuc 1 la: " << endl;
        cout << thuong << endl;
        cout << "Phan du khi chia da thuc 2 cho da thuc 1 la: " << endl;
        cout << phanDu << endl;
    }

    double x;
    cout << "Nhap gia tri cua x: ";
    cin >> x;
    cout << "Gia tri cua da thuc 1 voi x = " << x << " la: " << endl;
    cout << daThuc1.tinhGiaTri(x) << endl;
    cout << "Gia tri cua da thuc 2 voi x = " << x << " la: " << endl;
    cout << daThuc2.tinhGiaTri(x) << endl;
    return 0;
}