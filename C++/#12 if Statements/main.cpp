/**
 * @file main.cpp
 * @author Bitzs Alex (bitzsspace.com)
 * @brief Introduction to Control Flow Structure and if statements
 * Control structures can be grouped as:
 *      - Sequential (linear): execution in order instructions appear
 *      - Selection (decision or branching): select one from multiple path of execution
 *      - Repetition (loop or iteration): repeating instructions
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
    /**
    Selection
        types of selection/decision making statements
        - if
        - if...else and if...else if
        - switch
    */

    // The if statement
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18) {
        cout << "Ohh, you are an adult!" << endl;
    }

    // an other condition
    if (age <= 10)
        cout << "Uuu, you have a bight future ahead" << endl;

    if (age > 10)
        cout << "Ohh yeah, you are grown now" << endl;

    // an else option comes in hand
    if (age <= 10)
        cout << "Uuu, you have a bight future ahead" << endl;
    else
        cout << "Ohh yeah, you are grown now" << endl;

    // an other condition
    if (age <= 10)
        cout << "You are an adorable child!" << endl;
    if (age >= 10 && age <= 19)
        cout << "You are a teenager!" << endl;
    else
        cout << "You are an adult!" << endl;

    // the else if statement cones in play
    if (age <= 10)
        cout << "You are an adorable child!" << endl;
    else if (age >= 10 && age <= 19)
        cout << "You are a teenager!" << endl;
    else
        cout << "You are an adult!" << endl;

    // we can change the above like
    if (age <= 10)
        cout << "You are an adorable child!" << endl;
    else if (age <= 19)
        cout << "You are a teenager!" << endl;
    else
        cout << "You are an adult!" << endl;
    return 0;
}
