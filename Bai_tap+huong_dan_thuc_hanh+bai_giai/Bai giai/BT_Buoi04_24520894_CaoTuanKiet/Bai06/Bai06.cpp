// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include <iostream>
#include "CMatrix.h"
#include "CVector.h"
int main()
{
    CMatrix mt1, mt2, mtkq;
    cout << "Nhap du lieu cho ma tran 1: " << endl;
    cin >> mt1;
    cout << "Nhap du lieu cho ma tran 2: " << endl;
    cin >> mt2;
    cout << "Gia tri cua ma tran 1: " << endl << mt1;
    cout << "Gia tri cua ma tran 2: " << endl << mt2;

    mtkq = mt1 + mt2;
    if (mtkq.isEmpty()) cout << "Khong the cong ma tran 1 cho ma tran 2!" << endl;
    else cout << "Tong cua ma tran 1 voi ma tran 2 la: " << endl << mtkq;

    mtkq = mt1 - mt2;
    if (mtkq.isEmpty()) cout << "Khong the tru ma tran 1 cho ma tran 2!" << endl;
    else cout << "Hieu cua ma tran 1 cho ma tran 2 la: " << endl << mtkq;

    mtkq = mt2 - mt1;
    if (mtkq.isEmpty()) cout << "Khong the tru ma tran 2 cho ma tran 1!" << endl;
    else cout << "Hieu cua ma tran 2 cho ma tran 1 la: " << endl << mtkq;

    mtkq = mt1 * mt2;
    if (mtkq.isEmpty()) cout << "Khong the nhan ma tran 1 voi ma tran 2!" << endl;
    else cout << "Tich cua ma tran 1 voi ma tran 2 la: " << endl << mtkq;

    mtkq = mt2 * mt1;
    if (mtkq.isEmpty()) cout << "Khong the nhan ma tran 2 voi ma tran 1!" << endl;
    else cout << "Tich cua ma tran 2 voi ma tran 1 la: " << endl << mtkq;

    mtkq = mt1 / mt2;
    if (mtkq.isEmpty()) cout << "Khong the chia ma tran 1 voi ma tran 2!" << endl;
    else cout << "Thuong cua ma tran 1 cho ma tran 2 la: " << endl << mtkq;

    mtkq = mt2 / mt1;
    if (mtkq.isEmpty()) cout << "Khong the chia ma tran 2 voi ma tran 1!" << endl;
    else cout << "Thuong cua ma tran 2 cho ma tran 1 la: " << endl << mtkq;

    CVector vt1;
    cout << "Nhap vecto: " << endl;
    cin >> vt1;
    
    mtkq = mt1 * vt1;
    if (mtkq.isEmpty()) cout << "Khong the nhan ma tran 1 voi vecto!" << endl;
    else cout << "Tich cua ma tran 1 voi vecto la: " << endl << mtkq;

    mtkq = mt2 * vt1;
    if (mtkq.isEmpty()) cout << "Khong the nhan ma tran 2 voi vecto!" << endl;
    else cout << "Tich cua ma tran 2 voi vecto la: " << endl << mtkq;

    mtkq = vt1 * mt1;
    if (mtkq.isEmpty()) cout << "Khong the nhan vecto voi ma tran 1!" << endl;
    else cout << "Tich cua vecto voi ma tran 1 la: " << endl << mtkq;

    mtkq = vt1 * mt2;
    if (mtkq.isEmpty()) cout << "Khong the nhan vecto voi ma tran 2!" << endl;
    else cout << "Tich cua vecto voi ma tran 2 la: " << endl << mtkq;
    return 0;
}