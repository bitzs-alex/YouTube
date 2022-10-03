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
 * In this session, we will talk about:
 *      Logical Operators
 *      Bitwise Operators
 *      Increment/Decrement Operators
 * 
 * Furthermore, we will talk about operator precedence
 */

int main() {
    int a = 9, b = 3;
    float c = 9, d = 3;

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
    // && and || operates in a short way
    /**
     * for more:
     *  https://en.cppreference.com/w/cpp/language/operator_logical
     */

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
    /**
     * for more:
     *  https://en.cppreference.com/w/cpp/language/operator_arithmetic
     */

    // Increment and Decrement Operators
    // =================================
    // Add one to the variable
    a++, b++;
    cout << a << " and " << b << endl;
    ++a, ++b;
    cout << a << " and " << b << endl;
    
    // What is the difference then?
    // The difference is the precedence
    cout << "a before post and pre increment : " << a << endl;
    cout << "\tpre : " << ++a << "\n\tpost : " << a++ << endl;
    cout << "a after post and pre increment : " << a << endl;
    /**
     * for more:
     *  https://en.cppreference.com/w/cpp/language/operator_incdec
     */

    // Operator precedence
    // Answers the question "Which operator has to be done before which?"
    a = 9, b = 3, c = 9, d = 3;
    bool isEqual = (a % b-- - c / ++d) != (b << int(d) + a ^ (int) c);
    cout << "Is '(a % b-- - c / ++d) != (b << int(d) + a ^ (int) c)' expression true : " << isEqual << endl;
    /**
     * @ref for more on precedence
     * https://en.cppreference.com/w/cpp/language/operator_precedence
     */

    // Operators for characters
    // =================================
    char letter = 'a' + 1;
    cout << letter << endl;
    letter += 2;
    cout << letter << endl;
    
    return 0;
}