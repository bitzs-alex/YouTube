#include <iostream>
#include <sstream>
using namespace std;

int main() {
    // integers
    // ===============
    // zero => false
    // anything not zero => true
    int intPlusOne { 1 };
    int intMinOne { -1 };
    int intZero { 0 };
    int intBigNum { 23786746 };
    // https://en.cppreference.com/w/cpp/language/initialization

    // floats
    // ===============
    // same as integers

    // characters
    // ===============
    // empty char => false
    // any char that is not empty => true
    char chr;

    bool boolValue = intPlusOne;
    cout << boolValue << endl;

    if (chr)
        cout << "I got a true value" << endl;
    else
        cout << "I got a false value" << endl;
    
}