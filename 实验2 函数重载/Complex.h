#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
using namespace std;

class Complex
{
private:
    double real;
    double imag;

public:
    // 构造函数
    Complex(double r = 0, double i = 0);

    // 运算符重载声明
    Complex operator+(const Complex& c)const;
    Complex operator-(const Complex& c)const;

    // 打印函数
    void print()const;
};

#endif