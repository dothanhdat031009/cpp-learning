#include <iostream>
#include <algorithm>

double x , y ;

using namespace std;

int main()
{
    cout << "Nhập x : ";
    cin >> x ;
    cout << "\n"
         << "Nhập y : ";
    cin >> y ;
    swap ( x , y);
    cout << "Ta đã swap 2 số x và y với nhau" << "\n"
         << "Số x hiện tại là : " << x << "\n"
         << "Số y hiện tại là : " << y << "\n";
    return 0;
}
         