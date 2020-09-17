//
//  main.cpp
//  ReeceCS285W7Assignment
//
//  Created by Edward Reece on 4/26/20.
//  Copyright © 2020 Edward Reece. All rights reserved.

#include <iostream>
#include "linkedList.h"
#include <vector>

using namespace std;

int main()
{

    
    vector<int> vec1;
    vector<int> vec2;
    vector<int> vec3;
    vector<int> vec4;
    
    vec1.push_back(23);
    vec1.push_back(43);
    vec2.push_back(54);
    vec2.push_back(65);
    
    vec3.push_back(12);
    vec3.push_back(32);
    vec4.push_back(98);
    vec4.push_back(67);
  
    linkedListType<vector<int>> list1;
    linkedListType<vector<int>> list2;
    
    list1.insertFirst(vec1);
    list1.insertFirst(vec2);
    
    list2.insertFirst(vec3);
    list2.insertFirst(vec4);
    
    list1.print();
    
    
    

    return 0;
}            
