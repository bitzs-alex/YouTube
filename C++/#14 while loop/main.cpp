/**
 * @file main.cpp
 * @author Bitzs Alex (bitzsspace.com)
 * 
 * @brief Introduction to repetition statements and while loop
 * Repetition statement is a mechanisms for our program to execute some block of code over and over again
 * In repetition statements we use conditions to help us break the repetition cycle
 * As long as the condition is true (satisfied), the block of code keeps on executing
 * If the condition will always be true, the program execution will get stuck on unbreakable loop called infinite loop
 * 
 * Repetition statement types:
 *      - while
 *      - do...while
 *      - for
 * 
 * @version 0.1
 * @date 2022-11-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

int main() {
    // syntax
    /*
    while (condition) {
        // statements
    }
    */
   
    bool iAmImmortal = true;
    while (iAmImmortal) {
        cout << "I am still alive" << endl;
    } // will end up in infinite loop

    bool iDontGetExecuted = false;
    while (iDontGetExecuted) {
        cout << "You will never see this output" << endl;
    } // this loop will never execute it's block of statements

    int counter = 1;
    while (counter <= 5) {
        cout << "I am still alive" << endl;
        counter++; // necessary for the loop to break
    } // will print exactly 5 "I am still alive" statements

    // printing numbers ranging from 1 - 50
    counter = 1;
    while (counter <= 50) {
        cout << counter << endl;
        counter++;
    }

    // printing even numbers between 1 - 50
    counter = 1;
    while (counter <= 50) {
        if (counter % 2 == 0)
            cout << counter << endl;

        counter++;
    }

    // do we have to increment by one only?
    // printing numbers 10, 20, 30, ...., 100
    counter = 10;
    while (counter <= 100) {
        cout << counter << endl;
        counter += 10;
    }

    return 0;
}