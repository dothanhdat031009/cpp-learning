#include <iostream>

using namespace std;

const int HANG_SO = 1;

int giai_thua(int x) {
    if (x > 0){
        return x * giai_thua(x - 1); 
    }
    else {
        return 1;
    }
}
int main () {
    int n;
    cin >> n;
    int ketqua = giai_thua(n);

    cout << "Result is " << ketqua;

    return 0;
}