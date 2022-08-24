/**
 * @file main.cpp
 * @author Bitzs Alex (bitzsspace.com)
 * @brief Everything about DataTypes in CPP
 * @version 0.1
 * @date 2022-08-24
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <typeinfo>  // to get the type
#include <limits.h>  // to get the value range of int data types
// #include <float.h>  // to get the value range of float data types
#include <math.h>

using namespace std;

/**
 * Literals mean values, in CPP we can represent different literals
 * Data Types mean how do literals represent in a computer memory
 * 
 * NOTE:
 * The built in or basic data types supported by C++ are
 * boolean, integer, floating point and character
 * 
 * The basic data types are
 * 1. int => Small integer number
 * 2. float => Small real number (hold 7 decimal digits accurately)
 * 3. double => Double precision real number (hold 15 decimal digits accurately)
 * 4. char => A single character
 * 5. boolean => A true or false value
 * 6. void => Valueless
 * 
 * NOTE:
 * For the numeric data types there are type modifiers
 * 1. short and long => value range wise
 *      short meaning smaller range than actual range
 *      long meaning higher range than actual range
 * 2. signed and unsigned => positive negative wise
 *      signed meaning the range is between the negative and positive of the max size
 *      unsigned meaning the range between 0 and the max size
 * 
 * NOTE:
 * In C++ string is not a built in data type (More on strings in other session)
 */

int main() {
    // Let's find out literals type
    cout << typeid(3).name() << endl;
    cout << typeid(3.4).name() << endl;
    cout << typeid(true).name() << endl;
    cout << typeid('r').name() << endl;
    cout << typeid(void).name() << endl;

    // There are different ways to representing literals
    cout << "Decimal : " << 58 << endl;
    cout << "Octal : " << 014 << endl;
    cout << "Hexadecimal : " << 0x10 << " or " << 0X10 << endl;
    cout << "Big Number (Power of 10) : " << 2.56e15 << " or " << 2.56E15 << endl;
    cout << "Very Small Number (Power of 10) : " << 3.147e-10 << " or " << 3.147E-10 << endl;
    cout << "Hexadecimal power of 2" << 0x34p3 << endl;
    /**
     * @ref for more
     * https://www.geeksforgeeks.org/types-of-literals-in-c-c-with-examples/
     * https://en.cppreference.com/w/cpp/language/floating_literal
     */


    // size of data types Byte (1B = 8bits) wise
    // an example for integer datatype
    cout << "size of int : " << sizeof(int) << "B" << endl;
    cout << "size of short int : " << sizeof(short) << "B" << endl;
    cout << "size of long int : " << sizeof(long) << "B" << endl;
    cout << "size of long long int : " << sizeof(long long) << "B" << endl;
    cout << "size of signed int : " << sizeof(signed) << "B" << endl;
    cout << "size of unsigned int : " << sizeof(unsigned) << "B" << endl;
    cout << "size of signed short int : " << sizeof(signed short) << "B" << endl;
    cout << "size of unsigned short int : " << sizeof(unsigned short) << "B" << endl;
    cout << "size of signed long int : " << sizeof(signed long) << "B" << endl;
    cout << "size of unsigned long int : " << sizeof(unsigned long) << "B" << endl;


    // Checking range limit using Macro constants from limits.h
    cout << "char range : " << CHAR_MIN << " - " << CHAR_MAX << endl;
    cout << "short int range : " << SHRT_MIN << " - " << SHRT_MAX << endl;
    cout << "int range : " << INT_MIN << " - " << INT_MAX << endl;
    cout << "long int range : " << LONG_MIN << " - " << LONG_MAX << endl;
    cout << "long long int range : " << LLONG_MIN << " - " << LLONG_MAX << endl;
    cout << "unsigned short int range : " << 0 << " - " << USHRT_MAX << endl;
    cout << "unsigned int range : " << 0 << " - " << UINT_MAX << endl;
    cout << "unsigned long int range : " << 0 << " - " << ULONG_MAX << endl;
    cout << "unsigned long long int range : " << 0 << " - " << ULLONG_MAX << endl;
    /**
     * @ref for more 
     * https://cplusplus.com/reference/climits/
     * https://cplusplus.com/reference/cfloat/
     */

    // We can also calculate the ranges by our selves
    // Defining our own Macro Constants
    #define SIGNED_SIZE(x) (pow(2, (sizeof(x) * 8) - 1))
    #define UNSIGNED_SIZE(x) (pow(2, (sizeof(x) * 8)) - 1)

    cout << "char range : " << SIGNED_SIZE(char) * -1 << " - " << SIGNED_SIZE(char) - 1 << endl;
    cout << "short int range : " << SIGNED_SIZE(short int) * -1 << " - " << SIGNED_SIZE(short int) - 1 << endl;
    cout << "int range : " << SIGNED_SIZE(int) * -1 << " - " << SIGNED_SIZE(int) - 1 << endl;
    cout << "long int range : " << SIGNED_SIZE(long) * -1 << " - " << SIGNED_SIZE(long) - 1 << endl;
    cout << "long long int range : " << SIGNED_SIZE(long long) * -1 << " - " << SIGNED_SIZE(long long) - 1 << endl;
    cout << "unsigned short int range : " << 0 << " - " << UNSIGNED_SIZE(short) << endl;
    cout << "unsigned int range : " << 0 << " - " << UNSIGNED_SIZE(int) << endl;
    cout << "unsigned long int range : " << 0 << " - " << UNSIGNED_SIZE(long) << endl;
    cout << "unsigned long long int range : " << 0 << " - " << UNSIGNED_SIZE(long long) << endl;

    return 0;
}