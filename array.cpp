#include <iostream>
#include <string>

using namespace std;

int main()
{
    int cot;
    int hang;

    cout << "Nhap so cot:";
    cin >> cot;

    cout << "Nhap so hang:";
    cin >> hang;

    string array[cot][hang];
    cin.ignore();
    for (int i = 0; i < cot; i++) {
        for (int j = 0; j < hang; j++) {
            string msg = "Nhap array[" + to_string(i) + "][" + to_string(j) + "] = ";
            cout << msg;
            cin >> array[i][j];
        }
    }

    return 0;
}