// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "Vehicle.h"

int main()
{
    Vehicle xe1("Cao Tuan Kiet", "Hai banh tu 50-175cm3", 159.9, 56000000), xe2("Nguyen Van A", "Bugatti La Voiture Noire", 8000, 478720000000), xe3;
    xe3.nhapThongTin();
    xe1.inThongTin(); xe2.inThongTin(); xe3.inThongTin();
    return 0;
}

