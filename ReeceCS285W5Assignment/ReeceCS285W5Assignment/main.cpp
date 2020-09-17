//
//  main.cpp
//  ReeceCS285W5Assignment
//
//  Created by Edward Reece on 4/14/20.
//  Copyright © 2020 Edward Reece. All rights reserved.
//
//
#include "fractionType.hpp"
#include "fractionExceptions.h"
#include <exception>
#include <iostream>
#include <iomanip>                    // I got my Templates fixed, thank you for the example                                            attached to my week4 assignment that really helped

int main() {
    try{
        fractionType<int> num1(1,9);
        fractionType<int> num2(0,3);
        fractionType<int> num3;
        cout << fixed;
        cout << showpoint;
        cout << setprecision(2);
        
        num3 = num1 / num2;
             
        cout << num1 << " / " << num2 << " = " << num3 << endl;
    } catch (fractionException e) {
        cout << "Exception caught in main: " << e.what() << endl;
    }
    return 0;
}
