#include <iostream>

int x ;
using namespace std;

int main()
{
    cout << "Nhập số bạn muốn in bản cửu chương (số nguyên) : ";
    cin >> x ;
        cout << "\n Bản cửu chương của " << x << " là : \n" 
            << " " << x << " x 1 = " << x * 1 << "\n"
            << " " << x << " x 2 = " << x * 2 << "\n"
            << " " << x << " x 3 = " << x * 3 << "\n"
            << " " << x << " x 4 = " << x * 4 << "\n"
            << " " << x << " x 5 = " << x * 5 << "\n"
            << " " << x << " x 6 = " << x * 6 << "\n"
            << " " << x << " x 7 = " << x * 7 << "\n"
            << " " << x << " x 8 = " << x * 8 << "\n"
            << " " << x << " x 9 = " << x * 9 << "\n"
            << " " << x << " x 10 = " << x * 10 ;
    return 0;
}