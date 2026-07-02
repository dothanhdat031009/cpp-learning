#include <iostream>

int N = 0 ;
int x = 3 ;
int y = 2 ;
using namespace std;

int main()
{
    while (N <= 0)
    {
        cout << "Nhập N : ";
        cin >> N ;
        cout << "\n"
        if (N <= 0)
        {
            cout << "Bạn nhập sai số N !"
            << "\n"
            << "Vui lòng nhập lại (N là số nguyên dương)" ;
        }
    }
    while (y < N)
    {
        y++ ;
        while (x < y)
        {
            x++ ;
            if (y % x == 0 && x != y)
            {
                cout << y << "\n" ;
                break ;
            }
        }
    }
    
    return 0;
}