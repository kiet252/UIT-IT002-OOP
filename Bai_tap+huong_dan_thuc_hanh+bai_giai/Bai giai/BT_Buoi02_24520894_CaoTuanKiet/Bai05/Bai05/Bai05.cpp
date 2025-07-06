// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include <iostream>
#include "NgayThangNam.h"
int main()
{
    NgayThangNam ntn;
    short d = 0, m = 0, y = 0;
    //minh hoa ham nhap xuat
    ntn.nhap();
    ntn.xuat();

    //minh hoa setters
    cout << "Dat lai nam: " << endl;
    cin >> y;
    ntn.setNam(y);
    cout << "Dat lai thang: " << endl;
    cin >> m;
    ntn.setThang(m);
    cout << "Dat lai ngay: " << endl;
    cin >> d;
    ntn.setNgay(d);
    cout << "Ngay thang nam sau khi dat lai la: " << endl;
    ntn.xuat();

    //minh hoa cac ham thay doi
    cout << "Nhap so ngay thay doi (so am de giam, so duong de tang)" << endl;
    cin >> d;
    ntn.thayDoiNgay(d);
    cout << "Nhap so thang thay doi (so am de giam, so duong de tang)" << endl;
    cin >> m;
    ntn.thayDoiThang(m);
    cout << "Nhap so Nam thay doi (so am de giam, so duong de tang)" << endl;
    cin >> y;
    ntn.thayDoiNam(y);
    cout << "Ngay, thang va nam sau khi thay doi la: " << endl;
    ntn.xuat();
    ntn.chuanHoa();
    cout << "Sau khi chuan hoa: " << endl;
    ntn.xuat();
    //lay thu trong tuan
    ntn.getThu();
    //kiem tra nam nhuan
    if (ntn.isNamNhuan()) {
        cout << "Nam hien tai la nam nhuan!" << endl;
    }
    else {
        cout << "Nam hien tai khong la nam nhuan!" << endl;
    }
    return 0;
}
