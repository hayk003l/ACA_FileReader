#include <iostream>
#include <fstream>
enum DataType {
        INT, // 0
        DOUBLE, // 1 
        CHAR, // 2
        FLOAT, // 3
        STRING // 4
    };
union Data {
    int integerType;
    double doubleType;
    char charType[50];
    float floatType;
};

int main() {
    
    std::cout << sizeof(DataType) << std::endl;
    
    return 0;
    
}