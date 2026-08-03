#include <iostream>

using namespace std;

int max(int x, int y, int z){
    if(x > y){
        if(x > z){
            cout << x << endl ;
        }
        else if(x < z){
            cout << z << endl ;
        }
    }
    else if(x < y){
        if(y > z){
            cout << y << endl ;
        }
        else if(y < z){
            cout << z << endl ;
        }
    }
    return 0 ;
}
double max(double x, double y, double z){
    if(x > y){
        if(x > z){
            cout << x;
        }
        else if(x < z){
            cout << z;
        }
    }
    else if(x < y){
        if(y > z){
            cout << y;
        }
        else if(y < z){
            cout << z ;
        }
    }
    return 0 ;
}
int main(){
    max(5, 7, 9) ;
    max(5.7, 5.9, 7.9) ;
    return 0 ;
}