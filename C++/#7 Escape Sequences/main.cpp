/**
 * @file main.cpp
 * @author Bitzs Alex (bitzsspace.com)
 * @brief what are escape sequences in C++ and how to use them
 * @version 0.1
 * @date 2022-10-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>

using namespace std;

/**
 * Escape Sequences
 * ===========================
 * Escape sequences are used to represent certain special characters within string literals and character literals.
 * Usually the came handy when we are using cout (the Character output device)
 * 
 * The following are some of the escape characters we use in CPP:
 *  \"	double quote
 *  \'	single quote
 *  \?	question mark
 *  \\	backslash
 *  \a	audible bell
 *  \b	backspace
 *  \r	carriage return
 *  \t	horizontal tab
 *  \n	line feed - new line
 *  \f	form feed - new page
 *  \v	vertical tab
 * 
 * for more, you can refer:
 *  https://en.cppreference.com/w/cpp/language/escape
 */

int main() {
    // Double Quote
    cout << "He said \"I live in Addis\"" << endl;
    
    // single quotes
    cout << "I am quoting \'this\' word" << endl;
    
    // question mark
    cout << "Is this right\?" << endl;
    
    // Backslash
    // Because we are using backslash as a escaping character, we need to escape it if we want to use in inside a string literals
    cout << "This is for backslash \\, and we see only one backslash" << endl;
    
    // audible bell
    cout << "This statement initiates a notification bell in your system \a" << endl;
    
    // backspace
    // just like the backspace we have in our keyboard
    // in this case for the backspace to work we need a character after the backspace escape sequence
    cout << "This output won't be affected\b" << endl;
    cout << "But this will be\ba, because I have `a` after the escape sequence" << endl;

    // carriage return
    // just like backspace we need to have characters after the escape sequence
    // when characters found, it will start to replace the previous ones
    cout << "This output won't be affected\r" << endl;
    cout << "But this will be affected.\rSurprisingly you won't see the previous statement." << endl;
    cout << "But this is to make it easier\rAnd" << endl;

    // horizontal tab
    // just like a tab char we have in our keyboard
    cout << "\tThis will be tabbed" << endl;

    // newline, form feed - new page, vertical tab
    // an equivalent of `endl` command
    // represent a new line element
    cout << "My name" << endl << "is Bitzs" << endl << " can be written in one line" << endl;
    cout << "My name\nis Bitzs\n";

    // We can use multiple escape sequences in a single statement
    cout << "I am going to write this and go to new line like \nand write another newline \n\twith a tabbed content \n\n\n\n\nthen multiple new lines" << endl;
    return 0;
}