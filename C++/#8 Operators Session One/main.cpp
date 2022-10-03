/**
 * @file main.cpp
 * @author Bitzs Alex (bitzsspace.com)
 * @brief First part of Operators in CPP. A discussion about Arithmetic, Assignment, and Relational Operators.
 * @version 0.1
 * @date 2022-10-03
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
 *      Relational/Comparison Operators
 *      Logical Operators
 *      Bitwise Operators
 *      Increment/Decrement Operators
 * 
 * Operators further classified into three:
 *      Unary Operators => one operand
 *      Binary Operator  => two operand
 *      Ternary/conditional Operator  => three operand
 * 
 * In this session, we only talk about:
 *      Arithmetic Operators
 *      Assignment Operators
 *      Relational/Comparison Operators
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
    /**
     * for more:
     *  https://en.cppreference.com/w/cpp/language/operator_arithmetic
     */

    // type casting in Arithmetic Operations
    cout << "int / int = " << typeid(a / b).name() << " => " << (a / b) << endl;
    cout << "float / int = " << typeid(c / b).name() << " => " << (c / b) << endl;
    cout << "int / float = " << typeid(a / d).name() << " => " << (a / d) << endl;

    // Note: The % operator can only be used with integers.
    // cout << c % a << endl;  // won't work

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
    /**
     * for more:
     *  https://en.cppreference.com/w/cpp/language/operator_assignment
     */

    a = 9, b = 3, c = 9, d = 3;

    // Relational/Comparison Operators
    // =====================
    // A relational operator is used to check the relationship between two operand
    cout << c << " == " << b << " is " << (c == b) << endl;
    cout << c << " != " << b << " is " << (c != b) << endl;
    cout << c << " > " << b << " is " << (c > b) << endl;
    cout << c << " < " << b << " is " << (c < b) << endl;
    cout << c << " >= " << b << " is " << (c >= b) << endl;
    cout << c << " <= " << b << " is " << (c <= b)  << endl;
    /**
     * for more:
     *  https://en.cppreference.com/w/cpp/language/operator_comparison
     */

    // Conditional/Ternary Operator
    // =================================
    // takes three operand, it's just like if-else
    cout << "Is a (" << a << ") even : " << (a % 2 == 0 ? "Yes" : "No") << endl;
    a = a > 9 ? a << 1 : a >> 2;
    cout << "New a value : " << a << endl;
    /**
     * for more:
     *  https://en.cppreference.com/w/cpp/language/operator_other
     */

    return 0;
}