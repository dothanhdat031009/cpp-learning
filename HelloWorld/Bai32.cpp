#include <iostream>

using namespace std;

int sum(int x , int y)
{
    cout << "Nhập x : ";
    cin >> x ;
    cout << "Nhập y : ";
    cin >> y ;
    cout << "Tổng x và y là : " ;
    cout << x + y ;
    return 0 ;
}
int main()
{
    sum(0, 0);
    return 0 ;
}