/**
 * @file main.cpp
 * @author Bitzs Alex (bitzsspace.com)
 * @brief Break, Continue, and goto
 * Let's say we want to stop the execution of loops befor they reach to an end but when 
 *      they reach to certain point? Break
 * What if we want to skip the current iteration of the loop? Continue
 * What if we want to jump into different section of our program? Goto
 *      NB: the goto statement is the only statement that doesn't need any control
 *          flow structure, the reset need control flow structures to work
 *  
 * @version 0.1
 * @date 2022-11-12
 * 
 * @copyright Copyright (c) 2022
 * 
 */

// i can use the example of studies

#include <iostream>
using namespace std;

int main() {
    // we have seen an example how break works, in two different occasions
    // first case with switch statements
    int age;
    cout << "Enter your age: ";
    cin >> age;

    // checking the value
    switch(age) {
        // in case statements brackets are optional
        case 10: {
            cout << "Ohh, you are just 10!" << endl;
            break;
        }
        case 19:
            cout << "You just turn in to adult, that's awesome!" << endl;
            break;
        default:
            cout << "I am sorry, I don't know your age" << endl;
            break;
    }

    // second case
    int counter = 1;
    for (cout << "first\t"; cout << "condition\t"; cout << "update\t") {
        cout << "Execute the code block" << endl;
        if (counter++ >= 5) break;
    }
    // what break does (as the name suggests) is breaking the cycle of repetition

    // skipping an iterations
    // let's say if we wanted to skip the multiple of 5, when printing numbers from 1 - 25
    for (int counter = 1; counter <= 25; counter++) {
        if (counter % 5 == 0)
            continue;
        cout << counter << endl;
    }

    // same instance in while loop
    counter = 1;
    while (counter <= 25) {
        if (counter % 5 == 0)
            continue;
        cout << counter++ << endl;
    } // this will fall into infinite loop
    // to fix it, we need to adjust it
    // to adjust our method there are two ways
    
    // first, adjust the number and increment/decrement position
    counter = 0;
    while (counter <= 25) {
        counter++;
        if (counter % 5 == 0)
            continue;
        cout << counter << endl;
    } // this will fall into infinite loop

    // second, without using continue statement at all
    counter = 1;
    while (counter <= 25) {
        if (counter % 5 != 0)
            cout << counter << endl;

        counter++;
    }

    // what if we want to break the nested loop, while being inside inner loop
    // there is no way we can achieve that with break statements
    for (int i = 1; i < 10; i++) {
        for (int j = 1; j < 10; j++) {
            if (j == 4)
                break;
            cout << i * j << "\t";
        }
        cout << endl;
    }

    // using goto statements
    for (int i = 1; i < 10; i++) {
        for (int j = 1; j < 10; j++) {
            if (j == 4)
                goto OUTER;
            cout << i * j << "\t";
        }
        cout << endl;
    }
    OUTER:
    
    // we can also divert the execution to the upper part of our program but we might end up with an infinite loop
    for (int i = 1; i < 10; i++) {
        for (int j = 1; j < 10; j++) {
            if (j == 4)
                goto OUTER;
            cout << i * j << "\t";
        }
        cout << endl;
    }
    return 0;
}