#include <iostream>

int N = 0 ;
int x = 2 ;
using namespace std;

int main()
{
    while (N <= 0)
    {
        cout << "Nhập N : ";
        cin >> N ;
        if (N <= 0)
        {
            cout << "Bạn nhập sai số N !"
            << "\n"
            << "Vui lòng nhập lại (N là số nguyên dương)" ;
        }
    }
    while (N % x != 0 && x != N)
    {
        x++ ;
        if (N == 1 || N % x == 0 && x != N)
        {
            cout << "N không phải là số nguyên tố" ;
            break ;
        }
    }
    if (N == x)
    {
        cout << "N là số nguyên tố" ;
    }
    return 0;
}