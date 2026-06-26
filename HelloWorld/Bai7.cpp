#include <iostream>

int a = 0;
double b = 0;
char c = 'A';
bool d = true;

using namespace std;

int main()
{
    cout << "Giá trị int bạn muốn là : ";
    cin >> a ;
    cout << "\n" << "Giá trị double bạn muốn là : ";
    cin >> b ;
    cout << "\n" << "Giá trị char bạn đang muốn là : ";
    cin >> c ;
    cout << "\n" << "Giá trị bool bạn muốn là (true/false) : ";
    cin >> d ;
    cout << "\n\n" << "Int bạn nhập là : " << a << "\n"
         << "Kích thước int là :" << sizeof(a) << "\n\n"
         << "Double bạn nhập là : " << b << "\n"
         << "Kích thước double là : " << sizeof(b) << "\n\n" 
         << "Char bạn nhập là : " << c << "\n"
         << "kích thước char là : " << sizeof(c) << "\n\n"
         << "Bool bạn nhập là :" << d << "\n"
         << "Kích thước bool là : " << sizeof(d) ;

}