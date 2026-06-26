#include <iostream>

double chieuDai, chieuRong ;

using namespace std;

int main()
{
    cout << "Nhập chiều dài hình chữ nhật : ";
    cin >> chieuDai;
    cout << "\n"
         << "Nhập chiều rộng hình chữ nhật : ";
    cin >> chieuRong;
    cout << "\n"
         << "Diện tích hình chữ nhật là : " 
         << chieuDai * chieuRong 
         << "\n"
         << "Chu vi hình chữ nhật là : "
         << (chieuDai + chieuRong) * 2;
    return 0;
}