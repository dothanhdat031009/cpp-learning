#include <iostream>
#include <cmath>

using namespace std ;

int power(double x, double y)
{
    cout << "Nhập số cần lũy thừa : ";
    cin >> x ;
    cout << "Nhập số lũy thừa của số vừa nhập : ";
    cin >> y ;
    cout << "Lũy thừa số của bạn là : "
         << pow(x,y) ;
         return 0;
}
int main()
{
    power(0,0);
    return 0 ;
}