/**
 * @file main.cpp
 * @author Bitzs Alex (bitzsspace.com)
 * @brief All kinds of operators in CPP
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
 * NOTE:
 * Operators in CPP can be classified as:
 *      Arithmetic Operators
 *      Assignment Operators
 *      Relational Operators
 *      Logical Operators
 *      Bitwise Operators
 *      Increment/Decrement Operators
 * 
 * Operators further classified into two
 *      Unary Operators => one operand
 *      Binary Operator  => two operand
 */

int main() {
    int a = 9, b = 3;
    float c = 9, d = 3;

    // Arithmetic Operations
    // =====================
    cout << "a + b = " << (a + b) << endl;
    cout << "a - b = " << (a - b) << endl;
    cout << "a * b = " << (a * b) << endl;
    cout << "a / b = " << (a / b) << endl;
    cout << "a % b = " << (a % b) << endl;

    // type casting in Arithmetic Operations
    cout << "int / int = " << typeid(a / b).name() << " => " << (a / b) << endl;
    cout << "float / int = " << typeid(c / b).name() << " => " << (c / b) << endl;
    cout << "int / float = " << typeid(a / d).name() << " => " << (a / d) << endl;

    // Note: The % operator can only be used with integers.
    // cout << c % a << endl;

    // Assignment Operators
    // =====================
    // all arithmetic operators followed by '=' sign
    a = c;	 // =   =>  a = c;
    cout << "a\'s value after a = c : " << a << endl;
    a += b;  // +=  =>	a = a + b;
    cout << "a\'s value after a += b : " << a << endl;
    a -= b;  // -=  =>	a = a - b;
    cout << "a\'s value after a -= b : " << a << endl;
    a *= b;  // *=  =>	a = a * b;
    cout << "a\'s value after a *= b : " << a << endl;
    a /= b;  // /=  =>	a = a / b;
    cout << "a\'s value after a /= b : " << a << endl;
    a %= b;  // %=  =>	a = a % b;
    cout << "a\'s value after a %= b : " << a << endl;

    a = 9, b = 3, c = 9, d = 3;

    // Relational Operators
    // =====================
    // A relational operator is used to check the relationship between two operand
    cout << c << " == " << b << " is " << (c == b) << endl;
    cout << c << " != " << b << " is " << (c != b) << endl;
    cout << c << " > " << b << " is " << (c > b) << endl;
    cout << c << " < " << b << " is " << (c < b) << endl;
    cout << c << " >= " << b << " is " << (c >= b) << endl;
    cout << c << " <= " << b << " is " << (c <= b)  << endl;

    // Logical Operators
    // ==================
    // Logical operators are used to check whether an expression is true or false
    cout << "(c != b) && (c < b) is " << ((c != b) && (c < b)) << endl;
    cout << "(c == b) && (c < b) is " << ((c == b) && (c < b)) << endl;
    cout << "(c == b) && (c > b) is " << ((c == b) && (c > b)) << endl;
    cout << "(c != b) || (c < b) is " << ((c != b) || (c < b)) << endl;
    cout << "(c != b) || (c > b) is " << ((c != b) || (c > b)) << endl;
    cout << "(c == b) || (c > b) is " << ((c == b) || (c > b)) << endl;
    cout << "!(c == d) is " << !(c == d) << endl;
    cout << "!(c == c) is " << !(c == c) << endl;

    // Bitwise Operators
    // =====================
    // perform operations on individual bits.
    // works with only integers
    cout << a << " & " << b << " is " << (a & b) << endl;
    cout << a << " | " << b << " is " << (a | b) << endl;
    cout << a << " ^ " << b << " is " << (a ^ b) << endl;
    cout << a << " ~ " << b << " is " << ~a << endl;
    cout << a << " >> " << b << " is " << (a >> b) << endl;
    cout << a << " << " << b << " is " << (a << b)  << endl;

    // Increment and Decrement Operators
    // =================================
    // Add one to the variable
    a++, b++;
    cout << a << " and " << b << endl;
    ++a, ++b;
    cout << a << " and " << b << endl;
    
    // What is the difference then?
    cout << "a before post and pre increment : " << a << endl;
    cout << "\tpre : " << ++a << "\n\tpost : " << a++ << endl;
    cout << "a after post and pre increment : " << a << endl;
    
    return 0;
}