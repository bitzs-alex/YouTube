/**
 * @file program_2.cpp
 * @author Bitzs Alex (bitzsspace.com)
 * @brief This is my solution for a Sales Tax problem
 * @description: Write a program that computes the total sales tax on an item purchase. Assume the state sales tax
 *      is 4 percent and the county sales tax is 2 percent. Display the purchase price, state tax, county
 *      tax, and total tax amounts on the screen after accepting the price of an item from the console.
 * @version 0.1
 * @date 2022-10-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>

using namespace std;

int main() {
    // declaring variables from the description
    float price,
        // initializing variables extracting the values from the description
        countyTaxRate = 2,
        stateTaxRate = 4;

    // accepting input from the user
    cout << "Enter the price of a product: ";
    cin >> price;

    // calculating the tax values as percentages
    float stateTax = price * stateTaxRate / 100;
    float countyTax = price * countyTaxRate / 100;

    // displaying the results
    cout << "\n\tState Tax will be: $" << stateTax << endl;
    cout << "\tCounty Tax will be: $" << countyTax << endl;
    cout << "\t======================================================" << endl;
    cout << "\tTotal tax amount: $" << (stateTax + countyTax) << endl;
    cout << "\nTotal price will be: $" << (price + stateTax + countyTax) << endl;

    return 0;
}
