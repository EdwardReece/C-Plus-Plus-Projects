//
//  main.cpp
//  ReeceCS285Midterm
//
//  Created by Edward Reece on 4/2/20.
//  Copyright © 2020 Edward Reece. All rights reserved.
//
#include "hourlyEmployee.hpp"
#include "salaryEmployee.hpp"

double avgNet = 0;

int main() {
    
    Employee * employees[6];
    
    employees[0] = new salaryEmployee("Matthew", "Management", "SuperVisor", 0.30, 76000.00);
    
    employees[1] = new salaryEmployee("Cody", "Shipping", "Lead", 0.30, 57000.00);
    
    employees[2] = new salaryEmployee("Samantha", "Receiving", "Lead", 0.30, 53600.00);
    
    
    employees[3] = new hourlyEmployee("Deacon", "Cutting", "WareHouse Specialist", 0.30, 21.38, 63);
    
    employees[4] = new hourlyEmployee("Maggie", "Picking", "Order Filler", 0.30, 15.98, 56);
    
    employees[5] = new hourlyEmployee("Amelia", "Parcels", "Order Filler", 0.30, 16.23, 40);
    
    for (int i = 0; i < 6; i++) {
        employees[i]->print();
        avgNet += employees[i]->netPay();
    }
    avgNet = avgNet / 6;
    cout << "The average net pay: $" << avgNet << "\n"<< endl;
    
    return 0;
}
