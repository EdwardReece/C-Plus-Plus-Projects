//
//  hourlyEmployee.hpp
//  ReeceCS285Midterm
//
//  Created by Edward Reece on 4/2/20.
//  Copyright © 2020 Edward Reece. All rights reserved.
//

#ifndef hourlyEmployee_hpp
#define hourlyEmployee_hpp

#include <iostream>
#include <stdio.h>
#include "employee.hpp"

using namespace std;

class hourlyEmployee : public Employee {
public:
    //constructor
    hourlyEmployee(string, string, string, double, double, double);
    
    //getters
    double getHours();
    
    //setters
    void setHours(double);
    
    //virtuals
    void print();
    double grossPay();
    double netPay();
    
private:
    //varible
    double hours;
    
};

#endif /* hourlyEmployee_hpp */
