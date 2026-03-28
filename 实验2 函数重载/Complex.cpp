#include "Complex.h"

// 构造函数
Complex::Complex(double r, double i)
{
    real = r;
    imag = i;
}

// 加法重载
Complex Complex::operator+(const Complex& c)const
{
    return Complex(real + c.real, imag + c.imag);
}

// 减法重载
Complex Complex::operator-(const Complex& c)const
{
    return Complex(real - c.real, imag - c.imag);
}

// 打印函数
void Complex::print()const
{
    cout << real;
    if (imag > 0)
        cout << "+";
    if (imag != 0)
        cout << imag << "i";
    cout << endl;
}