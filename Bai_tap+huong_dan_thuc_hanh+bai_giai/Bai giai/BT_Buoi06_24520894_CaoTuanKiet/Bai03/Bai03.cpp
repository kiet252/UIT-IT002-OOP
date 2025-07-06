// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include <iostream>
#include "truongDaiHoc.h"

int main()
{
	truongDaiHoc truongDHCNTTTPHCM;
	truongDHCNTTTPHCM.nhapDanhSachSinhVien();
	cout << endl;
	truongDHCNTTTPHCM.xuatDanhSachSinhVien();
	cout << endl;
	truongDHCNTTTPHCM.xuatDanhSachSinhVienDuDKTotNghiep();
	cout << endl;
	truongDHCNTTTPHCM.xuatDanhSachSinhVienKhongDuDKTotNghiep();
	cout << endl;
	truongDHCNTTTPHCM.xuatThongTinSinhVienDaiHocDiemTrungBinhCaoNhat();
	cout << endl;
	truongDHCNTTTPHCM.xuatThongTinSinhVienCaoDangDiemTrungBinhCaoNhat();
	cout << endl;
	truongDHCNTTTPHCM.xuatSoLuongSinhVienOMoiLoaiKhongDuDKTotNghiep();
	return 0;
}

