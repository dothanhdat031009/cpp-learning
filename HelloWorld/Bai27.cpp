#include <iostream>

int x , sum ;
int y = 1 ;
int N ;
using namespace std;

int main()
{
    while (N <= 0)
    {
        cout << "Nhập N : ";
        cin >> N ;
        if (N <= 0)
        {
            cout << "N phải là số nguyên dương !"
                 << "\n";
        }
    }
    while (y < N)
    {
        cout << sum
             << "\n";
        sum = x + y ;
        y = sum ;
        x = sum - x ;
    }
    return 0 ;
}