#include <iostream>

int N = 1 ;
int x = 1 ;
int all = 1 ;
using namespace std;

int main()
{
    cout << "Nhập N : ";
    cin >> N ;
    cout << "Giao thừa của N (N!) là : ";
    while (x <= N)
    {
        if (N == 0)
        {
            all = 1 ;
            break ;
        }
        else if (x <= N)
        {
            all = all * x++ ;
        }
    }
    cout << all ;
    return 0;
}