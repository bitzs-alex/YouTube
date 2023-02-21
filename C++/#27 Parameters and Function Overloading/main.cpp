/**
 * @file main.cpp
 * @author Bitzs Alex (bitzs@bitzsspace.com)
 * @brief
 *  Parameter is a Variable defined when creating a Function
 *  Argument is the value passed to the Function when calling
 * 
 * 
 * We can set a default value for a Parameter when creating it
 * If we have a multiple parameters, it's not allowed to assign a default value
 *  for the left element before setting a default value for the right one.
 * 
 * 
 * Passing an array
 *  Done just like we pass variables
 * 
 * 
 * Function Signature
 *  The name of a function, and it's parameters type and number constitute the 
 *  it's signature.
 * - If there exist two functions with the same name but different in their parameter 
 *  they said to be Overloaded.
 * 
 * 
 * @version 0.1
 * @date 2023-02-04
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>
using namespace std;

// declaring
void printRecipe();
float totalExpectedInjeras(float);
float totalBakingMinutes(float);
float remainingMinutes(float, int);

// defining
void printRecipe() {
    cout << "I am making Injera" << endl;
}

/**
 * @brief Calculates expected number of Injeras from a given litter of Lit
 *  We assume, 1 Litter of lit will give us 2 baked Injeras
 * 
 * @param amountInLitter 
 * @return float 
 */
float totalExpectedInjeras(float amountInLitter = 5) {
    return amountInLitter * 2;
}

/**
 * @brief Calculates the total time required to bake an Injera
 *  We assume, baking one single Inera take 5 mins
 * 
 * @param amountInLitter the amount of lit in litters
 * @return float in minutes
 */
float totalBakingMinutes(float amountInLitter) {
    return totalExpectedInjeras(amountInLitter) * 5;
    // changing it into hours
}

/**
 * @brief Calculates the remaining time to finish baking Injera
 *  We assume, baking one single Inera take 5 mins
 * 
 * @param amountInLitter 
 * @param noOfBakedInjera 
 * @return float 
 */
// float remainingMinutes(float amountInLitter = 5, int noOfBakedInjera) {  // This is a Syntax Error
// float remainingMinutes(float amountInLitter, int noOfBakedInjera = 8) {  // This is how it should be
float remainingMinutes(float amountInLitter = 5, int noOfBakedInjera = 8) {  // This can also be done
    float totalTime = totalBakingMinutes(amountInLitter);
    float bakedTime = noOfBakedInjera * 5;
    float remaining = totalTime - bakedTime;
    return remaining <= 0 ? 0 : remaining;
}

int getTotalExpectedInjeras(float litters[5]) {
    int sum = 0;
    for(int i = 0; i < 5; i++)
        sum += totalExpectedInjeras(litters[i]);

    return sum;
}

// Overloading Example
float absoluteFloat(float var) {
    if (var < 0.0)
        var = -var;
    return var;
}
int absoluteInt(int var) {
    if (var < 0.0)
        var = -var;
    return var;
}
// The following two are overloaded, now
float absolute(float var) {
    cout << "calling the Float one" << endl;
    if (var < 0.0)
        var = -var;
    return var;
}
int absolute(int var) {
    cout << "calling the Int one" << endl;
    if (var < 0.0)
        var = -var;
    return var;
}

// Ambiguity with Overloading
void printNumber(int num1, int num2 = 5) {
    cout << "First number: " << num1 << endl;
    cout << "Second number: " << num2 << endl;
}

void printNumber(int num) {
    cout << "The number is: " << num << endl;
}

int main() {
    // Show the difference in calling the functions
    // using cout, or storing to a variable
    // printRecipe();
    // totalExpectedInjeras();  // can be called like this, b/c of default parameter
    // totalBakingMinutes(5);
    // remainingMinutes(5, 8);

    // // with cout
    // cout << "Total expected Injeras are: " << totalExpectedInjeras() << endl;
    // cout << "Total expected minutes are: " << totalBakingMinutes(5) << endl;
    // cout << "The remaining minutes are: " << remainingMinutes(5, 8) << endl;

    // float litters[5] = {5, 6, 7, 8, 9};
    // cout << "The total number of Expected Injeras: " << getTotalExpectedInjeras(litters) << endl;

    // Function Overloading
    // absolute(5);
    // absolute(5.0f);
    return 0;
}