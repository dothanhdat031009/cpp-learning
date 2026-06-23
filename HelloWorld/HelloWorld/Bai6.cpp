#include <iostream>
#include <Windows.h>

using namespace std;
double x = 0 ;
double y = 0.038;

int main() 
{
	SetConsoleOutputCP(65001);
	cout << "Hãy nhập số tiền Việt bạn đang có để đổi sang tiền USD (đơn vị nghìn) : ";
	cin >> x ;
	double tienDo = x * y;
	cout << "\n" << "Số tiền USD bạn đổi được là : " << tienDo << "USD" << endl;
	return 0;
}