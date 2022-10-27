/**
 * @file program_3.cpp
 * @author Bitzs Alex (bitzsspace.com)
 * @brief This is my solution for Restaurant Bill problem
 * @description: Write a program that computes the tax and tip on a restaurant bill for a meal charge inserted
 *      from the console. The tax should be 6.75 percent of the meal cost. The tip should be 15 percent of
 *      the total after adding the tax. Display the meal cost, tax amount, tip amount, and total bill on
 *      the screen.
 * @version 0.1
 * @date 2022-10-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

int main() {
    // declaring variables
    float bill,
        // initializing variables extracting values from the description
        taxRate = 6.75,
        tipRate = 15;

    // accepting input from the user
    cout << "Enter the bill amount: ";
    cin >> bill;

    // calculating the tip and tax amount as percentages
    float tip = bill * tipRate / 100;
    float tax = bill * taxRate / 100;

    // displaying the results
    cout << "\n\tThe bill amount is: $" << bill << endl;
    cout << "\tThe Tip will be: $" << tip << endl;
    cout << "\tThe Tax will be: $" << tax << endl;
    cout << "\t======================================================" << endl;
    cout << "\tTotal meal cost will be: $" << (bill + tip + tax) << endl << endl;

    return 0;
}
