#include <iostream>

double x;

using namespace std;

int main()
{
    cout << "Nhập số x : ";
    cin >> x ;
    cout << "\n";
    if (x > 0)
    {
        cout << "Bạn nhập số x > 0";
    }
    if (x < 0)
    {
        cout << "Bạn nhập số x < 0";
    }
    if (x == 0)
    {
        cout << "Bạn nhập số x = 0";
    }
    return 0;
}