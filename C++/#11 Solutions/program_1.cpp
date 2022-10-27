/**
 * @file program_1.cpp
 * @author Bitzs Alex (bitzsspace.com)
 * @brief This is my solution to a Sales Prediction problem
 * @description: A company generates 62 percent of total sales. Based on that percentage, write a program that will 
 *      predict how much the the company will generate if the company has $4.6 million in sales this year. 
 *      Display the result on the screen.
 * @version 0.1
 * @date 2022-10-27
 * 
 * @copyright Copyright (c) 2022
 */

#include <iostream>
using namespace std;

int main() {
    // declaring variables from the description
    float income_percent = 52,
        company_sales = 4.6;  // company sales can be dynamic (i.e. accept an input from the user)

    // calculating the percentage and display it
    cout << "The company will generate $" << (company_sales + (income_percent * company_sales / 100)) << " million this year" << endl;
    return 0;
}
