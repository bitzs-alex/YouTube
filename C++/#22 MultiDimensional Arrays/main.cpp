/**
 * @file main.cpp
 * @author Bitzs Alex (bitzsspace.com)
 * @brief Multi-Dimensional arrays
 * Declaration, Initialization, and Looping
 * @version 0.1
 * @date 2022-12-18
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

int main() {
    // Declaration
    float ages[5];  // only 5 elements
    float ages2D[2][5];  // 10 elements in total
    float ages3D[2][2][5];  // 20 elements in total

    cout << sizeof(ages) / sizeof(float) << endl;
    cout << sizeof(ages2D) / sizeof(float) << endl;
    cout << sizeof(ages3D) / sizeof(float) << endl;

    // Initialization
    int numbers[5] {1, 2, 3, 4, 5};
    // int numbers2D[2][5] {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};  // first method
    int numbers2D[2][5] {{1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}};  // second method
    // either way we can omit the value on the first box but not the second, like so
    // int numbers2D[][5] {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};  // first method
    // int numbers2D[][5] {{1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}};  // second method

    // accessing multi-dimensional arrays
    cout << numbers[0] << endl;  // the first element in single-dimensional array
    cout << numbers2D[0][0] << endl;  // the first element in multi-dimensional array

    // looping through multi-dimensional arrays
    // we use nested loop
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 5; j++)
            cout << numbers2D[i][j] << " " ;

        cout << endl;
    }

    // foreach
    for (int i: numbers)
        cout << i << " ";
    cout << endl;

    // since C++ is strongly typed programming language, we can't do
    for (int i: numbers2D) {  // here we are making mistake,
        for (int j: i)
            cout << j << " ";
        cout << endl;
    }

    // but we can use an 'auto' keyword instead
    for (auto &i: numbers2D) {
        for (auto &j: i)
            cout << j << " ";
        cout << endl;
    }
    return 0;
}