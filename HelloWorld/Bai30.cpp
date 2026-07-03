#include <iostream>

int N, sum ;
int y = 1 ;
using namespace std;

int main()
{
    while (N <= 0)
    {
        cout << "Nhập N : ";
        cin >> N ;
        if (N <= 0)
        {
            cout << "N là số nguyên dương !"
                 << "\n" ;
        }
    }
    for (y = 1 ; y <= N / 2 ; y++)
    {
        if(N % y == 0)
        {
            sum = sum + y ;
        }
    }
    if (N == sum)
    {
        cout << "N là số hoàn hảo !";
    }
    else if (N != sum)
    {
        cout << "N không phải là số hoàn hảo !";
    }
    return 0 ;
}