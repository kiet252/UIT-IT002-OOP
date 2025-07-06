// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "sinhVienCaoDang.h"
#include "sinhVienDaiHoc.h"
#include <vector>
using namespace std;
class truongDaiHoc
{
private:
	vector<sinhVien*> danhSachSinhVien;
public:
	truongDaiHoc(size_t = 0);
	void nhapDanhSachSinhVien();
	void xuatDanhSachSinhVien();
	void xuatDanhSachSinhVienDuDKTotNghiep();
	void xuatDanhSachSinhVienKhongDuDKTotNghiep();
	void xuatThongTinSinhVienDaiHocDiemTrungBinhCaoNhat();
	void xuatThongTinSinhVienCaoDangDiemTrungBinhCaoNhat();
	void xuatSoLuongSinhVienOMoiLoaiKhongDuDKTotNghiep();
};

