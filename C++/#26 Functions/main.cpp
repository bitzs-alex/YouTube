/**
 * @file main.cpp
 * @author Bitzs Alex (bitzs@bitzsspace.com)
 * @brief A function is a group of statements that perform a particular task.
 * You may define your own functions in C++.
 * 
 * Using functions can have many advantages, including the following:
 *  - You can reuse the code within a function.
 *  - You can easily test individual functions.
 *  - If it's necessary to make any code modifications, you can make modifications within a single function, without altering the program structure.
 *  - You can use the same function for different inputs. 
 * 
 *  In this tutorial, we will see:
 *  1. how to declare your own function
 *  2. How to define your own function
 *  3. How to call your own function
 * 
 * In addition to that, we will see how to assign a default value for a parameter.
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
float totalExpectedInjeras(float amountInLitter) {
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
float remainingMinutes(float amountInLitter, int noOfBakedInjera) {
    float totalTime = totalBakingMinutes(amountInLitter);
    float bakedTime = noOfBakedInjera * 5;
    float remaining = totalTime - bakedTime;
    return remaining <= 0 ? 0 : remaining;
}

int main() {
    // Show the difference in calling the functions
    // using cout, or storing to a variable
    printRecipe();
    totalExpectedInjeras(5);
    totalBakingMinutes(5);
    remainingMinutes(5, 8);

    // with cout
    cout << "Total expected Injeras are: " << totalExpectedInjeras(5) << endl;
    cout << "Total expected minutes are: " << totalBakingMinutes(5) << endl;
    cout << "The remaining minutes are: " << remainingMinutes(5, 8) << endl;
    return 0;
}