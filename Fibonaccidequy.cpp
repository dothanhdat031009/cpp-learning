#include <iostream>

using namespace std;

int N ;
int Fibonacci(int n){
    if (n < N){
        return n + Fibonacci(n + 1);
    }
    else {
        return N ;
    }
}
int main(){
    cout << "Nhập n (số nguyên dương) : ";
    cin >> N ;
    while (N <= 0 ){
        cout << "Bạn nhập sai n ! " << "\n"
             << "Nhập n (số nguyên dương) : ";
        cin >> N ;
    }
    int answer = Fibonacci(0);
    cout << "Fibonacci với n = " << N << " có tổng là : " << answer;
    return 0;
}