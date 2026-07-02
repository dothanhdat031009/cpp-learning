#include <iostream>

int x = 1 ;
int N ;
using namespace std;

int main()
{
    cout << "Nhập N : ";
    cin >> N ;
    cout << "\n Tổng các số từ 1 đến N là : ";
    if (N % 2 == 0)
    {
        cout << (N / 2) * (N + 1) ;
    }
    else if (N % 2 == 1)
    {
        cout << ((N + 1) * ((N - 1) / 2)) + ((N + 1) / 2) ;
    }
    return 0;
}