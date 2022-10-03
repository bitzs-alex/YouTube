/**
 * @file project_one.cpp
 * @author Bitzs Alex (bitzsspace.com)
 * @brief Project One on basics of CPP 
 * @version 0.1
 * @date 2022-08-27
 * 
 * @copyright Copyright (c) 2022
 * 
 * DESCRIPTION:
 * Let's say a car runs in average 21.5 miles per gallon when driven in town and
 * 26.8 miles per gallon when driven on the highway. Write a program that accepts 
 * the number of gallons a car can hold and displays the distance the car can travel
 * on one tank of gas when driven in town and when driven on the highway. 
 * 
 */

#include <iostream>

using namespace std;

int main() {
    int tankSize;
    float inTown = 21.5,
        inHighway = 26.8;

    cout << "Enter the number of gallons a car can hold: ";
    cin >> tankSize;

    // check the number of gallons is positive
    tankSize = tankSize < 0 ? -1 * tankSize : tankSize;

    cout << "The car runs for " << (tankSize * inTown) << " miles if driven in town" << endl;
    cout << "The car runs for "  << (tankSize * inHighway) << " miles if driven in highway" << endl;
    return 0;
}