//
//  salaryEmployee.hpp
//  ReeceCS285Midterm
//
//  Created by Edward Reece on 4/2/20.
//  Copyright © 2020 Edward Reece. All rights reserved.
//

#ifndef salaryEmployee_hpp
#define salaryEmployee_hpp

#include <iostream>
#include <stdio.h>
#include "employee.hpp"

using namespace std;

class salaryEmployee : public Employee {
public:
    
    salaryEmployee(string, string, string, double, double);
    
    //virtuals
    void print();
    double grossPay();
    double netPay();
    
};

#endif /* salaryEmployee_hpp */
