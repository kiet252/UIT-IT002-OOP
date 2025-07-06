// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "chuyenXe.h"
#pragma once
class chuyenXeNoiThanh : public chuyenXe
{
private:
	unsigned int soTuyen, soKmDiDuoc;
public:
	chuyenXeNoiThanh(string = "", string = "", string = "", unsigned long doanhThu = 0, unsigned int = 0, unsigned int = 0);
	void nhapThongTin();
	void xuatThongTin();
};