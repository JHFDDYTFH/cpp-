#include "Complex.hh"

int main()
{
    Complex A1(2.3, 4.6), A2(3.6, 2.8), A3, A4;

    A3 = A1 + A2;
    A4 = A1 - A2;

    A1.print();
    A2.print();
    A3.print();
    A4.print();

    return 0;
}