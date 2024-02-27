#include <stdio.h>

int main()
{
    typedef int soNguyen; // typedef khai bao bi danh
    typedef double soThuc;
    typedef unsigned int soNguyenDuong;

    soNguyen x = 1;

    printf("x = %d\n", x);
    int SizekieuNguyen = sizeof(soNguyen);
    int SizekieuThuc = sizeof(soThuc);
    int SizekieuNguyenDuong = sizeof(soNguyenDuong);
    printf("%d byte\n%d byte\n%d byte\n", SizekieuNguyen, SizekieuThuc, SizekieuNguyenDuong);
    return 0;
}