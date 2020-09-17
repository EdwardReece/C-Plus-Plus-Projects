//
//  fractionType.hpp
//  ReeceCS285W6Assignment
//
//  Created by Edward Reece on 4/16/20.
//  Copyright © 2020 Edward Reece. All rights reserved.
//

#ifndef fractionType_hpp
#define fractionType_hpp
#include <iostream>
#include <exception>

using namespace std;

class fractionException : public exception{
public:
    fractionException(const char *m) : msg(m){}
    virtual const char * what() const throw(){
        return msg;
    }
private:
    const char *msg;
};

//fractionType
template<class T>
class fractionType{
    //overload stream extraction and insertion
    //friend ostream& operator << (ostream&, const fractionType&);
    
    friend ostream& operator << (ostream& osThing, const fractionType& Fr){
        osThing << Fr.N << "/" << Fr.D;
        return osThing;
    }
    //friend istream& operator >> (istream&, fractionType&);
    friend istream& operator >> (istream& isThing, fractionType& Fr){
        char ch;
        isThing >> Fr.N;
        isThing >> ch;
        isThing >> Fr.D;
        if (Fr.D == 0) {
            throw fractionException("Denominator can not be Zero");
        }
        return isThing;
    }
public:
    fractionType(T num = 0, T den = 1){
        N = num;
        if(den == 0){
            throw fractionException("Denominator can not be Zero");
            D = 1;
        } else{
        D = den;
        }
    }
    
    void setFraction(T num, T den){
        N = num;
        if(D == 0){
            throw fractionException("Denominator can not be Zero");
            D = 1;
        }else{
        D = den;
        }
    }
    
    //operators overloaders
    //fractionType operator + (fractionType&);
    fractionType operator + (const fractionType other) {
        fractionType Fr;
        Fr.D = D * other.D;
        Fr.N = (N * other.D) + (D * other.N);
        return Fr;
    }
    //fractionType operator - (fractionType&);
    fractionType operator - (const fractionType other) {
        fractionType Fr;
        Fr.D = D * other.D;
        Fr.N = (N * other.D) - (D * other.N);
        return Fr;
    }
    //fractionType operator * (fractionType&);
    fractionType operator * (const fractionType other) {
        fractionType Fr;
        Fr.N = N * other.N;
        Fr.D = D * other.D;
        return Fr;
    }
    //fractionType operator / (fractionType&);
    fractionType operator / (const fractionType other){
        fractionType Fr;
        
        if (other.D == 0)
        {
            throw fractionException("Denominator can not be Zero");
            return *this;
        }
        else
        {
            Fr.N = N * other.D;
            Fr.D = D * other.N;
            
            
            if (Fr.D == 0)
                   {
                       throw fractionException("Denominator can not be Zero");
                       return *this;
                   }else{
                       return Fr;
                   }
        }
        
    }
    //boolean op overloaders
    
    //    bool operator == (const fractionType&) const;
    bool operator == (const fractionType& other) const {
        return ((N == other.N) && (D == other.D));
    }
    //    bool operator != (const fractionType&) const;
    bool operator != (const fractionType& other) const {
        return ((N != other.N) || (D != other.D));
    }
    //    bool operator < (const fractionType&) const;
    bool operator < (const fractionType& other) const {
        return (N * other.D < D * other.N);
    }
    //    bool operator <= (const fractionType&) const;
    bool operator <= (const fractionType& other) const {
        return (N * other.D <= D * other.N);
    }
   //    bool operator > (const fractionType&) const;
    bool operator > (const fractionType& other) const {
        return (N * other.D > D * other.N);
    }
    //    bool operator >= (const fractionType&) const;
    bool operator >= (const fractionType& other) const {
        return (N * other.D >= D * other.N);
    }
    
private:
    //variables
    T N;//numerator
    T D;//denominator
};



#endif /* fractionType_hpp */
