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
 * Variables are name of memory areas to hold a value
 * 
 * NOTE:
 * CPP is strongly typed programming language, i.e., 
 * the data type has to be specified when declaring a variable
 * 
 * NOTE:
 * Identifiers are just names for data items; it could be variable name or class name
 */

int main() {
    // strongly typed
    int age;  // age's data type must be specified


    // loosely typed and strongly typed programming languages
    // name = "Abebe";
    // name = 23;
    // name = 7.6;


    // Declaration vs Initialization
    int sum;  // just declaring the variable
    int total = 45;  // initialization, i.e., declaring and assigning initial value
	
	
    /*
	
    In the above declarations and initializations, the age, sum, and total are valid identifiers.

    @ref for more keywords
    https://en.cppreference.com/w/cpp/keyword
    */


    // Checking a variable is a memory location
    cout << "total variable : " << total << endl;
    cout << "Getting memory location of total variable : " << &total << endl;
    cout << "Accessing the value stored in the memory location of total variable : " << *(&total) << endl;
	// We will talk about this concept in detail once we get to Pointers
	
	
	/* 
	Identifier naming rules
	=======================
	Identifiers in CPP formed from chars (A-Za-z), digits (0-9), and underscore (_)
	Identifiers must not start with digits
	Identifiers can range from 1 to 255 characters
	Associating identifiers with their purpose is a good technique to develop
	*/
	int age;
    int age1;
    int age_1;
    int _age;
    int Age;
	/*
	The above declarations are completely valid.
	
	Invalid identifiers would be:
        1sum => started with digit
        long => can not be a reserved keyword
        total age => contains space

    identifier names, can not be keywords
        int, return, bool, double
        int double;
        int long;
	*/
	

    /*
	Identifiers in CPP are case sensetive
	
    Naming Conventions
    Case sensetivity
        sum and Sum are complete different identifiers
    */
    string twowords;       // flatcase
    string TWOWORDS;       // UPPERCASE
    string twoWords;       // camelCase
    string TwoWords;       // PascalCase
    string two_words;      // snake_case
    string TWO_WORDS;      // SCREAMING SNAKE CASE
    string two_Words;      // camel_Snake_Case
    string Two_Words;      // Pascal_Snake_Case
    /**
     * @ref for more in naming conventions
     * https://medium.com/wix-engineering/naming-convention-8-basic-rules-for-any-piece-of-code-c4c5f65b0c09
     * https://en.wikipedia.org/wiki/Naming_convention_(programming)#:~:text=In%20computer%20programming,%20a%20naming,in%20source%20code%20and%20documentation.
     */


    /**
     * Declaring multiple variables in a single line
     * When multiple variables have the same type, we can declare them in one go
     */
    int x1, x2, x3, x4;

    return 0;
}