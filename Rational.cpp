//
// Created by משתמש זה on 17/06/2023.
//

#include "Rational.h"
Rational::Rational (int n, int d) {
    if (d != 0) {
        this->numerator = n;
        this->denominator = d;
    }
    else {
        this->numerator = 0;
        this->denominator = 1;
    }
}

Rational::Rational() {
    numerator = 0;
    denominator = 1;
}

void Rational::setNumerator(int n) {
    this->numerator = n;
}

void Rational::setDenominator(int d) {
    this->denominator = d;
}

int Rational::getNumerator() {
    return  numerator;
}

int Rational::getDenominator() {
    return  denominator;
}

void Rational::createRational( int n, int d) {
    if (d != 0) {
        setNumerator(n);
        setDenominator(d);
    }
    else {
        setNumerator(0);
        setDenominator(1);
    }
}

void Rational::print() {
    if (getDenominator() == 1 || getNumerator()==0)
        cout << getNumerator()<<endl;
    else
        cout << getNumerator() << " / " << getDenominator() << endl;

}

Rational Rational::operator+(Rational r){
    int gcd = r.denominator * denominator;
    Rational newR((gcd/denominator)*r.numerator+(gcd/r.denominator)*numerator,gcd);
    return newR;
}

Rational Rational::operator+(int num){
    Rational newR(numerator+num*denominator ,denominator);
    return newR;

}

Rational Rational::operator += (Rational r){
    *this = *this +r;
    return *this;
}

Rational Rational::operator += (int num) {
     *this = *this +num;
    return *this;
}

bool Rational::operator == (const Rational& r) const {
    return realNumber() == r.realNumber();
}

bool Rational::operator != (const Rational& r) const{
    return realNumber() != r.realNumber();
}

Rational Rational::operator * (const Rational r){
    Rational newR(numerator * r.numerator, denominator * r.denominator);
    return newR;
}

Rational Rational::operator * (int num){
    Rational newR(numerator * num, denominator);
    return newR;
}

Rational Rational::operator *= (const Rational r){
   *this = *this *r;
   return *this;
}

Rational Rational::operator ++ (int) {
    numerator++;
    return *this;
}

Rational Rational::operator ++ (){
    denominator++;
    return *this;
}

Rational Rational::operator *= (int num) {
    *this = *this *num;
    return *this;
}

ostream& operator << (ostream& os, const Rational& r){
    os <<r.numerator<< "/"<<r.denominator<<endl;
    return os;
}

istream& operator >> (istream& in, Rational& r){
 in >>r.numerator >> r.denominator;
    return in;
}

double Rational::realNumber() const{
    return (double) numerator / denominator;
}

void Rational::minRational() {
    if (numerator > denominator) {
        for (int i = denominator; i > 1; i--) {
            if (numerator % i == 0 && denominator % i == 0) {
                numerator = numerator / i;
                denominator= denominator/ i;
            }
        }
    }
    else {
        for (int i = numerator; i > 1; i--) {
            if (numerator % i == 0 && denominator % i == 0) {
                numerator= numerator / i;
                denominator= denominator / i;
            }
        }
    }
}
