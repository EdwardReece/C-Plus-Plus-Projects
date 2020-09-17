//
//  fractionType.cpp
//  ReeceCS285W5Assignment
//
//  Created by Edward Reece on 4/14/20.
//  Copyright © 2020 Edward Reece. All rights reserved.


#include "fractionType.hpp"

//overload stream extraction and insertion
//ostream& operator << (ostream& osThing,const fractionType& Fr){
//    osThing << Fr.N << "/" << Fr.D;
//    return osThing;
//}
//
//istream& operator >> (istream& isThing, fractionType& Fr){
//    char ch;
//    isThing >> Fr.N >> ch >> Fr.D;
//    return isThing;
//}
//operators overloaders
//fractionType operator + (const fractionType& other) {
//    fractionType<T> Fr;
//    Fr.D = D * other.D;
//    Fr.N = (N * other.D) + (D * other.N);
//    return Fr;
//}

//fractionType operator - (const fractionType& other) {
//    fractionType<T> Fr;
//    Fr.D = D * other.D;
//    Fr.N = (N * other.D) - (D * other.N);
//    return Fr;
//}
//fractionType operator * (const fractionType& other) {
//    fractionType Fr;
//    Fr.N = N * other.N;
//    Fr.D = D * other.D;
//    return Fr;
//}
//fractionType operator / (const fractionType& other){
//    fractionType Fr;
//
//    if ((other.N == 0) || (other.D == 0))
//    {
//        Fr.N = 0;
//        Fr.D = 1;
//        cout << "\n undefined";
//    }
//    else
//    {
//        Fr.N = N * other.D;
//        Fr.D = D * other.N;
//    }
//    return Fr;
//}
//boolean op overloaders
 

// bool operator == (const fractionType& other) const{
//     return ((N == other.N) && (D == other.D));
// }
// bool operator != (const fractionType& other) const{
//     return ((N != other.N) || (D != other.D));
// }
// bool operator < (const fractionType& other) const {
//     return (N * other.D < D * other.N);
// }
// bool operator <= (const fractionType& other) const {
//     return (N * other.D <= D * other.N);
// }
// bool operator > (const fractionType& other) const {
//     return (N * other.D > D * other.N);
// }
// bool operator >= (const fractionType& other) const {
//     return (N * other.D >= D * other.N);
// }
//


