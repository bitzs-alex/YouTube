/**
 * @file main.cpp
 * @author Bitzs Alex (bitzs@bitzsspace.com)
 * @brief About Recursive Functions
 * @version 0.1
 * @date 2023-02-21
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>
using namespace std;

// recursion means in a nutshell a Function calling itself again and again
// loops are the same thing repeated over and over again
// recursion are, one problem broken down into small manageable chunks
// example: It is necessary to eat every day to survive but you don't eat the whole day
    // rather you eat in a breakfast, lunch, and dinner manner
// eating everyday is just like loops
// breaking down the eating habit to breakfast, lunch, and dinner is recursion
// reference: https://codecoda.com/en/blog/entry/loops-or-recursion-what-are-the-differences
// https://www.codeproject.com/Tips/1002732/Recursive-function-vs-Loop

void fibonnaci(int number, int init = 0, int next = 1) {
    if (number < init)
        return;
    else {
        cout << init << ' ';
        next += init;
        init = next - init;
        fibonnaci(number, init, next);
    }
}

int main()
{
    int n = 9;
    // fibonnaci(n);

    // most of the tasks handled by recursion can
    // also be handled by loops
    int prev = 0, next = 1;
    while (prev < n) {
        cout << prev << " ";
        next += prev;
        prev = next - prev;
    }


    // Mario is playing a game of minesweeper, but he keeps losing horribly. He would like to know how many clusters of mines there are.
    // A cluster is defined as a group of mines surrounded by land and is formed by connecting adjacent mines horizontally or vertically.
    // Given an M x N 2D binary grid, where each ith, jth coordinate is either a 1 or 0 (mine or land), find out how many clusters of mines there are.

    // Example 1
    // Input: grid = [
    //     ["1","1","0","0","0"],
    //     ["1","1","0","0","0"],
    //     ["0","0","1","0","0"],
    //     ["0","0","0","1","1"]
    // ]
    // Output: 3
    return 0;
}