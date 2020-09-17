//
//  rationalfractions.cpp
//  ReeceCS285W4Assignment
//
//  Created by Edward Reece on 3/31/20.
//

#include "rationalfractions.hpp"
//constructor setup with varible IDs
template <class T>
class newtype{
public:
    newtype(T x){};
};
template <>
    class newtype<char>{
    public:
        newtype(char x){};
};
fractionType::fractionType(){}
fractionType::fractionType(int & numerator, int & denominator){
    N = numerator;
    D = denominator;
    newtype <double> numer(N);
    newtype <double> denom(D);
}
//for the other fraction provided
fractionType::fractionType(const fractionType& other){
    N = other.N;
    D = other.D;
}
//overload stream extraction and insertion
ostream& operator << (ostream& osThing, const fractionType& Fr){
    osThing << Fr.N << "/" << Fr.D;
    return osThing;
}
istream& operator >> (istream& isThing, fractionType& Fr){
    char ch;
    isThing >> Fr.N >> ch >> Fr.D;
    return isThing;
}
//operators overloaders
fractionType fractionType::operator + (const fractionType& other) {
    fractionType Fr;
    Fr.D = D * other.D;
    Fr.N = (N * other.D) + (D * other.N);
    return Fr;
}
fractionType fractionType::operator - (const fractionType& other) {
    fractionType Fr;
    Fr.D = D * other.D;
    Fr.N = (N * other.D) - (D * other.N);
    return Fr;
}
fractionType fractionType::operator * (const fractionType& other) {
    fractionType Fr;
    Fr.N = N * other.N;
    Fr.D = D * other.D;
    return Fr;
}
fractionType fractionType::operator / (const fractionType& other){
    fractionType Fr;
    
    if ((other.N == 0) || (other.D == 0))
    {
        Fr.N = 0;
        Fr.D = 1;
        cout << "\n undefined";
    }
    else
    {
        Fr.N = N * other.D;
        Fr.D = D * other.N;
    }
    return Fr;
}
//boolean op overloaders
bool fractionType::operator == (const fractionType& other) const {
    return ((N == other.N) && (D == other.D));
}
bool fractionType ::operator != (const fractionType& other) const {
    return ((N != other.N) || (D != other.D));
}
bool fractionType:: operator < (const fractionType& other) const {
    return (N * other.D < D * other.N);
}
bool fractionType:: operator <= (const fractionType& other) const {
    return (N * other.D <= D * other.N);
}
bool fractionType:: operator > (const fractionType& other) const {
    return (N * other.D > D * other.N);
}
bool fractionType:: operator >= (const fractionType& other) const {
    return (N * other.D >= D * other.N);
}

    
