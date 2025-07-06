// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include <iostream>
#include <cmath>
using namespace std;


#pragma once
class NgayThangNam
{	
	private:
		short ngay, thang, nam;
		string thuTuongUng();
	public:
		short soNgayTrongThang();
		NgayThangNam();
		NgayThangNam(short, short, short);
		void nhap();
		void xuat();
		void setNgay(short);
		void setThang(short);
		void setNam(short);
		void chuanHoa();
		void thayDoiNgay(short);
		void thayDoiThang(short);
		void thayDoiNam(short);
		short getNgay();
		short getThang();
		short getNam();
		void getThu();
		bool isNamNhuan();
};

