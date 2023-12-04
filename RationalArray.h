//
// Created by משתמש זה on 19/06/2023.
//

#ifndef RATINALCPP_RATIONALARRAY_H
#define RATINALCPP_RATIONALARRAY_H
#include "Rational.h"

class RationalArray {
private:
unsigned short m_usArraySize;
Rational* m_pRational;

public:
    RationalArray(Rational* r , unsigned n);
    Rational* getM_pRational();
    bool operator == (RationalArray r);
    bool operator != (RationalArray r);
    RationalArray operator * (RationalArray r);
    RationalArray operator *= (RationalArray r);
    friend ostream& operator << (ostream& os, const RationalArray& r);
    friend istream& operator >> (istream& in, RationalArray& r);
    Rational operator [] (int index);
    ~RationalArray();



};


#endif //RATINALCPP_RATIONALARRAY_H
