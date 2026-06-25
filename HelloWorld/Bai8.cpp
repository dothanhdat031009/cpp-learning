#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

int main()
{
    SetConsoleOutputCP(65001);
    string ten = "Do Thanh Dat";
    int tuoi = 0;
    double chieuCao = 0;
    cout << "Vui lòng nhập tên của bạn : ";
    getline(cin,ten);
    cout << "\n" << "Vui lòng nhập tuổi của bạn : ";
    cin >> tuoi ;
    cout << "\nVui lòng nhập chiều cao của bạn (đơn vị mét) : ";
    cin >> chieuCao ;
    cout << "\n" << "Tên bạn là : " << ten << endl
         << "Bạn " << tuoi << " tuổi" << endl
         << "Chiều cao bạn là : " << chieuCao << endl;
    return 0;
}