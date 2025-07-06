// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include <iostream>
#include "nongTrai.h"

/*
So sánh giữa cách làm ở bài tập 7 tuần 5 và ở bài tập này (không dùng liên kết động và có dùng liên kết động):
Bài tập 7 tuần 5:
- Phải viết từng vòng for khi cần thao tác với từng loại lớp (bo, cuu va de) -> code dài dòng
- Khó mở rộng (Nếu thêm 1 loại lớp thì phải viết thêm code cho lớp nongTrai)
- Không thể duyệt và xử lí chung các lớp mà phải duyệt từng loại lớp để xử lí
Bài tập này:
- Chỉ cần sử dụng 1 vòng for để duyệt qua 1 danh sách các gia súc
- Dễ dàng mở rộng (Nếu thêm 1 loại lớp thì có thể không cần code lại lớp nongTrai)
- Có thể duyệt và xử lí chung các lớp (Ví dụ: phương thức vatSua())
-> Ngắn gọn và dễ quản lý hơn
*/

int main()
{
    nongTrai nongtrai;
    nongtrai.nhapSoLuongMoiLoai();
    cout << endl << "Sau khi nguoi chu di vang, cac gia suc trong nong trai bat dau doi bung." << endl;
    nongtrai.tiengKeuTatCaGiaSuc();
    cout << endl;
    nongtrai.thongKeSoLuongGiaSucTungLoai();
    cout << endl;
    nongtrai.dongLoatSinhCon();
    cout << endl;
    nongtrai.thongKeSoLuongGiaSucTungLoai();
    cout << endl;
    nongtrai.thongKeTongSoLitSuaTatCaGiaSuc();
    return 0;
}