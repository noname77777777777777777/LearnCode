#include <iostream>
#include <string>

int main() {
    std::string digitNames[10][2] = {
        {"zero", "0"}, {"one", "1"}, {"two", "2"}, {"three", "3"}, {"four", "4"},
        {"five", "5"}, {"six", "6"}, {"seven", "7"}, {"eight", "8"}, {"nine", "9"}
    };
    
    std::cout << digitNames[3][0] << " = " << digitNames[3][1] << std::endl; // in ra "three = 3"
    
    return 0;
}

