#include <iostream>

using namespace std;
bool isEven (int n){
    cout << "Nhập n : " ;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << "n là số chẵn !";
    }
    else
    {
        cout << "n là số lẻ !";
    }
    return 0 ;
}
int main()
{
    isEven(0) ;
    return 0 ;
}
