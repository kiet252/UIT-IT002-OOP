// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26
#include "cDaGiac.h";



int main()
{
    double x, y, degree;
    cDaGiac dagiac;
    dagiac.nhap();
    dagiac.xuat();
    cout << "Da giac nay la " << dagiac.kiemTraLoai() << endl;
    cout << "Tinh tien da giac theo vecto: " << endl;
    cout << "Nhap x cua vector: ";
    cin >> x;
    cout << "Nhap y cua vector: ";
    cin >> y;
    dagiac.tinhTien(x, y);
    dagiac.xuat();
    cout << "Quay da giac goc: ";
    cin >> degree;
    dagiac.quay(degree);
    dagiac.xuat();
    dagiac.phongToThuNho();
    dagiac.xuat();
    cout << "Chu vi da giac la: " << dagiac.tinhChuVi() << endl;
    cout << "Dien tich cua da giac la: " << dagiac.tinhDienTich() << endl;
    return 0;
}