#include <iostream>

int x;

using namespace std;

int main()
{
    cout << "Nhập năm : ";
    cin >> x ;
    if (x % 4 == 0)
    {
        cout << "Bạn nhập năm nhuận";
    }
    else
    {
        cout << "Bạn nhập năm không phải năm nhuận";
    }
    return 0;
}