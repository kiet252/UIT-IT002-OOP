// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#pragma once
#include "nhanVienSanXuat.h"
#include "nhanVienVanPhong.h"
#include "vector"
class congTy
{
private:
	vector<nhanVien*> DSNhanVien;
	bool kiemTraTuoiNVTraiLonHon(nhanVien*, nhanVien*);
public:
	congTy(size_t = 0);
	void nhapThongTinDanhSachNhanVien();
	void xuatThongTinDanhSachNhanVien();
	void tinhLuongTungNhanVien();
	void xuatTongLuongCongTyTraCacNhanVien();
	void xuatThongTinNhanVienLuongThapNhat();
	void xuatThongTinNhanVienVanPhongTuoiCaoNhat();
};

