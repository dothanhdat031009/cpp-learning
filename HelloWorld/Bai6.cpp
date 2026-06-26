#include <iostream>

double x = 0 ;
double y = 0.038;

using namespace std;

int main() 
{
	cout << "Hãy nhập số tiền Việt bạn đang có để đổi sang tiền USD (đơn vị nghìn) : ";
	cin >> x ;
	double tienDo = x * y;
	cout << "\n" << "Số tiền USD bạn đổi được là : " << tienDo << "USD" << endl;
	return 0;
}