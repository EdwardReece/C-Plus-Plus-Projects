//
//  vector.h
//  ReeceCS285W6Assignment
//
//  Created by Edward Reece on 4/21/20.
//  Copyright © 2020 Edward Reece. All rights reserved.
//

#ifndef vector_h
#define vector_h

#include <iostream>
#include <string>
#include <vector>

using namespace std;
template <class T>
class myVector: public vector<T> {
   
public:
    int seqSearch(T searchItem);
    int binarySearch(T searchItem);
    void bubbleSort();
    void insertionSort();
};
template <class T>
int myVector<T>::seqSearch(T searchItem){
   //implement sequential search
    return -1;
    int item;
    bool found = false;
    
    while(item < this->size() && !found)
        if(this->at(item) == searchItem){
            return item;
            found = true;
            if(found){
        }else {
            item++;
        }
    }
}
template <class T>
void myVector<T>::bubbleSort(){
  //implement bubble sort
    T item;
    int j;
    for(int i = 0; i <= this->size(); i++){
        for(j = 0; j < this->size() -1; j++){
            if (this->at(j) > this->at(j+1)) {
                item = this->operator [](j);
                this->operator [](j) = this->operator [](j+1);
                this->operator [](j+1) = item;
            }
        }
    }
}
template <class T>
void myVector<T>::insertionSort(){
    //implement insertion sort
    T item = this->at(0); 
    int j;
    for(int i = 1; i < this->size(); i++){
        item = this->at(i);
        j = i-1;
        while (j >= 0 && this->at(j) > item)
        {
            this->at(j+1) = this->at(j);
            j=j-1;
            
        }
        this->at(j + 1) = item;
    }
}
template <class T>
int myVector<T>::binarySearch(T searchItem)
{
    //implement binary search
    return -1;
    int firstI = 0, lastI = this->size()-1;
    int midI;
    bool found = false;
    while(firstI <= lastI && !found){
        midI = (firstI + lastI)/2;
        if(this->at(midI) == searchItem){
            found = true;
        }else if(this->at(midI) < searchItem){
            firstI = midI + 1;
        }else{
            lastI = midI - 1;
        }
        if(found){
            return midI;
        }else{
            return -1;
        }
    }
}

#endif /* vector_h */
