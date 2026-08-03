#include <iostream>

using namespace std ;

void greet(string name, string greeting = "Xin chào"){
    cout << greeting << ", " << name << " !"  ;
}

int main(){
    string your_name;
    cout << "Nhập tên của bạn : ";
    getline(cin, your_name);
    greet(your_name);
    return 0;
}