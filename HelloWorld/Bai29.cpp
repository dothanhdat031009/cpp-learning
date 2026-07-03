#include <iostream>
#include <string>

int N, x, y, z, sum ;
using namespace std;

int main()
{
    while (N <= 0)
    {
        cout << "Nhập N : " ;
        cin >> N ;
        if (N <= 0)
        {
            cout << "N là số nguyên dương !"
                 << "\n" ;  
        }
    }
    string all = to_string(N) ;
    y = all.length() - 1;
    while (x <= y)
    {
        z = stol(all.substr(x,1)) ;
        sum = sum + z;
        x++ ;
    }
    cout << "Tổng các số trong số N bạn đã nhập là : "
         << sum ;
    return 0 ;
}