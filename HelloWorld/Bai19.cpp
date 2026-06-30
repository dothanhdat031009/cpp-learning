#include <iostream>
#include <string>

double x ;
double y ;
char symbol ;
using namespace std;

int main()
{
    cout << "Nhập x : ";
    cin >> x ;
    cout << "Nhập y : ";
    cin >> y ; 
    while (symbol != '+' && symbol != '-' && symbol != '*'&& symbol != '/')
    {
    cout << "Vui lòng chọn dấu kí tự toán học (+ - * / ) : ";
    cin >> symbol ;
        switch(symbol)
        {
            case '+':
            cout << x + y ;
                break;
            case '-':
            cout << x - y ;
                break;
            case '*':
            cout << x * y ;
                break;
            case '/':
            cout << x / y ;
        }
        if (symbol == '+' || symbol == '-' || symbol == '*' || symbol == '/')
        {
            break;
        }
        else
        {
        cout << "Bạn nhập sai ký tự toán học !"
             << "\n"
             << "Vui lòng chọn dấu kí tự toán học (+ - * / ) : ";
        cin >> symbol ;
        }
    }   
    return 0;
}