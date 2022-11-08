/**
 * @file main.cpp
 * @author Bitzs Alex (bitzsspace.com)
 * @brief do…while loops are very similar to while loops, except the truth expression is checked at the end of each iteration
 * The main difference from while loops is that the first iteration of a do…while loop is guaranteed to run always
 * 
 * 
 * @version 0.1
 * @date 2022-11-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

int main() {
    // syntax
    /*
    do {
        // statements
    } while (condition);
    */
   
    bool iAmImmortal = true;
    do {
        cout << "I am still alive" << endl;
    } while (iAmImmortal); // will end up in infinite loop

    bool iDontGetExecuted = false;
    do {
        cout << "You will see this line exactly once." << endl;
    } while (iDontGetExecuted); // this loop will run exactly one time before the condition fails

    int counter = 1;
    do {
        cout << "I am still alive" << endl;
        counter++; // necessary for the loop to break
    } while (counter <= 5); // will print exactly 5 "I am still alive" statements

    // printing numbers ranging from 1 - 50
    counter = 1;
    do {
        cout << counter << endl;
        counter++;
    } while (counter <= 50);

    // printing even numbers between 1 - 50
    counter = 1;
    do {
        if (counter % 2 == 0)
            cout << counter << endl;

        counter++;
    } while (counter <= 50);

    // do we have to increment by one only?
    // printing numbers 10, 20, 30, ...., 100
    counter = 10;
    do {
        cout << counter << endl;
        counter += 10;
    } while (counter <= 100);

    return 0;
}