// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "danhSachChuyenXe.h"

int main()
{
	danhSachChuyenXe dsChuyenXe;
	dsChuyenXe.nhapThongTin();
	dsChuyenXe.xuatThongTin();
	cout << "Tong doanh thu tat ca chuyen xe noi thanh: " << dsChuyenXe.tongDoanhThuNoiThanh() << endl;
	cout << "Tong doanh thu tat ca chuyen xe ngoai thanh: " << dsChuyenXe.tongDoanhThuNgoaiThanh() << endl;
	cout << "Tong doanh thu tat ca chuyen xe: " << dsChuyenXe.tongDoanhThu() << endl;
	return 0;
}