/*

    Một số vai trò của con trỏ (pointer):

    + Cấp phát động khi kích thước dữ liệu chỉ được xác định ở runtime. 
    Trong C++, nhiệm vụ này có thể được thay thế bằng cấu trúc Vector có sẵn.
    Kể từ tiêu chuẩn C99, hành động cấp phát tĩnh trong runtime được chấp nhận và sẽ bị coi là phương thức kém linh hoạt và kém an toàn hơn so với cấp phát động.

    + Truyền tham chiếu. 
    Trong C++, nhiệm vụ này được thay thế bởi toán tử '&' được thêm trước đối số nhằm đơn giản hoá sự trình bày mã.

    + Truy cập dữ liệu ngoài chương trình (can thiệp vào dữ liệu của chương trình khác).

*/

#include <stdio.h>

// toán tử truy cập địa chỉ một biến: &
// toán tử truy cập giá trị trực tiếp tại địa chỉ mà con trỏ trỏ tới: * (* là toán tử một ngôi)

void Ptr(int* p) {
    // *p++; // <=> *(p++)
    ++*p; // <=> ++(*p) <=> (*p)++;
}

int main() {
    int a = 24;
    int* p; // khởi tạo con trỏ p kiểu int
    p = &a; // con trỏ p trỏ tới địa chỉ của biến a

    printf("Gia tri cua bien a: %d - Dia chi cua bien a: %p\n", a, &a);
    printf("Gia tri cua con tro p: %p - Gia tri cua dia chi ma con tro p tro toi: %d\n", p, *p);

    Ptr(&a); // con trỏ Ptr trỏ tới địa chỉ của biến a
    printf("Gia tri cua a hien tai: %d\n", a); //25

    Ptr(p); // con trỏ Ptr trỏ tới địa chỉ mà con trỏ p trỏ tới
    printf("Gia tri cua dia chi ma con tro p tro toi hien tai: %d\n", *p);
}