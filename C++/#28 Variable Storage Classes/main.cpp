#include <iostream>
#include <string>

using namespace std;

/**
 * @brief Variable Storage Class
 * A Variable Storage class controls two different properties of a Variable
 *      - Lifetime (how long a variable can exist)
 *      - Scope (which part of the program can access it)
 *
 * Starting from c++ version 11, there are four types of Variable Storage Classes
        1. Global Variable
        2. Local Variable
        3. Static Variable
        4. Thread Storage

    In this class, we won't be looking at Thread Storage variables since the knowledge of
        thread is necessary. If you would like to know more about them, use the following link:
        https://www.codeproject.com/Articles/8113/Thread-Local-Storage-The-C-Way
 * Note: Register variable is a type which is deprecated in C++ version 11
 * 
 * @return int 
 */

void printItBefore() {
    // cout << outside << endl;
    // even if a variable is global, we can't access it before we declaring it.
}

string outside = "I am global";
// global variable is accessible to all the functions
// their lifetime is from the moment of declaration til the end of the program
// the variable 'outside' is accessible to 'printLocal' and 'main' functions

void printLocal() {
    // cout << local << endl;
    // the above statement won't even compiled
    // the reason, the variable 'local' is accessible only inside 'funcWithLocal' function
    // You might say, 'We are accessing it before declaring it'
    //  even if we change the position of our printLocal function, we won't be able to access it
    cout << outside << endl;  // this is possible
    outside += " added something";  // can be modified too
}

void funcWithLocal() {
    // 'local' variable is local to this function
    string local = "I am local";
    // Local variable lifetime ends when the function exits (finished it's execution)
    // Local variable scope is limited to the function where it is defined

    // The disadvantages of local variables are their values won't be accessible to any other function
    // In addition to their accessibility, they will be recreated every time the function is called which causes value reinitialization
        // The previous values will be lost
        // this is because of their lifespan
    cout << local << endl;
}

void funcWithStatic() {
    // static variables are just like local variables
    // they get initiated once (i.e., the first time the function is being called)
    static string staticLocal = "I am a static Local";
    cout << staticLocal << endl;  // observe the occurance of the word 'count' every time the function is called
    staticLocal += " count";
    // static variables scope is only within the function (just like local variables)
    // their lifespan is from the moment of declaration, till the end of the program
}

int main() {
    funcWithLocal();
    printLocal();
    cout << outside << endl; // observe the change made by 'printLocal' function
    outside = "new string";  // it is possible to alter the value here as well
    // global variables down side is, they can be altered at any given point in the program
    printItBefore();
    funcWithStatic();  // first call
    funcWithStatic();  // second call
    funcWithStatic();  // third call

    // We all know that we can't declare the same variable within the same scope
    int localInt = 65;
    // after the above line, I can't re declare the variable 'localInt' again
    // int localInt = 76;  // won't work
    // If so, what will happen if I redeclare the global variable inside local function?
    string outside = "I am inside main";  // for example

    // okay, I can declare a variable but what do you think will happen if, it tried to access it
    // or alter it's value? Like the following:
    cout << outside << endl;
    outside += " adding extra text";
    cout << outside << endl;

    // I can only access the value of the local variable, what can I do to access the global variable then?
    // we use a scope resolution operator (::)
    ::outside += " you can alter me";
    cout << ::outside << endl;
    return 0;
}