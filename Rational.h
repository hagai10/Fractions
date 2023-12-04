//
// Created by משתמש זה on 17/06/2023.
//

#ifndef RATINALCPP_RATIONAL_H
#define RATINALCPP_RATIONAL_H
#pragma once
#include<iostream>
using namespace std;
class Rational
{
private: int numerator, denominator;
public:
    void setNumerator(int n);
    void setDenominator(int d);
    int getNumerator();
    int getDenominator();
    double realNumber() const;
    void minRational();
    void createRational(int n, int d);
    Rational(int n, int d);
    Rational();
    void  print();
    Rational operator + (Rational r);
    Rational operator + (int n);
    Rational operator += (Rational r);
    Rational operator += (int n);
    bool operator == (const Rational& r) const;
    bool operator != (const Rational& r) const;
    Rational operator  *(Rational r);
    Rational operator *(int n);
    Rational operator *= (Rational r);
    Rational operator *= (int n);
    Rational operator ++ (int);
    Rational operator ++();
    friend ostream& operator << (ostream& os, const Rational& r);
    friend istream& operator >> (istream& in, Rational& r);

};





#endif //RATINALCPP_RATIONAL_H
