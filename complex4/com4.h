#ifndef COM4_H
#define COM4_H
#include <iostream>

class Complex
{
private:
    double re_; // 실수부
    double im_; // 허수부

public:
    Complex(double re = 0.0, double im = 0.0); // 생성자
    Complex(const Complex& rhs); // 복사 생성자
    ~Complex(); // 소멸자

    Complex& operator=(const Complex& rhs); // 복사 대입 연산자
    bool operator==(const Complex& rhs) const; // 동등성 연산자
    Complex operator+(const Complex& rhs) const; // 덧셈 연산자
    Complex operator-(const Complex& rhs) const; // 뺄셈 연산자
    Complex operator*(const Complex& rhs) const; // 곱셈 연산자
    Complex operator/(const Complex& rhs) const; // 나눗셈 연산자

    friend std::ostream& operator<<(std::ostream& os, const Complex& c); // 출력 연산자
};

#endif // COM4_H
