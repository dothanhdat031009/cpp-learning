#include <iostream>

constexpr int cube(int a) { 
    return a * a * a; 
} 

int main() {
    float gk[cube(3)]; 
    
    std::cout << "Array size is: " << sizeof(gk) / sizeof(float);
    return 0;
}