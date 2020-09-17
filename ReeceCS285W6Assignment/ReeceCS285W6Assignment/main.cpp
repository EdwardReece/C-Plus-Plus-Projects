//
//  main.cpp
//  ReeceCS285W6Assignment
//
//  Created by Edward Reece on 4/16/20.
//  Copyright © 2020 Edward Reece. All rights reserved.
//
#include "vector.h"
#include <iostream>
#include <string>


int main(){
    //define test vector(s)
    //add values to the vector(s)-
    //nameLists
    myVector<string> nameList;
    nameList.push_back("Cody");
    nameList.push_back("Sam");
    nameList.push_back("Deacon");
    nameList.push_back("Maggie");
    nameList.push_back("Amelia");
    //numberLists
    myVector<int> numberList;
    numberList.push_back(746);
    numberList.push_back(74);
    numberList.push_back(67);
    numberList.push_back(493);
    numberList.push_back(8);
    //print sorted vector using range based for loop
    //test sort methods
    nameList.bubbleSort();
    for(string i : nameList){
        cout<< i << ", ";
    }
    cout<<endl;
    numberList.insertionSort();
    for(int i : numberList){
        cout<< i << ", ";
    }
    //test search methods
    //binary
    cout<<endl;
    if(numberList.binarySearch(74)){
          cout<<"That number is in the list"<<endl;
    }else{
        cout<<"That number is not in the list"<<endl;
        }
    //seq
    if(nameList.seqSearch("Amelia")){
        if(nameList.seqSearch("Cody")){
            cout<< "Both Amelia and Cody are in the list"<<endl;
        }
    }else{
        cout<<"Neither Amelia or Cody are found in the list"<<endl;
    }
    //define new test vector(s)
    myVector<float> decimalList;
    //add values to the vector(s)
    decimalList.push_back(74.6);
    decimalList.push_back(74.68);
    decimalList.push_back(6.7);
    decimalList.push_back(4.93);
    decimalList.push_back(8.98);
    decimalList.push_back(74.5336);
    decimalList.push_back(7543.4);
    decimalList.push_back(67.976);
    decimalList.push_back(.493);
    decimalList.push_back(.008);
    //define an iterator to each of the above vector containers
    vector<float>::iterator startIr = decimalList.begin();
    vector<float>::iterator endIr = decimalList.end();
    //test the STL sort method
    sort(startIr, endIr);
    //print the resulting vector(s) using an iterator
    for(auto i : decimalList){
        cout<<i<<" ";
    }
    cout<<endl;
    //test the STL binary_search algorithm
    if(binary_search(startIr, endIr, 74.5336)){
        cout<<"found in list"<<endl;
    }else{
        cout<<"not found in list"<<endl;
    }
    return 0;
}
