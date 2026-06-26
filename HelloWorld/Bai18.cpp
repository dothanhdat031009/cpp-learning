#include <iostream>

double a, b, x ;

using namespace std;

int main()
{
    cout << "Giải phương trình bậc nhất ax + b = 0"
         << "\n"
         << "Nhập a : ";
    cin >> a ;
    cout << "Nhập b : ";
    cin >> b ;
    x = (- b) / a ;
    cout << "Giá trị x là : "
         << x ;
    return 0; 
}