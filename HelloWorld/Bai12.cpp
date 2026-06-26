#include <iostream>

int x;

using namespace std;

int main()
{
    cout << "Nhập số nguyên : ";
    cin >> x ;
    x = x % 10 ;
    cout << "\n"
         << "Đây là giá trị hàng đơn vị trong số bạn đã nhập : " << x << "\n";
    return 0;
}