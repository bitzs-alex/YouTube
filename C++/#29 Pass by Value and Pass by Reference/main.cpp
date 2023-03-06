#include <iostream>
using namespace std;

/**
 * @brief Passing by Value and Reference
    We talked about variable storage classes and have seen that the local variables
        are not accessible to the outside
    What happens if we pass the local variable to the function and the function alters their value?
        => pass by value

    what happens if we want to let the function alter the value of our local variable?
        => pass by reference
 * 
 * @return int 
 */

void valueAlter(int value) {
    // altering the value of the argument
    value += 70;
}

void referenceAlter(int &value) {
    // altering the value of the argument
    value += 70;
}

int main() {
    int age = 67;
    cout << age << endl;  // checking the value before calling the function
    valueAlter(age);
    cout << age << endl;  // checking the value after calling the function

    cout << age << endl;  // checking the value before calling the function
    referenceAlter(age);
    cout << age << endl;  // checking the value after calling the function
    // see the change in the above line of code?
    // passing variables as a reference to a function affects the value of the local variable
    return 0;
}