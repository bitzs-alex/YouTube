/**
 * @file main.cpp
 * @author Bitzs Alex (bitzsspace.com)
 * @brief Everything about Variables, Identifiers, and Keywords in CPP
 * @version 0.1
 * @date 2022-08-25
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>

using namespace std;

/**
 * NOTE:
 * Variables are name of memory areas to hold specific value
 * 
 * NOTE:
 * CPP is strongly typed programming language, i.e., 
 * the data type has to be specified when declaring a variable
 * 
 * NOTE:
 * Identifiers are just names for data items; it could be variable name or class name
 * Identifiers in CPP formed from chars (A-Za-z), digits (0-9), and underscore (_)
 * Identifiers must not start with digits
 * Identifiers in CPP are case sensetive
 * Identifiers must not be preserved keywords
 */

int main() {
    // strongly typed
    int age;  // age's data type must be specified

    // Declaration vs Initialization
    int sum;  // just declaring the variable
    int total = 45;  // initialization, i.e., declaring and assigning initial value

    /*
    In the above declarations and initializations, the age, sum, and total are valid identifiers.
    Case sensetivity
        sum and Sum are complete different identifiers
    Invalid identifiers would be:
        1sum => started with digit
        and => can not be a reserved keyword
        total age => contains space

    * @ref for more keywords
    * https://en.cppreference.com/w/cpp/keyword
    */

    // Checking a variable is a memory location
    cout << "total variable : " << total << endl;
    cout << "Getting memory location of total variable : " << &total << endl;
    cout << "Accessing the value stored in the memory location of total variable : " << *(&total) << endl;

    // other types
    bool test = false;
    float salary;
    char single_character = 'G';  // Notice the single quote here
    single_character = 'TR';  // Raise a warning but pics the last char
    // testing
    cout << single_character << endl;

    /*
    Strings are collection of characters.
    String is not a built in data type.
    There are two ways to define strings in CPP */
    // Method 1: Using character array (more on array on later sessions)
    char name[12] = "Bitzs Alex";  // Notice the double quote
    cout << name << endl;

    // Method 2: Using string class
    string job = "student";  // double quote here as well
    cout << job << endl;

    // name = "Someone";  // Won't work
    job = "another thing";
    cout << job << endl;
    // More on strings on it's own section

    return 0;
}