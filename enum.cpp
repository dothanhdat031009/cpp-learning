#include <iostream>

using namespace std;

enum Level{ LOW = 99, MEDIUM, HIGH };

int main(){
    enum Level myVar = MEDIUM;
    cout << myVar;
    return 0;
}