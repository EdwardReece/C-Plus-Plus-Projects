//
//  main.cpp
//  ReeceCS285W8Assignment
//
//  Created by Edward Reece on 4/30/20.
//  Copyright © 2020 Edward Reece. All rights reserved.
//

#include <iostream>
#include "myStack.h"
 
using namespace std;
  
int main()
{
    vector<int> vec1;
    vector<int> vec2;
    
    vec1.push_back(43);
    vec1.push_back(29);
    vec1.push_back(45);

    vec2.push_back(67);
    vec2.push_back(42);
    vec2.push_back(9);
    
stackType<int> stack1;
stackType<int> stack2;
 
stack1.initializeStack();
stack1.push(vec1);
stack1.push(vec2);

 
stack2 = stack1;
 
if (stack1 == stack2)
cout << "stack1 and stack2 are identical" << endl;
else
cout << "stack1 and stack2 are not identical" << endl;
 
stack2.pop();
stack2.push(53);
 
cout << "**** After pop and push operations on stack2 ****" << endl;
if (stack1 == stack2)
cout << "stack1 and stack2 are identical" << endl;
else
cout << "stack1 and stack2 are not identical" << endl;
 
stack2.push(34);
 
cout << "**** After another push operation on stack2 ****" << endl;
if (stack1 == stack2)
cout << "stack1 and stack2 are identical" << endl;
else
cout << "stack1 and stack2 are not identical" << endl;
return 0;
}
 
