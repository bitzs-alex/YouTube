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
 * A car with a 20 gallon gas tank averages 21.5 miles per gallon when driven in town and
 * 26.8 miles per gallon when driven on the highway. Write a program that calculates and displays
 * the distance the car can travel on one tank of gas when driven in town and when driven on the
 * highway. 
 * 
 */

#include <iostream>

using namespace std;

int main() {
    int tankSize = 20;
    float inTown = 21.5,
        inHighway = 26.8;

    cout << "The car runs for " << (tankSize * inTown) << " miles if driven in town" << endl;
    cout << "The car runs for "  << (tankSize * inHighway) << " miles if driven in highway" << endl;
    return 0;
}