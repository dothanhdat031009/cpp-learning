#include <iostream>
#include <utility>
#include <string>

int N = 0 ;
int x ,y ;

using namespace std ;
int main()
{
    while (N <= 0)
    {
        cout << "Nhập N : ";
        cin >> N ;
        if (N <= 0)
        {
            cout << "Nhập N với số nguyên dương !"
                 << "\n" ;
        }
    }
    string all = to_string(N) ;
    y = all.length() - 1 ;
    while (x <= y)
    {
        swap(all[x], all[y]);
        x++ ;
        y-- ;
    }
    int n = stoi(all) ;
    cout << "Đảo ngược số là : "
         << n ;
    return 0 ;
}