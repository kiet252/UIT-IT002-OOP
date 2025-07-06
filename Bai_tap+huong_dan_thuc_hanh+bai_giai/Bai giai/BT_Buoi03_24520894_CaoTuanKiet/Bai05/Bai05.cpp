// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include <iostream>
#include "cDaThuc.h"

bool cDonThuc::firstDonThuc = true;

int main()
{

    int x;
    cDaThuc daThuc1, daThuc2(5);
    cin >> daThuc1 >> daThuc2;
    cDaThuc ans;
    cout << "Da thuc 1 la: " << endl;
    cout << daThuc1 << endl;
    cout << "Da thuc 2 la: " << endl;
    cout << daThuc2 << endl;
    cout << "Tong hai don thuc: ";
    ans = daThuc1 + daThuc2;
    cout << ans << endl;
    cout << "Hieu hai don thuc: ";
    ans = daThuc1 - daThuc2;
    cout << ans << endl;
    cout << "Nhap gia tri x cho 2 don thuc: ";
    cin >> x;
    cout << "Da thuc 1 co gia tri khi x = " << x << " la: " << daThuc1.tinhGiaTri(x) << endl;
    cout << "Da thuc 2 co gia tri khi x = " << x << " la: " << daThuc2.tinhGiaTri(x) << endl;
    return 0;
}
