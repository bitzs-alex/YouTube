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
 * Identifiers can range from 1 to 255 characters
 * Associating identifiers with their purpose is a good technique to develop
 */

int main() {
    // strongly typed
    int age;  // age's data type must be specified

    // Declaration vs Initialization
    int sum;  // just declaring the variable
    int total = 45;  // initialization, i.e., declaring and assigning initial value

    /*
    In the above declarations and initializations, the age, sum, and total are valid identifiers.
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
    char singleCharacter = 'G';  // Notice the single quote here
    singleCharacter = 'TR';  // Raise a warning but pics the last char
    // testing
    cout << singleCharacter << endl;

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

    /*
    Naming Conventions
    Case sensetivity
        sum and Sum are complete different identifiers
    */
    int twowords;       // flatcase
    int TWOWORDS;       // UPPERCASE
    int twoWords;       // camelCase
    int TwoWords;       // PascalCase
    int two_words;      // snake_case
    int TWO_WORDS;      // SCREAMING SNAKE CASE
    int two_Words;      // camel_Snake_Case
    int Two_Words;      // Pascal_Snake_Case
    /**
     * @ref for more in naming conventions
     * https://medium.com/wix-engineering/naming-convention-8-basic-rules-for-any-piece-of-code-c4c5f65b0c09
     * https://en.wikipedia.org/wiki/Naming_convention_(programming)#:~:text=In%20computer%20programming,%20a%20naming,in%20source%20code%20and%20documentation.
     */

    return 0;
}