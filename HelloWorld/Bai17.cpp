#include <iostream>

float x ;

using namespace std;

int main()
{
    cout << "Nhập điểm : ";
    cin >> x ;
    while (x < 0 | x > 10 )
    {
        cout << "Điểm bạn nhập không đúng !" 
             << "\n"
             << "Nhập điểm : ";
        cin >> x ;
    }
    if (x >= 0 && x <= 10)
    {
        if (x >= 0 && x <= 2.5 )
        {
            cout << "Yếu !";
        }
        if (x > 2.5 && x <= 5 )
        {
            cout << "Trung Bình !";
        }
        if (x > 5 && x <= 7.5 )
        {
            cout << "Khá !";
        }
        if (x > 7.5 && x <= 10 )
        {
            cout << "Giỏi !";
        }
    }
    return 0;
}