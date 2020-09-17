//
//  main.cpp
//  ReeceCS285W4Assignment
//
//  Created by Edward Reece on 3/31/20.
//
#include "rationalfractions.hpp"
#include <iostream>
using namespace std;

int main() {
    
    // Rational Operators
    fractionType f1;
    fractionType f2;
    fractionType f3;
    
    cout << "Enter a fraction: ";
    cin >>  f1;
    cout << "\nEnter another fraction: ";
    cin >> f2;
    f3 = f1 + f2;
    cout << f3 << " sum \n\n";
    f3 = f1 - f2;
    cout << f3 << " difference\n\n";
    f3 = f1 * f2;
    cout << f3 << " product \n\n";
    f3 = f1 / f2;
    cout << f3 << " quotient \n\n";
    return 0;
}
