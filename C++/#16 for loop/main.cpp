/**
 * @file main.cpp
 * @author Bitzs Alex (bitzsspace.com)
 * @brief A tutorial on For Loop
 * A continued tutorial on looping structures in CPP
 * A for loop is the only loop in CPP to encapsulate the counter's initialization, 
 *      condition, and update (increment/decrement operations) in one place.
 * @version 0.1
 * @date 2022-11-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

int main() {
    // syntax
    // for (initialization; condition; increment/decrement) {
    //     // statements
    // }
    /*
        initialization - initializes variables and is executed only once
        condition - if true, the body of for loop is executed if false, the for loop is terminated
        update - updates the value of initialized variables and again checks the condition
    */
    // in while loop, we were doing
    int counter = 1; // initialization
    while (counter <= 5) // condition
        cout << counter ++ << endl; // increment

    // in a for loop
    for (int counter = 1; counter <= 5; counter++) // all together
        cout << counter << endl;

    // look at the variable creation
    // int counter = 6;

    counter = 1;
    for (cout << "first\t"; cout << "condition\t"; cout << "update\t") {
        cout << "Execute the code block" << endl;
        if (counter++ >= 5) break;
    }

    // just like while loop, it won't execute if the condition fails initially
    for (int counter = 1; counter > 1; counter--)
        cout << "this won't get executed" << endl;

    // the above task can be done like this
    for (; false; )
        cout << "this won't get executed" << endl;

    // what does it mean though omitting one or all of the parts in for loop
    // for (; ;)
    //     cout << "This will be infinite loop" << endl;

    // what if we omit the condition
    // for (int counter = 1; ; counter++)
    //     cout << counter << endl;

    // what happens if we omit the initialization part
    // since we can't work without a variable, we need to have a previously declared variable
    for (; counter <= 5; counter++)
        cout << counter << endl;

    // you get the idea, what is going to happen if we omit the update part, right?
    // if not let me show you
    // for (int counter = 1; counter <= 5; )
    //     cout << counter  << endl; // infinite loop (since there is no update)

    // we can make it look like while loop
    counter = 1;
    for(; counter <= 5; ) // omitting the parts
        cout << counter++ << endl;
    // NB: if you omit either parts of the for loop, make sure the loop won't fall into infinite loop
    // by providing the updating and condition operations inside the loop

    // finally let's do what we did in the 'while loop' session
    for (int counter = 1; counter <= 5; counter++)
        // will print exactly 5 "I am still alive" statements
        cout << "I am still alive" << endl;

    // printing numbers ranging from 1 - 50
    for (int counter = 1; counter <= 50; counter++)
        cout << counter << endl;

    // printing even numbers between 1 - 50
    for (int counter = 1; counter <= 50; counter++)
        if (counter % 2 == 0)
            cout << counter << endl;

    // do we have to increment by one only?
    // printing numbers 10, 20, 30, ...., 100
    for (int counter = 10; counter <= 100; counter += 10)
        cout << counter << endl;

    // there is a range based for loop, and we will talk about it after we discussed about arrays
    return 0;
}