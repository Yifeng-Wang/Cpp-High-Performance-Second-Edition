#include <iostream>

void modifyValue(int& value) {
    value *= 2;
}

int main() {
    int num = 10;
    std::cout << "Before modification: " << num << std::endl;
    
    modifyValue(num);
    
    std::cout << "After modification: " << num << std::endl;
    
    return 0;
}