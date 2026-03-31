#include "Complex.h"
#include <iostream>
using namespace std;

Complex::Complex(double r, double i) {
    real = r;
    imag = i;
}

Complex Complex::operator+(const Complex& other) const {
    return Complex(real + other.real, imag + other.imag);
}

Complex Complex::operator-(const Complex& other) const {
    return Complex(real - other.real, imag - other.imag);
}

void Complex::print() const {
    cout << real << " + " << imag << "i" << endl;
}