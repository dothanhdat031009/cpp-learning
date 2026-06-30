#include <iostream>

double x, y, z;

using namespace std;

int main()
{
    cout << "Nhập cạnh tam giác\n";
    while (x <= 0 || y <=0 || z <= 0)
    {
        if (x <= 0)
        {
        cout << "Cạnh 1 : ";
        cin >> x ;
        }
        else if (x > 0){continue;}
        if (y <= 0)
        {
        cout << "Cạnh 2 : ";
        cin >> y ;
        }
        else if (y > 0){continue;}
        if (z <= 0)
        {
        cout << "Cạnh 3 : ";
        cin >> z ;
        }
        else if (z > 0){continue;}
    }
    if (x == y && x != z || x == z && x != y || x != y && y == z)
    {
        cout << "Đây là tam giác cân !\n";
    }
    if (x == y == z)
    {
        cout << "Đây là tam giác đều !\n";
    }
    if (x * x + y * y == z * z || x * x == y * y + z * z || x * x + z * z == y * y)
    {
        cout << "Đây là tam giác vuông !\n";
    }
    else
    {
        cout << "Đây là tam giác bình thường !";
    }
    return 0;
}