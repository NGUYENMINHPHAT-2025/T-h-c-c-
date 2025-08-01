#include <iostream> // include (lệnh chèn) thư viện iostream (nhập, xuất dữ liệu).
using namespace std; // lệnh dùng không gian tên std, tránh việc std cho mỗi dòng cout VD: (std::cout).

int main () { // Hàm chính khởi động chương trình.
    string ten; // string (chuỗi dữ liệu, dùng để lưu trữ chuỗi ký tự, gồm chữ, số dấu câu và khoảng trắng) --> đang khai báo biến chuỗi có tên là ten
    int tuoi; // int (là kiểu dữ liệu lưu trữ số nguyên) --> đang tạo ô lưu trữ số nguyên cho biến tuoi.
    float diem; // float (là kiểu dữ liệu lưu trữ số thực VD: 9.5, -9.5) --> đang tạo ô lưu trữ số thực cho biến diem.
    bool la_sinh_vien; // bool (là kiểu dữ liệu lưu trữ true/false) --> đang tạo ô lưu trữ giá trị true/false vào biến la_sinh_vien.

    cout <<"Nhap ten: ";  // cout (là đối tượng xuất dữ liệu ra màng hình), << (là toán tử chèn dữ liệu vào luồng xuất), \n (dùng để xuống dòng) --> đang xuất dữ liệu Nhap ten ra màng hình.
    getline (cin, ten); // getline (nguồn_đọc, biến_đích), là Hàm nhập dữ liệu từ bàn phím cho phép lấy toàn bộ văn bản bao gồm khoảng trắn, và chỉ lưu vào biến string.

    cout <<"Nhap tuoi: ";
    cin >> tuoi;  // cin (là đối tượng cho phép nhập dữ liệu từ bàn phím, lưu trữ vào biến) >> (là toán tử trích xuất dữ liệu vào biến) --> đang cho phép biến tuoi nhập từ bàn phím và lưu trữ vào biến.

    cout <<"Nhap diem: ";
    cin >> diem;

    cout <<"Ban co phai la sinh vien khong, (1 = dung, 0 = sai): ";
    cin >> la_sinh_vien;

    cout << "\n----- Thong tin vua nhap -----\n"; // in ra và xuống dòng trước và sau cho dễ nhìn.
    cout << "Ten: " << ten << "\n";     // in ra chữ Ten rồi in ra giá trị của biến ten, sao đó xuống dòng VD: Ten: 20 (20 là giá trị mà bạn nhập từ phím).
    cout << "Tuoi: " << tuoi << "\n";
    cout << "Diem: " << diem << "\n";
    cout << "Tinh trang: " << (la_sinh_vien ? "La sinh vien" : "Khong phai sinh vien") << "\n";  // cú pháp: (điều_kiện ? giá_trị_đúng : giá_trị_sai), nếu ĐK đúng thì chọn cái này, nếu ĐK sai thì chọn cái kia.

    return 0; // lệnh kết thúc trả về giá trị 0 khi thành công, nếu không có lệnh này vẫn chạy được.
}



// string ten;	Lưu họ tên, có thể chứa khoảng trắng, hoặc có thể dùng char ten[] ="...";
// int tên_biến = số nguyên; -> là số nguyên, ví dụ: int tuoi = 20;
// float tên_biến = số thực -> số thực, ví dụ: float diem = 9.5;
// bool tên_biến = true/flase -> là hàm đúng/sai, ví dụ: bool la_sinh_vien = true;
// cout <<"..."; -> là in dữ liệu ra màng hình.
// cin >> ...; -> là dữ liệu nhập từ bàn phím, để người dùng có thể nhập vào.
// getline(nguon_du_lieu, bien_luu_chuoi); -> là nhập văn bản, bao gồm cả dấu cách (space), 
// ví dụ: getline(cin, ten); -> nhập cả họ và tên có khoảng trắng,
// giải thích: (cin) là nguồn dữ liệu nhập vào, còn (ten) trong biến string nên có thể nhập họ và nên kèm khoảng cách.
// (điều_kiện ? giá_trị_đúng : giá_trị_sai)

// Chạy:
// cd "D:\tự học C++"
// g++ Buoi3_BienNhapTuBanPhim.cpp -o Buoi3
// .\Buoi3

