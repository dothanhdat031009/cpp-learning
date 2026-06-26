#include <iostream>

double x, y, z;

using namespace std;

int main()
{
    cout << "Nhập x : ";
    cin >> x ;
    cout << "Nhập y : ";
    cin >> y ;
    cout << "Nhập z : ";
    cin >> z ;
    cout << "Trong 3 số x, y, z bạn nhập, số ";
    if (x > y)
    {
        if (x > z)
        {
            cout << x ;
        }
        if (x < z)
        {
            cout << z ;
        }
    }
    if (x < y)
    {
        if (y > z)
        {
            cout << y ;
        }
        if (y < z)
        {
            cout << z ;
        }
    }
    cout << " là số lớn nhất !";
    return 0;
}