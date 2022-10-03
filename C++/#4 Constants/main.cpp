/**
 * @file constants.cpp
 * @author Bitzs Alex (bitzsspace.com)
 * @brief this is a program to practice the two different ways of creating constants and play with them
 * @version 0.1
 * @date 2022-08-24
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <math.h>

using namespace std;

// Method 1: Macro Constant
#define GRAVITY 9.8
// Syntax: #define VARIABLE_NAME Value
/**
 * @ref for more
 * https://docs.microsoft.com/en-us/cpp/preprocessor/hash-define-directive-c-cpp?view=msvc-170
 */

// Method 2: using const keyword
const float PI = 3.14;
// Syntax: const D_TYPE VARIABLE_NAME = Value;

/**
 * NOTE:
 * Constants can be defined anywhere we like them to be defined.
 * It is the standard to define them on top of the file below include statements
 * since their value isn't changeable but we can't use them before defining them
 * just like variables
 * 
 * NOTE:
 * It is a convention to name constants as CAPS_LETTER to signify they are constant values
 * 
 * NOTE:
 * The difference between the first method and the second method is that, the first method is 
 * instructing the compiler to go ahead and substitute the name by the value; the second one
 * instead hold the value in the computer memory
 */

int main() {
	// Initialization
	// We can't assign value after declaration
	
    cout << GRAVITY << " and " << PI << endl;

    // Won't work, using before defining
    // cout << TRUE << endl;

    // We can define them here as well
    #define TRUE 1
    const int FALSE = 0;

    cout << TRUE << " and " << FALSE << endl;

    // We can't change constants value
    // GRAVITY = 10.0;
	
	// Defining our own Macro Constants
    #define SIGNED_SIZE(x) (pow(2, (sizeof(x) * 8) - 1))
    #define UNSIGNED_SIZE(x) (pow(2, (sizeof(x) * 8)) - 1)

    return 0;
}