#include <iostream>

constexpr double dienTich(double x, double y)
{
    return x * x * 3.14159 + (y / 2) * (y / 2) * 3.14159 ;
}

using namespace std ;

int main()
{
    double x, y;
    char doDai;
    while (doDai != 'r' && doDai != 'd')
    {
        cout << "Bạn nhập bán kính hình tròn ( r ) hay đường kính hình tròn ( d ) : " ;
        cin >> doDai ;
        if(doDai != 'r' && doDai != 'd')
        {
            cout << "Vui lòng chọn đúng giá trị" << "\n";
        }
        if (doDai == 'r')
        {
            cout << "Nhập bán kính hình tròn : ";
            cin >> x ;
            y = 0;
        }
        if (doDai == 'd')
        {
            cout << "Nhập đường kính hình tròn : ";
            cin >> y ;
            x = 0;
        }
    }
    cout << "\n"
         << "Diện tích hình tròn là : " << dienTich(x, y) << endl;
    return 0;    
}