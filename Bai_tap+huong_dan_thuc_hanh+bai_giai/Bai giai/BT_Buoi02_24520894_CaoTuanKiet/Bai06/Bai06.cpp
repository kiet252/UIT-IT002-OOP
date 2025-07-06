// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include <iostream>
#include "String.h"

int main() {
    String s, cnt;
    //minh hoa phuong thuc nhap va xuat
    s.nhap();
    s.xuat();

    //minh hoa phuong thuc lay do dai xau
    cout << "Do dai xau ki tu la " << s.len() << endl;

    //minh hoa phuong thuc nghich dao xau
    cout << "Xau nghich dao la: " << endl;
    String rev = s.reverse();
    cnt = s;
    rev.xuat();

    //minh hoa phuong thuc in hoa toan xau
    cout << "In hoa toan xau: " << endl;
    s.toUpper();
    s.xuat();

    //minh hoa phuong thuc in thuong toan xau
    cout << "In thuong toan xau: " << endl;
    s.toLower();
    s.xuat();

    //minh hoa phuong thuc noi xau
    cout << "Noi xau ban dau voi xau nghich dao cua no: " << endl;
    cnt = cnt.noi(rev);
    cnt.xuat();

    return 0;
}
