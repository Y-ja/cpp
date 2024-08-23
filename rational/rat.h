#ifndef RATIONAL_H
#define RATIONAL_H

class Rational {
private:
    int numerator;   // 분자
    int denominator; // 분모

    void reduce();   // 유리수를 기약분수로 변환하는 함수

public:
    Rational();                  // 기본 생성자
    Rational(int num);           // 단일 정수를 받는 생성자
    Rational(int num, int denom); // 두 정수를 받는 생성자
    ~Rational();                 // 소멸자

    int getNumerator() const;    // 분자를 반환하는 함수
    int getDenominator() const;  // 분모를 반환하는 함수

    void setNumerator(int num);  // 분자를 설정하는 함수
    void setDenominator(int denom); // 분모를 설정하는 함수

    void print() const;          // 유리수를 출력하는 함수
};

#endif // RATIONAL_H
