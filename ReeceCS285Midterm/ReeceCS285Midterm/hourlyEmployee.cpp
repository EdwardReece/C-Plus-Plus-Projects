//
//  hourlyEmployee.cpp
//  ReeceCS285Midterm
//
//  Created by Edward Reece on 4/2/20.
//  Copyright © 2020 Edward Reece. All rights reserved.
//
#include "employee.hpp"
#include "hourlyEmployee.hpp"
//contructor
hourlyEmployee::hourlyEmployee(string name, string department, string title, double tax, double payRate, double hoursWorked ) : Employee(name, department, title, tax, payRate){
    
    setHours(hoursWorked);
}

//Print employee details
void hourlyEmployee::print(){
    cout << fixed << setprecision(2) << "Empolyee Type: Hourly" << " | Wage $" << getPay() << "\nName: " << getName() << " | Department: " << getDepartment() << " | Title: " << getTitle() << "\nGross Pay: $" << grossPay() << " | Net Pay: $" << netPay()  << " | Tax: $" << taxPaid() << "\n\n" << endl;
}
//get pay before taxes and applys OT multiplier
double hourlyEmployee::grossPay(){
    if(hours <= 40) {
        return hours * getPay();
    }
    else{
        return (getPay() * 40) + (hours - 40) * ((getPay() * 1.5));
    };
}
//get the 
double hourlyEmployee::netPay(){
            return grossPay() - (grossPay() * getTax());
        }

//getters
double hourlyEmployee::getHours(){
    return hours;
}
//setters

void hourlyEmployee::setHours(double hoursWorked){
    hours = hoursWorked;
}

