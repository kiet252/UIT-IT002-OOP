// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include <iostream>
#include "CDate.h"

int main()
{
    CDate ntn, ntnBanDau;
    int soNgay;
    cin >> ntn;
    ntnBanDau = ntn;
    cout << "Ngay thang nam ban dau: " << ntn << endl;

    cout << "Ngay thang nam ban dau tang len 1 ngay: " << ++ntn << endl;
    ntn = ntnBanDau;

    cout << "Ngay thang nam ban dau giam xuong 1 ngay: " << --ntn << endl;
    ntn = ntnBanDau;

    cout << "Nhap so ngay ban muon tang / giam: ";
    cin >> soNgay;

    ntn = ntn + soNgay;
    cout << "Ngay thang nam sau khi tang " << soNgay << " ngay la: " << ntn << endl;

    ntn = ntnBanDau;
    ntn = ntn - soNgay;
    cout << "Ngay thang nam sau khi giam " << soNgay << " ngay la: " << ntn << endl;
    cout << "So ngay giua ngay thang nam ban dau va ngay thang nam sau khi giam la: " << ntnBanDau - ntn << endl;

    CDate ntnGuiTien, ntnMuonRut;
    do {
        cout << "Nhap ngay thang nam ban muon gui tien vao ngan hang: " << endl;
        cin >> ntnGuiTien;
        cout << "Nhap ngay thang nam ban muon rut tien ra: " << endl;
        cin >> ntnMuonRut;
        if (ntnMuonRut - ntnGuiTien < 0) cout << "Ngay thang nam rut tien va ngay thang nam gui tien khong hop le! Xin hay nhap lai." << endl;
    } while (ntnMuonRut - ntnGuiTien < 0);

    double phanTramLaiSuat, soTienGui;

    do {
        cout << "Nhap so tien ban muon gui ngan hang (don vi VND): ";
        cin >> soTienGui;
        if (soTienGui < 0) cout << "So tien gui khong hop le! Xin hay nhap lai." << endl;
    } while (soTienGui < 0);

    do {
        cout << "Nhap lai suat phan tram cua ngan hang (don vi % / nam): " << endl;
        cin >> phanTramLaiSuat;
        if (phanTramLaiSuat < 0 || phanTramLaiSuat > 100) cout << "Phan tram lai suat khong hop le! Xin hay nhap lai." << endl;
    } while (phanTramLaiSuat < 0 || phanTramLaiSuat > 100);
    CDate khoangThoiGianGuiTien = ntnMuonRut - ntnGuiTien;
    int tongSoThangGui = khoangThoiGianGuiTien.getThang() + khoangThoiGianGuiTien.getNam() * 12;

    cout << "Khoang thoi gian tu luc gui tien den luc rut tien la: " << khoangThoiGianGuiTien.getThang() << " thang";
    if (khoangThoiGianGuiTien.getNam() > 0) {
        cout << ", " << khoangThoiGianGuiTien.getNam() << " nam.";
    }
    cout << endl << "Theo cong thuc tinh lai kep, so tien cua ban sau khi gui la: " << long long(soTienGui * pow((1 + phanTramLaiSuat / 100), tongSoThangGui / 12)) << " VND";
    return 0;
}
