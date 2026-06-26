#include <iostream>

int x ;

using namespace std;

int main()
{
    cout << "Nhập số x : ";
    cin >> x ;

    if (x % 2 == 0)
    {
        cout << "Đây là số chẵn";
        return 0;
    }
    else
    {
        cout << "Đây là số lẻ";
        return 0;
    }
}