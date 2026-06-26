#include <iostream>

using namespace std;

int main()
{
    int x , y ;
    cout << "Nhập x : ";
    cin >> x ;
    cout << "\n"
    << "Nhập y : ";
    cin >> y ;
    
    double a = x ;
    double b = y ;
    double thuong = a / b ;

    cout << "Thương của x / y là : " << thuong << endl;
    return 0;    
}