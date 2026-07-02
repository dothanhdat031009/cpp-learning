#include <iostream>

int N = 0 ;
int y = 2 ;
using namespace std;

int main()
{
    while (N <= 0)
    {
        cout << "Nhập N : ";
        cin >> N ;
        cout << "\n";
        if (N <= 0)
        {
            cout << "Bạn nhập sai số N !"
            << "\n"
            << "Vui lòng nhập lại (N là số nguyên dương)" ;
        }
    }
    while (y < N)
    {
        int x = 2 ;
        while (x <= y)
        {
            if (y % x == 0 && x != y)
            {
                break ;
            }
            else if (x == y)
            {
                cout << y
                << "\n";
                break;
            }
            x++ ;
        }
        y++ ;   
    }
    return 0;
}