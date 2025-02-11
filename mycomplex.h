#ifndef MY_COMPLEX_H
#define MY_COMPLEX_H

#include <iostream>

class Complex {
private:
    double Re;
    double Im;

public:
    Complex(double aRe = 0, double aIm = 0);
    Complex(const Complex&);
    ~Complex();

    void Set(double aRe, double aIm = 0);
    operator double();
    double abs();

    friend std::istream& operator>>(std::istream&, Complex&);
    friend std::ostream& operator<<(std::ostream&, Complex&);

    Complex operator+(const Complex&);
    Complex operator-(const Complex&);
    Complex operator+(const double&);
    friend Complex operator+(const double&, const Complex&);
    Complex operator-(const double&);
    friend Complex operator-(const double&, const Complex&);
    Complex operator*(const Complex&);
    Complex operator*(const double&);
    friend Complex operator*(const double&, const Complex&);
    Complex operator/(const double&);

    Complex& operator+=(const Complex&);
    Complex& operator-=(const Complex&);
    Complex& operator*=(const Complex&);
    Complex& operator+=(const double&);
    Complex& operator-=(const double&);
    Complex& operator*=(const double&);
    Complex& operator/=(const double&);

    Complex& operator=(const Complex&);
    Complex& operator=(const double&);
};

#endif // MY_COMPLEX_H
