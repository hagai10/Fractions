#include<iostream>
#include "Rational.h"
#include "RationalArray.h"
using namespace std;

Rational minElement(Rational arr[],int size) {
    Rational min = arr[0];
    double ans = min.realNumber();
    for (int i = 1; i < size; i++) {
        double check = arr[i].realNumber();
        if (check < ans) {
            min = arr[i];
            ans = min.realNumber();
        }
    }
    return min;
}
Rational maxElement(Rational arr[] ,int size) {
    Rational max = arr[0];
    double ans = max.realNumber();
    for (int i = 1; i < size; i++) {
        double check = arr[i].realNumber();
        if (check > ans) {
            max = arr[i];
            ans = max.realNumber();
        }
    }
    return max;
}

int main() {
    Rational r;
    cout << "Enter two numbers" << endl;
    cin >>r;
    cout << "numerator = " << r.getNumerator() << " denominator = " << r.getDenominator() << endl;
    Rational r1(70 , 7);
    Rational r2(7, 0);
    Rational r3;
    r3.createRational(3,6);
    Rational r4 = r1+2;
    Rational r5 = r1+r4;
    Rational r6 = r * r1;
    Rational r7 = r3;
    r7 += r3;
    Rational r8 = r7;
    r8++;
    Rational r9 = r7;
    ++r9;
    cout << (r == r1 ? "true" : "false")<< endl;
    cout << (r != r1 ? "true" : "false") << endl;
    Rational arr[] = {r,r1,r2,r3,r4,r5,r6, r7,r8,r9 };
    Rational array[] = {r,r1,r2,r3,r4,r5,r6, r7,r8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int size1 = sizeof (array)/ sizeof(array[0]);
    for (int i = 0; i < size; i++) {
        arr[i].minRational();
        cout <<"Rational["<<i<<"] is: "<<arr[i];
        cout << "Rational["<<i<<"] real number is: "<< arr[i].realNumber() << endl;
    }
    cout <<r<<r1<<r2<<r3<<r4<<r5<<r6<<r7<<r8<<r9;
    Rational min = minElement(arr,size);
    cout << "Min rational is: " << min.realNumber()<< endl;
    Rational max = maxElement(arr,size);
    cout << "Max rational is: " << max.realNumber() << endl;

     RationalArray arr1 (arr,size);
        cout << arr1;
     RationalArray arr2 (array,size1);
cout<<"-------------------------------"<<endl;
    cout << (arr1 == arr2 ? "true" : "false")<< endl;
    cout << (arr1 != arr2 ? "true" : "false") << endl;
    cout<<"-------------------------------"<<endl;
    RationalArray arr3 =arr1;
    arr3*=arr2;
    cout << arr3;
    cout<<"-------------------------------"<<endl;
    Rational a = arr3[3];
    cout<<a;




     

    return 0;

}
