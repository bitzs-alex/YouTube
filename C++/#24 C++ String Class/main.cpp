/**
 * @file main.cpp
 * @author Bitzs Alex (bitzs@bitzsspace.com)
 * @brief String Classes in C++
 * Details of
 *  - Declaration and Initialization
 *  - Accessing and Assigning string values
 *  - Input and Output
 *  - Functions to manipulate the values
 * 
 * @version 0.1
 * @date 2023-01-17
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>
using namespace std;

int main() {
    // Declaration
    // =====================
    string hello_string;
    // assigning value to the string
    hello_string = "Hello";
    cout << hello_string << endl;

    // string class implements cstrings, under the hood
    // it is still an array of characters
    cout << hello_string[0] << endl;
    // the other way to do this
    cout << hello_string.at(0) << endl;  // String class way
    hello_string[0] = 'W';
    cout << hello_string << endl;


    // Initialization
    // =====================
    string name {"Bitzs Alex"};
    string another ("Bitzs Alex");
    string oneOther = "Bitzs Alex";
    cout << name << "\t" << another << "\t" << oneOther << endl;


    // Output and Input
    // =====================
    string newName;
    cout << "Enter new name: ";
    // just like CString, it won't accept a string with space
    // cin >> newName;
    cout << "Your new name is: " << newName << endl;

    // input with space
    cout << "Enter your full name: ";
    // cin.getline(newName);  // won't work
    // getline(cin, newName);
    cout << "Your full name is: " << newName;


    // Functions to manipulate CStrings
    // =================================
    // converting cstrings to other types
    // stoi: converts string to int type.
    // stol: converts string to long type.
    // stof: converts string to float type.
    string yearOfBirth = "1995",
            currentYear = "2023",
            fullName = "Betizazu Alemu",
            emptyString = "";
    cout << stoi(currentYear) -  stof(yearOfBirth) << endl;

    // getting the length of the string
    cout << yearOfBirth.size() << "\tor\t" << yearOfBirth.length() << endl;

    // concatenating strings
    yearOfBirth = yearOfBirth + currentYear;
    cout << yearOfBirth << endl;

    // checking if a string is empty
    cout << emptyString.empty() << endl;

    // finding string (character) in a string
    cout << yearOfBirth.find("9") << "\tor\t" << currentYear.find("9") << endl;

    // inserting string
    fullName.insert(0, "Desalegn ");
    cout << fullName << endl;

    // compare
    string str1 ("Desalegn");
    string str2 ("Alemu");
    string str3 ("Alemu");
    cout << str1.compare(str2) << "\t" << str2.compare(str1) << "\t" << str3.compare(str2) << endl;
    return 0;
}
