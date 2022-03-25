#include "Complex.h"
#include <iostream>

using namespace std;

Complex::Complex(float rr, float ii){
    re = rr;
    im = ii;
}

void Complex::print_Complex(){
    cout << "Real = " << re << endl;
    cout << "Imaginary = " << im << endl;
}
Complex Complex::add(Complex& par){
    float X = re + par.re;
    float Y = im + par.im;

    return Complex {X, Y};
}

Complex Complex::sub(Complex& par){
    float X = re - par.re;
    float Y = im - par.im;

    return Complex {X, Y};
}
Complex Complex::operator+(Complex& par){
    float X = re + par.re;
    float Y = im + par.im;

    return Complex {X, Y};    
}
Complex Complex::operator-(Complex& par){
    float X = re - par.re;
    float Y = im - par.im;

    return Complex {X, Y};  
}
bool Complex::operator !(){
    if(re == 0 && im == 0){
        return true;
    }
    else{
        return false;
    }
}
Complex& Complex::operator ++(){
    this -> re = re + 1;
    im = this -> im + 1;
    return *this;
}
