#include <iostream>

using namespace std;

int x = 0, y = 0, z = 0, o = 0 ;

int main(){
    cout << "Bạn muốn tìm ƯCLN và BCNN của bao nhiêu số nguyên dương ?" << endl;
    cin >> x ;
    int num[x];
    for(int i = 1; i <= x; i++){
        cout << "Nhập số" << i << ":" ;
        cin >> num[i - 1];
    }
    int max = num[0] ;
    for(int i; i < x; i++){
        if(max > num[i + 1]){
            max = num[i]; 
        }
        else if(max < num[i + 1]){
            max = num[i + 1];
        }
    }
    for(int k = 1; k <= max; k++){
        for(int i = 0; i < x; i++){
            if(num[i] % k == 0){
                if(i == x - 1){
                    z = k;
                }
            }
            else if(num[i] % k != 0){
                break;
            }
        }
    }
    cout << "Ước chung lớn nhất của dãy số nguyên dương bạn nhập là : " << z << endl;
    for(int k = max;k > 0; k++){
        if(o == 0){
            for(int i = 0; i < x; i++){
                if(k % num[i] == 0){
                    if(i == x - 1){
                        o = k;
                    }
                }
                else if(k % num[i] != 0){
                    break;
                }
            }
        }
        else if(o != 0){
            break;
        }
    }
    cout << "Bội chung nhỏ nhất của dãy số nguyên dương bạn nhập là : " << o ;
    return 0 ;
}