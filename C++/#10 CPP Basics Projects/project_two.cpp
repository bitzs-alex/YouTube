/**
 * @file project_two.cpp
 * @author Bitzs Alex (bitzsspace.com)
 * @brief Project Two on basics of CPP
 * @version 0.1
 * @date 2022-08-27
 * 
 * @copyright Copyright (c) 2022
 * 
 * DESCRIPTION:
 * One way to measure the amount of energy that is expended during exercise is to 
 * use metabolic equivalents (MET). Here are some METS for various activities: 
 *      Running: 10 METS 
 *      Basketball: 8 METS 
 *      Sleeping: 1 MET 
 * The number of calories burned per minute may be estimated using the formula 
 *      Calories/Minute = 0.0175 × 1 MET × (Weight in kilograms) 
 * Write a program that inputs a subject’s weight in pounds, the number of METS 
 * for an activity, and the number of minutes spent on that activity, and then outputs
 * an estimate for the total number of calories burned. One kilogram is equal 
 * to 2.2 pounds
 * 
 */

#include <iostream>

using namespace std;

int main() {
    // declaring and initiating necessary variables
    int runningMETS = 10,
        basketballMETS = 8,
        sleepingMET = 1,
        running,
        basketball,
        sleeping;
    float weight,
        calories;

    // Getting weight input
    cout << "Enter your weight in pounds (lbs) : ";
    cin >> weight;

    // Getting running input
    cout << "Enter the time you spent running in minutes : ";
    cin >> running;

    // Getting basketball input
    cout << "Enter the time you spent playing basketball in minutes : ";
    cin >> basketball;

    // getting sleeping input
    cout << "Enter the time you spent sleeping in minutes : ";
    cin >> sleeping;

    // Calculating the METS for each
    running *= runningMETS;
    basketball *= basketballMETS;
    sleeping *= sleepingMET;

    // Calculating the Calories burned
    calories = 0.0175 * (running + basketball + sleeping) * weight;

    // Showing the results
    cout << "The estimate calories you have burnt are : " << calories << " Kcal" << endl;

    // Further expansion
    // check the inserted values are positive, if not convert them
    return 0;
}