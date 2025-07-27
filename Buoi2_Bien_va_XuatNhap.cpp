#include <iostream> // Thư viện nhập xuất cơ bản
using namespace std;  // Sử dụng không gian tên std để tránh phải viết std:: trước mỗi hàm

int main() {  // Hàm chính của chương trình
    int tuoi = 18;
    float diem = 9.5;
    char lop = 'A';
    bool sinh_vien = true;

    cout << "Tuoi: " << tuoi << "\n";
    cout << "Diem: " << diem << "\n";
    cout << "Lop: " << lop << "\n";
    // Sử dụng boolalpha để in giá trị bool dưới dạng chữ true/false
    cout << boolalpha; 
    cout << "Sinh_vien: " << sinh_vien << "\n";

    return 0; // Trả về 0 để báo hiệu chương trình kết thúc thành công
}


// Các kiểu dữ liệu cơ bản trong C++
// | Kiểu  | Ý nghĩa               | Ví dụ        |
// | ----- | --------------------- | ------------ |
// | int   | Số nguyên             | 10, -5, 2024 |
// | float | Số thực (có dấu phẩy) | 3.14, -2.5   |
// | char  | Ký tự                 | 'A', 'p'     |
// | bool  | Đúng/Sai              | true, false  |
//  boolalpha để in giá trị bool dưới dạng chữ true/false

// Lưu ý:
// Khi bạn đã bật boolalpha một lần, nó giữ nguyên hiệu lực cho đến khi chương trình kết thúc hoặc bạn dùng:
// cout << noboolalpha; // Để trở lại kiểu số (1/0)

// Các phép toán cơ bản trong C++
// Loại	Ký hiệu	Ví dụ
// Gán	=	a = 5;
// Cộng	+	a + b
// Trừ	-	a - b
// Nhân	*	a * b
// Chia	/	a / b
// So sánh	==, !=, >,<	a == b, a > b