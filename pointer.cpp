#include <iostream>

using namespace std;

int main(){
    string drink = "Trà Sữa Trân Châu Đường Đen" ;
    cout << drink << "\n"
         << &drink << "\n" ;
    string* menu = &drink ;
    cout << menu << "\n"
         << *menu ;
    return 0;
}