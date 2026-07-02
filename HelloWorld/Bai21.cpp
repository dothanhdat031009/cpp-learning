#include <iostream>

int N = 1 ;
int y ;

using namespace std;

int main() 
{
    cout << "Nhập số N : ";
    cin >> N ;
    cout << "\n Bắt đầu in từ 1 đến N : " << "\n";
    while (y < N)
    {
        if (y != N)
        {
            cout << y ++ << "\n";
        }
        else if (y == N)
        {
            break;
        }
    }
    return 0;
}