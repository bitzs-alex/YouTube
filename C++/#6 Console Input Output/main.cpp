/**
 * @file main.cpp
 * @author Bitzs Alex (bitzsspace.com)
 * @brief Basic character input and output devices in CPP
 * @version 0.1
 * @date 2022-08-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>

using namespace std;

/**
 * NOTE:
 * cout (character output device)
 *  prints characters within double quotes
 *  it can also print numeric values
 *  we can also print characters and numbers within the same cout device
 *  we can also use cerr instead of cout but cerr is an error output device
 * 
 * cin (character input device)
 *  accepts character input from the console
 *  uses implicit casting to accept numeric values
 *  we can accept two values using the same cin device
 *  falls short when trying to insert statements
 * 
 * getline
 *  extracts characters from cin device
 *  accept optional delimeter character
 *  if delimeter is set, it extracts until the delimeter
 *  if delimeter isn't set it extracts the whole character
 *  if there are other cin devices either on top or bottom it behaves different
 *  to fix the issue we use cin.ignore()
 */

int main() {
    int age = 72;
    string name = "this is me";

    cout << "This is cout statement" << endl;
    cout << "My age is : " << age << endl;

    cerr << "The same output but with cerr" << endl;

    // cin
    cout << "Give me your name : ";
    cin >> name;
    cout << "Hola, " << name << endl;

    cout << "Give me your age : ";
    cin >> age;
    cout << "Are you serious?! You are " << age << endl;

    // Full name
    cout << "Give me your full name : ";
    cin >> name;  // Bitzs Alex => won't work here
    cout << "Is it `" << name << "` your full name?" << endl;

    cin.clear();
    cin.ignore(100, '\n');
    /**
     * @ref for more in cin.ignore()
     * https://cplusplus.com/forum/beginner/182128/
     */

    cout << "Give me your full name : ";
    getline(cin, name);  // getline without delimeter
    cout << "Your full name must be : " << name << endl;

    // cout << "Give me your full name : ";
    // getline(cin, name, 'e');  // getline with delimeter
    // // if delimeter not found, it extracts the whole string
    // cout << "Your full name surly : " << name << endl;
    
    return 0;
}