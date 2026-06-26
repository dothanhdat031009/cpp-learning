#include <iostream>

double x = 0 ;
double y = 1 ;
double z = 2 ;

using namespace std;

int main()
{

    cout << "Nhập x : ";
    cin >> x ;
    cout << "\n"
         << "Nhập y : ";
    cin >> y ;
    z = x ;
    x = y ;
    y = z ;
    cout << "Ta đã tráo đổi x và y\n"
         << "Giá trị x hiện tại là : " << x << endl
         << "Giá trị y hiện tại là : " << y << endl;
    return 0;
}

//Đây là TH1 - trường hợp có biến trung gian