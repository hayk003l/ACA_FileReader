#include "Reader.hpp"


void FileReader::readData() {
    file.open("Data.txt", std::ios::in|std::ios::binary);

    if(!file) {
        std::cout << "Something went wrong." << std::endl;
    }

    std::vector<Data> vec;

    while (!file.eof()) {
       Data temp; 
       file.read((char*)(&temp.dataType), sizeof(DataType));

       switch (temp.dataType)
       {
       case INT:
        file.read((char*)(&temp.data.integerType), sizeof(int));
        break;
       case DOUBLE:
        file.read((char*)(&temp.data.doubleType), sizeof(double));
        break;
        case FLOAT:
        file.read((char*)(&temp.data.floatType), sizeof(float));
        break;
        case STRING:
        break;
       default:
        break;
       }
    }
    

}