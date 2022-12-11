/**
 * @file main.cpp
 * @author Bitzs Alex (bitzsspace.com)
 * @brief Dive deep into Arrays in CPP
 * Initializing arrays
 *  Just like variables, there are different ways of initializing arrays
 * 
 * Way of accessing array elements using for loop revision
 * Getting the size of an array
 *  There is no direct way to get the number of elements in C++
 *  We can leverage the use of `sizeof` operator to get the number of elements in an array
 * 
 * For each loop (specific to arrays)
 * 
 * @version 0.1
 * @date 2022-12-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

int main() {
    // array declaration
    int ages[5];
    cout << ages[0] << endl;  // we don't know what kind of value we will get

    // moreover, we get a dummy value for all of the elements in the array
    for (int itr = 0; itr < 5; itr++)
        cout << ages[itr] << endl;

    // initialization
    float grades[5] = {98, 94, 68, 87, 75};
    cout << grades[0] << endl;  // we are certain that we will get 98
    
    // moreover, we know the exact values for all of the elements in the array
    for (int itr = 0; itr < 5; itr++)
        cout << grades[itr] << endl;

    // declaration and initialization difference
    float scores[5] {98.67, 94.54};  // what will happen for elements at indexes 2, 3, and 4?
    // the compiler is smart, it will fill the empty elements by zero
    for (int itr = 0; itr < 5; itr++)
        cout << scores[itr] << endl;

    // so if we want to initialize the whole array filled with zeros, we can do as follows
    float allZeros[10] {};  // it will fill all elements with zero
    for (int itr = 0; itr < 10; itr++)
        cout << allZeros[itr] << endl;

    // we can also leave the number of elements, if we are not sure how many elements we want to initialize
    int numbers[] {5, 7, 29, 14};  // this determine the size of the array automatically

    // at this time we are not quite sure how many elements present in the array
    // writing a for loop like above will become difficult
    // so let's calculate the number of elements in the array
    // getting number of elements in array
    cout << sizeof(numbers) << endl;  // will tell us the total size of the array (don't forget, arrays are collection of variables)
    cout << sizeof(int) << endl;  // will give us the size of the data type
    cout << sizeof(numbers) / sizeof(int) << endl;  // dividing the total size by each individual size will give us the number of elements

    // now it will become easier to write a for loop like above
    int len = sizeof(numbers) / sizeof(int);
    for (int itr = 0; itr < len; itr++)
        cout << numbers[itr] << endl;

    // wait!!! There isn't simpler way where we can loop through array elements?
    // Finding the number of elements, and wratting an exclusive for loop looks like a heck of a job
    // that's where foreach loop comes into play
    // syntax of foreach loop

    // for (<type_of_array> <variable_name>: <the_array_we_want_to_access>)
    //     each element's value will be stored in <variable_name> iteratively
    for (int number: numbers)
        cout << number << endl;

    // can we put float on integer or vice versa?
    // no problem, but the compiler performs implicit casting
    for (int number: scores)  // accessing floats as integer
        cout << number << endl;

    for (float number: numbers)  // accessing integers as floats
        cout << number << endl;

    // having the above concept, we can do the following
    int asciis[] {70, 81, 77, 98, 104, 68};
    for (char ch: asciis)
        cout << ch << endl;

    char chars[] {'A', 'd', 'h', 'K', 'D', 'Z'};
    for (int ascii: chars)
        cout << ascii << endl;

    return 0;
}