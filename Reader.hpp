#ifndef __FILEREADER__
#define __FILEREADER__

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

enum DataType {
    INT,
    DOUBLE,
    FLOAT,
    STRING
};

union FileData {
    int integerType;
    double doubleType;
    char stringType[50];
    float floatType; 
};

struct Data {
    DataType dataType;
    FileData data;
};

class FileReader {
private:
    std::ifstream file;
    std::vector<DataType> dataArr;
public:
    void readData();
    void printData();
};


#endif // __FILEREADER__