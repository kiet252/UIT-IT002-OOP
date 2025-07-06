// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include <iostream>
#include "cTime.h"

int main()
{
    cTime dongHo;
    cin >> dongHo;
    cout << dongHo;
    int input, chiThi;
    bool dangLap = true;
    while (dangLap) {
        cout << "Hay nhap chi thi cho dong ho: " << endl;
        cout << "1. Tang 1 giay" << endl;
        cout << "2. Giam 1 giay" << endl;
        cout << "3. Tang n giay" << endl;
        cout << "4. Giam n giay" << endl;
        cout << "5. Thoat" << endl;
        do {
            cin >> chiThi;
            switch (chiThi) {
            case 1:
                dongHo++;
                break;
            case 2:
                dongHo--;
                break;
            case 3:
                cout << "Nhap so giay muon tang: " << endl;
                cin >> input;
                dongHo + input;
                break;
            case 4:
                cout << "Nhap so giay muon giam: " << endl;
                cin >> input;
                dongHo - input;
                break;
            case 5:
                dangLap = false;
                break;
            default:
                cout << "Chi thi khong hop le! " << endl;
            }
        } while (chiThi < 1 || chiThi > 5);
        if (dangLap) cout << dongHo;
    }
    return 0;
}