#include<iostream>
using namespace std;

// syntax - some defined keywords in a programming language

int main(){
    // For storing integers we use (int) in cpp
    int myAge = 64;
    // 1 Byte = 8 bits , 1 bit is 0 or 1
    cout << "Size of integer datatype: " << sizeof(int) << " Bytes" <<endl;
    // 4 Bytes = 4 * 8 = 32 bits 
    // - 2 ^ 32 to 2 ^ 31
    cout << "My Age is: " << myAge << endl;
    // Boolean is bool in cpp - true(1) or false(0)
    bool myBool = true;
    bool myNegBool = false;

    cout << "Boolean size is " << sizeof(bool) << " Bytes" << endl;
    cout << "My bool is " << myBool <<endl;

    // char is to store characters
    char shradda = 's';
    cout << "Size of charactar " << sizeof(char) << endl;
    cout << "My character is " << shradda << endl;

    // Decimal values we use float
    // Strongly typed language
    float pi = 3.14;
    cout << "Value of pi is " << pi << endl;
    // range of float is also same as int -2^31 - 2^31

    // You want to store more larger numbers greater than 2 ^ 32
    long largeValues = 123344333333;
    // range of long is from -2^63 to 2^63

    // You want to store decimal value gretere than 2^32
    double largeDecimal = 12134123234.144
}