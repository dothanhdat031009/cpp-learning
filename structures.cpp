#include <iostream>
#include <string>

using namespace std;

int main(){
    int x ;
    string y ;
    cout << "Bạn muốn nhập bao nhiêu thông tin (số nguyên dương): ";
    cin >> x ;
    getline (cin, y);
    struct info {
        string ten ;
        string CCCD ;
        string tuoi ;
        string sdt ;
    };
    info Person[x] ;

    for (int i = 0 ; i < x ; i++){
        cout << "Vui lòng nhập tên đầy đủ người "    << i + 1 << " : ";
        getline (cin, Person[i].ten);
        cout << "Vui lòng nhập số CCCD người "       << i + 1 << " : ";
        getline (cin, Person[i].CCCD); 
        cout << "Vui lòng nhập tuổi người "          << i + 1 << " : ";
        getline(cin, Person[i].tuoi);
        cout << "Vui lòng nhập Số điện thoại người " << i + 1 << " : ";
        getline(cin, Person[i].sdt);
    }
    for (int i = 0 ; i < x ; i++){
        cout << "Người "           << i + 1 << " : " << "\n\t"
             << "Tên đầy đủ : "    << Person[i].ten  << "\n\t"
             << "Tuổi : "          << Person[i].tuoi << "\n\t"
             << "CCCD : "          << Person[i].CCCD << "\n\t"
             << "Số điện thoại : " << Person[i].sdt  << "\n";
    }
    cout << "Đây là các thông tin bạn đã nhập !" ;
    return 0 ;
}