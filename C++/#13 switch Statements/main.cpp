/**
 * @file main.cpp
 * @author Bitzs Alex (bitzsspace.com)
 * @brief The Switch Statement
 * The switch statements is another selection statement.
 * Switch statements are just like 'if else if' statements but in the switch statement
 *  we only look for exact values rather than range of values like we can do in the 'if else if'
 *  statements.
 * 
 * @version 0.1
 * @date 2022-10-31
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    // checking the value
    switch(age) {
        // in case statements brackets are optional
        case 10: {
            cout << "Your age is just 10" << endl;
            break;
        }
        case 19:
            cout << "Your age is 19" << endl;
            break;
        default:
            cout << "I don't know your age" << endl;
            break;
    }

    // reason of break statement
    switch(age) {
        case 10:
            cout << "Your age is just 10" << endl;
        case 19:
            cout << "Your age is 19" << endl;
        default:
            cout << "I don't know your age" << endl;
    }

    // the above statement translate to
    if (age == 10)
        cout << "Your age is just 10" << endl;
    else if (age == 19)
        cout << "Your age is 19" << endl;
    else
        cout << "I don't know your age" << endl;

    // what happens if we want to assign range values
    if (age <= 10)
        cout << "You are an adorable child!" << endl;
    else if (age >= 10 && age <= 19)
        cout << "You are a teenager!" << endl;
    else
        cout << "You are an adult!" << endl;

    // switch with range values
    switch (age) {
        case 1: case 2: case 3: case 4:
        case 5: case 6: case 7:
        case 8: case 9: case 10:
            cout << "You are an adorable child!" << endl;
            break;
        case 11: case 12: case 13:
        case 14: case 15: case 16:
        case 17: case 18: case 19:
            cout << "You are a teenager!" << endl;
            break;
        default:
            cout << "You are an adult!" << endl;
    }

    return 0;
}
