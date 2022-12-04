/**
 * @file main.cpp
 * @author Bitzs Alex (bitzsspace.com)
 * @brief Introduction to Arrays
 * An array behaves like a list of variables with a uniform type and naming
 *  => Meaning: we can name as many variables as we want under the same name
 *  => In other words, it is a group of values referred by the same name
 * Array elements are stored in consecutive memory locations
 * 
 * NB: The individual values in array are called elements
 *  - Each elements of an array are identified by their own unique index
 *  - The first element in an array always has the index 0
 *  - If the array has n elements the last element will have the index n-1
 *  - The ith element is at index i-1. Hence, if we want to access the 15th element, it has the index of 14
 *  - It is illegal to refer to an element outside of the array bounds
 *      the program will crash or have unexpected results, depending on the compiler
 * 
 * In cpp there is no easy way to get the numer of elements
 *  - There is a workaround though, we can get the number of elements using the sizeof operator
 * 
 * @version 0.1
 * @date 2022-12-04
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

int main() {
    // syntax of variable declaration
    // data_type <variable_name>;
    // syntax of array declaration
    // data_type <array_name>[number_of_elements];
    // Nb: number_of_elements has to be an integer

    // if we want to declare five age variables of type integer
    int ages[5];
    ages[0];  // first element, 0 is it's index
    ages[1];
    ages[2];
    ages[3];
    ages[4];  // last element
    // indexes must be an int type

    // we can assign and access elements using their index
    cout << ages[0] << endl;  // either 0 or garbage value, depend on the compiler
    ages[0] = 76;
    cout << ages[0] << endl;  // now we will get 76

    // accessing an element outside the array bound
    cout << ages[7] << endl;  // garbage value or program crash, depend on the compiler
    cout << ages[-1] << endl;  // garbage value or program crash, depend on the compiler

    // why is it giving us a garbage value?
    // because array elements are stored consecutively,
    // when we are trying to access an element outside of the bound, 
    //      we are reading the value stored in a specific memory area
    for (int i = 0; i < 5; i++)
        cout << &ages[i] << endl;  // you can see, they are consecutive memory areas

    return 0;
}

