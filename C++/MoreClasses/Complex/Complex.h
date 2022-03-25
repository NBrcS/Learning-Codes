#ifndef COMPLEX_H
#define COMPLEX_H

class Complex{
    private:
        float re, im;
    public:
        Complex(float = 0.0, float = 0.0);
        ~Complex(){};

        void print_Complex();
        Complex add(Complex&);
        Complex sub(Complex&);

        Complex operator+(Complex&);
        Complex operator-(Complex&);
        bool operator!();
        Complex& operator++();
};


#endif