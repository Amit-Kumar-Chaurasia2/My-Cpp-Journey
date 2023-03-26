##Check the size of different data types for your system using sizeof(Variable_name)

#include <iostream>
using namespace std;

int main() {

    int a = 4;
    double b = 1.90;
    char c = '+';

    int sizeInteger = sizeof(a), sizeDouble = sizeof(b), sizeChar = sizeof(c);

    cout<< "Size of an Integer is "<<sizeInteger<< " bytes"<<endl;
    cout<< "Size of a Double is "<<sizeDouble<< " bytes"<<endl;
    cout<< "Size of a Char is "<<sizeChar<< " bytes"<<endl;

}
