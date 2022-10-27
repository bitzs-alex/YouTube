/**
 * @file program_4.cpp
 * @author Bitzs Alex (bitzsspace.com)
 * @brief This is my solution for Salary Increase problem
 * @description: Workers at a particular company have won a 7.6% pay increase retroactive for six 
 *      months. Write a program that takes an employee’s previous annual salary as input 
 *      and outputs the amount of retroactive pay due the employee, the new annual 
 *      salary, and the new monthly salary.
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
    float incrementRate = 7.6,
        previousSalary;

    // accepting input from the user
    cout << "Enter your previous annual salary: ";
    cin >> previousSalary;

    // calculating the new salary (i.e. prev_salary + increased_rate)
    float newSalary = previousSalary + (previousSalary * incrementRate / 100);

    // displaying the results
    cout << "\nYour retroactive pay will be: " << ((newSalary - previousSalary) / 2) << endl;
    cout << "Your new annual salary will be: " << newSalary << endl;
    cout << "Your new monthly salary will be: " << (newSalary / 12) << endl << endl;

    return 0;
}

