/**
 * @file main.cpp
 * @author your name (you@domain.com)
 * @brief Strings in C++
 * Why Strings?
 *  In C++ there is no specific elementary variable type to store string of characters
 * There are two types of strings in C++
 *  1. C-String Type
 *  2. String Class
 * For each string types, we will look the
 *  - Declaration and Initialization
 *  - Accessing and Assigning string values
 *  - Input and Output
 *  - Functions to manipulate the values
 * 
 * @version 0.1
 * @date 2023-01-01
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    // C-String
    // An array of Characters plus one empty character ('\0') appended to the end of the string
    // Declaration
    // =====================
    // The general syntax looks like:
    // char string_name[max_C-string_size + 1];
    char hello_string[6];  // for string "Hello", Note the extra number of element
    cout << hello_string << endl;
    // hello_string = "Hello";  // just like normal array, this won't work out
    // Instead
    hello_string[0] = 'H';
    hello_string[1] = 'e';
    hello_string[2] = 'l';
    hello_string[3] = 'l';
    hello_string[4] = 'o';
    hello_string[5] = '\0';
    cout << hello_string << endl;


    // Initialization
    // =====================
    // General syntax look like:
    // char string_name[] = "";  // using double quote
    // char string_name[] {'', '', '', ..., '\0'};  // collection of characters
    char world_string[] = "World";
    char world_string_1[10] {'W', 'o', 'r', 'l', 'd', '\0'};  // array can hold empty elements, which we don't need
    char world_string_2[10] {'W', 'o', 'r', 'l', 'd'};  // will make it regular array
    // give a special attention for the single and double quotes

    // difference from regular character arrays
    char name_s[] = "Betizazu";
    char name_c[] = {'B', 'e', 't', 'i', 'z', 'a', 'z', 'u', '\0'};
    char name_r[] = {'B', 'e', 't', 'i', 'z', 'a', 'z', 'u'};
    cout << "String array negative indexes: " << endl;
    for (int i = 1; i <= 9; i++)
        cout << name_s[-i] << endl;
    cout << "Regular char array negative indexs: " << endl;
    for (int i = 1; i <= 9; i++)
        cout << name_r[-i] << endl;


    // Accessing and assigning values
    // ===============================
    // to access the individual characters
    cout << "First char: " << name_s[0] << endl;  // just like regular array
    // It is impossible to assign a new value for cString like
    // name_s = "New name";
    // but we can assign, each character one by one
    name_s[0] = 'N';
    name_s[1] = 'e';
    name_s[2] = 'w';
    name_s[3] = ' ';  // and so on


    // Output and Input
    // =====================
    cout << "Enter new name: ";
    cin >> name_s;
    cout << "Your new name is: " << name_s << endl;
    // if you want to assign new value for existing cstring, you have three options
    // 1. change each elements value one by one
    // 2. use it in input statement
    // 3. use a string copy function (we will see later)

    // to clear the input object
    cin.clear();

    // reference video, Console Input Output
    // accepting string that contains space
    char fullName[33];
    cout << "Enter your Full Name: ";
    cin >> fullName;  // won't accept spaces
    cout << "Your Full Name is: " << fullName << endl;

    // // to clear the input object
    // cin.clear();

    // // using getline function
    // cout << "Enter your Full Name: ";
    // cin.getline(fullName, 32);  // the last position will be for empty statement
    // cout << "Your Full Name is: " << fullName << endl;


    // Functions to manipulate CStrings
    // =================================
    // converting cstrings to other types
    // atoi: converts string to int type.
    // atol: converts string to long type.
    // atof: converts string to float type.
    char yearOfBirth[] = "1995",
        currentYear[] = "2023";
    cout << "Calculated age is: " << atoi(currentYear) - atoi(yearOfBirth) << endl;
    
    // other functions
    // checking the length of a string
    char name[] = "Betizazu",
        fName[32],
        fullName[32] = "Mr. ";
    cout << strlen(name) << endl; // Dispalys: 8
    cout << strlen(fName) << endl; // Dispalys: 0
    cout << strlen(fullName) << endl; // Dispalys: 4

    // copying string to array
    strcpy(fName, "Alemu");
    cout << fName << endl; // Displays: Alemu
    cout << strlen(fName) << endl;  // Displays: 5

    // copying specific length of String to array
    strncpy(fName, "Alemu Desalegn", 7);
    cout << fName << endl; // Displays: Alemu D

    // Differences of strcpy and strncpy
    strncpy(fName, "Desalegn", 3);
    cout << fName << endl; // Displays: Desmu D
    strcpy(fName, "Bitzs");
    cout << fName << endl; // Displays: Bitzs

    // concatenating strings
    strcat(fullName, name);
    cout << fullName << endl; // Displays: Mr. Betizazu

    // concatenating specific number of characters
    strncat(fullName, name, 5);
    cout << fullName << endl; // Displays: Mr. BetizazuBetiz

    // comparing strings
    // Returns 0 if the strings are equal
    // Returns negative value if the first is less than the second string
    // Returns positive value if the first is greater than the second string
    strcpy(fName, "Alemu D");
    strcpy(fullName, "Mr. Betizazu");
    cout << strcmp(name, "Betizazu") << endl;  // Displays: 0
    cout << strcmp(name, fullName) << endl;  // Displays: -1
    cout << strcmp(fullName, fName) << endl;  // Displays: 1

    // Compares only the first three letters
    cout << strncmp("Betizazu", name, 3) << endl; // Displays: 0
    return 0;
}
