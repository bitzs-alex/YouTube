/**
 * @file main.cpp
 * @author Bitzs Alex (bitzsspace.com)
 * @brief Nesting Control Flow Structures
 *  In simple words, it means wrapping one control flow structures inside the other.
 *  If...else statements can wrap them selves or other control statements, the rests can do the same.
 * 
 * @version 0.1
 * @date 2022-11-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

int main() {
    // Displaying a Message
    float age;
    cout << "Enter your age: " << endl;
    cin >> age;

    // let's try to implement Erikson's Stages of Psychological Development
    // There are eight stages, those stages are grouped into three categories
    // These stages has different Psychological descriptors
    if (age <= 12)  // childhood
        if (age <= 1.6) cout << "You are in 'Trust vs Mistrust' Psychological Crisis" << endl;
        else if (age <= 3) cout << "You are in 'Autonomy vs Shame and Doubt' Psychological Crisis" << endl;
        else if (age <= 5) cout << "You are in 'Initiative vs Guilt' Psychological Crisis" << endl;
        else cout << "You are in 'Industry vs Inferiority' Psychological Crisis" << endl;
    else if (age <= 18)  // transition
        cout << "You are in 'Identity vs Role Confusion' Psychological Crisis" << endl;
    else  // adulthood
        if (age <= 40) cout << "You are in 'Intimacy vs Isolation' Psychological Crisis" << endl;
        else if (age <= 65) cout << "You are in 'Generativity vs Stagnation' Psychological Crisis" << endl;
        else cout << "You are in 'Ego Integrity vs Despair' Psychological Crisis" << endl;
    /**
     * @ref 
     * https://www.simplypsychology.org/Erik-Erikson.html
     * https://playvolutionhq.com/handout-eriksons-stages-of-psychosocial-development/
     */

    // let's move on to looping structures
    // let's try to creating a multiplication table (10 * 10)
    // By now we knew, how to iterate 10 times
    for (int itr = 1; itr <= 10; itr++)
        cout << itr << endl;  // this will get printed 10 times

    // what happens if we introduce another looping structure inside the previous one
    for (int itr = 1; itr <= 10; itr++)
        for (int jtr = 1; jtr <= 10; jtr++)
            cout << jtr << endl;  // this will get printed 100 times
    
    // so what we need to do is,
    for (int itr = 1; itr <= 10; itr++) {
        for (int jtr = 1; jtr <= 10; jtr++)
            cout << itr * jtr << "\t";
        cout << endl;
    }

    return 0;
}

// multiplication table