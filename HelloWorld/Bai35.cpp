// Nội dung được lấy từ bài 25 và tách thành hàm (theo đề bài)
#include <iostream>

using namespace std;

int xac_minh(int N, int x)
{
    while (N <= 0)
    {
        cout << "Nhập N : ";
        cin >> N ;
        if (N <= 0)
        {
            cout << "Bạn nhập sai số N !"
            << "\n"
            << "Vui lòng nhập lại (N là số nguyên dương) !" ;
        }
        while (N % x != 0 && x != N)
        {
            x++ ;
            if (N == 1 || N % x == 0 && x != N)
            {
                cout << "N không phải là số nguyên tố !" ;
                break ;
            }
        }
        if (N == x)
        {
            cout << "N là số nguyên tố" ;
        }
    }
    return 0 ;
}
int main()
{
    xac_minh(0,2) ;
    return 0;
}