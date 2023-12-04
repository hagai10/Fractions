//
// Created by משתמש זה on 19/06/2023.
//

#include "RationalArray.h"

 RationalArray::RationalArray(Rational *r, unsigned int n) {
    this->m_pRational= new Rational[n];
    for(int i=0;i<n; i++)
        m_pRational[i]=r[i];
    this->m_usArraySize=n;
};

  bool RationalArray ::operator==(RationalArray r) {
    if(m_usArraySize!= r.m_usArraySize)
        return false;
    else {
        for(int i =0; i<m_usArraySize; i++){
            if(m_pRational[i]!= r.m_pRational[i])
                return false;
        }
        return true;
    }
}

bool RationalArray ::operator!=(RationalArray r) {
    if(*this==r)
        return false;
    return true;
}

Rational *RationalArray::getM_pRational() {
    return m_pRational;
}

RationalArray RationalArray::operator*(RationalArray r) {
      int ansSize = m_usArraySize>r.m_usArraySize ? m_usArraySize : r.m_usArraySize;
    Rational arr [ansSize];
    for(int i=0; i<ansSize; i++) {
        if(i>=m_usArraySize||i>=r.m_usArraySize)
            arr[i] = Rational();
        else
            arr[i] = m_pRational[i] * r.m_pRational[i];

    }
    RationalArray ans (arr,m_usArraySize);
    return ans;
}

RationalArray RationalArray::operator*=(RationalArray r) {
    *this = *this*r;
}

ostream& operator << (ostream& os, const RationalArray& r){
      for(int i=0;i<r.m_usArraySize;i++) {
          r.m_pRational[i].minRational();
          os << "Rational["<<i<<"]"<<r.m_pRational[i];
      }
    return os;
}

istream& operator >> (istream& in, RationalArray& r){
    for(int i=0;i<r.m_usArraySize;i++)
        in >> r.m_pRational[i];
    return in;
}

Rational RationalArray::operator[](int index) {
    return m_pRational[index];
}

RationalArray::~RationalArray() {

}


