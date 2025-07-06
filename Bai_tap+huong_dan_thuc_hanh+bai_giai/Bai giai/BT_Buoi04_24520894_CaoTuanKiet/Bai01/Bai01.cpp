// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "cSoPhuc.h"

int main()
{
    cSoPhuc sp1, sp2, kq;
    double soThuc;
    cout << "Nhap so phuc 1: " << endl;
    cin >> sp1;
    cout << "Nhap so phuc 2: " << endl;
    cin >> sp2;

    cout << "Nhap them 1 so thuc: ";
    cin >> soThuc;
    //Tong
    kq = sp1 + sp2;
    cout << "Tong 2 so phuc la: " << kq << endl;
    kq = sp1 + soThuc;
    cout << "Tong cua so phuc 1 voi so thuc la: " << kq << endl;
    kq = soThuc + sp2;
    cout << "Tong cua so thuc voi so phuc 2 la: " << kq << endl;
    cout << endl;

    //Hieu
    kq = sp1 - sp2;
    cout << "Hieu so phuc 1 tru so phuc 2 la: " << kq << endl;
    kq = sp2 - sp1;
    cout << "Hieu so phuc 2 tru so phuc 1 la: " << kq << endl;
    kq = sp1 - soThuc;
    cout << "Hieu cua so phuc 1 tru so thuc la: " << kq << endl;
    kq = soThuc - sp2;
    cout << "Hieu cua so thuc tru so phuc 2 la: " << kq << endl;
    cout << endl;

    //Tich
    kq = sp1 * sp2;
    cout << "Tich 2 so phuc la: " << kq << endl;
    kq = sp1 * soThuc;
    cout << "Tich cua so phuc 1 voi so thuc la: " << kq << endl;
    kq = soThuc * sp2;
    cout << "Tich cua so thuc voi so phuc 2 la: " << kq << endl;
    cout << endl;

    //Thuong
    kq = sp1 / sp2;
    cout << "Thuong cua so phuc 1 cho so phuc 2 la: " << kq << endl;
    kq = sp2 / sp1;
    cout << "Thuong cua so phuc 2 cho so phuc 1 la: " << kq << endl;
    kq = sp1 / soThuc;
    cout << "Thuong cua so phuc 1 cho so thuc la: " << kq << endl;
    kq = soThuc / sp2;
    cout << "Thuong cua so thuc cho so phuc 2 la: " << kq << endl;
    cout << endl;

    //so sanh
    cout << (sp1 == sp2 ? "Hai so phuc bang nhau" : "Hai so phuc khong bang nhau") << endl;
    cout << (sp1 != sp2 ? "Hai so phuc khac nhau" : "Hai so phuc khong khac nhau") << endl;
    return 0;
}