/**
 * @file main.cpp
 * @author Bitzs Alex (bitzsspace.com)
 * @brief Converting literals from one type to another in CPP
 * @version 0.1
 * @date 2022-08-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <typeinfo>

using namespace std;

/**
 * Implicit and Explicit casting
 * Implicit being automatic
 * Explicit being exclusively stating the type we want to convert the type to
 * 
 */

#define TYPE_ID(x) (typeid(x).name())

int main() {
    // Implicit casting
    double a = 8.5;
    int b = 5;
    cout << TYPE_ID(a) << " - " << TYPE_ID(b) << endl;
    cout << a << " - " << b << endl;
    a = b * 3.5;  // b's type converted automatically
    b = a + b;  // a's type converted automatically
    cout << TYPE_ID(a) << " - " << TYPE_ID(b) << endl;
    cout << a << " - " << b << endl;  // check the floating point

    /**
     * Explicit casting
     * Two kinds:
     *      C style casting 
     *      Function-style Casting
     */
    cout << "C style casting : " << (int) a << endl;
    cout << "Function style casting : " << int(a) << endl;

    /**
     * @ref for more on casting
     * https://www.programiz.com/cpp-programming/type-conversion
     */

    return 0;
}