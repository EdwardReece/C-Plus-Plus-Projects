//
//  rationalfractions.hpp
//  ReeceCS285W4Assignment
//
//  Created by Edward Reece on 3/31/20.
//
#ifndef rationalfractions_hpp
#define rationalfractions_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

//fractionType
class fractionType {
    //overload stream extraction and insertion
    friend ostream& operator << (ostream&, const fractionType &);
    friend istream& operator >> (istream&, fractionType &);
public:
    //constructor
    fractionType();
    fractionType(const fractionType&);
    fractionType (int &, int &);
    //operators overloaders
    fractionType operator + (const fractionType&);
    fractionType operator - (const fractionType&);
    fractionType operator * (const fractionType&);
    fractionType operator / (const fractionType&);
    //boolean op overloaders
    bool operator == (const fractionType&) const;
    bool operator != (const fractionType&) const;
    bool operator <= (const fractionType&) const;
    bool operator < (const fractionType&) const;
    bool operator >= (const fractionType&) const;
    bool operator > (const fractionType&) const;
private:
    //variables
    int N;//numerator
    int D;//denominator
};
#endif /* rationalfractions_hpp */
