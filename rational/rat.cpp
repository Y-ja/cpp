#include "rat.h"
#include <iostream>
#include <numeric>   // std::gcd 사용을 위해
#include <stdexcept> // std::invalid_argument 사용을 위해

// 기본 생성자: 0/1로 초기화
Rational::Rational() : numerator(0), denominator(1) {}

// 단일 정수를 받는 생성자: num/1로 초기화
Rational::Rational(int num) : numerator(num), denominator(1) {}

// 두 정수를 받는 생성자: num/denom으로 초기화
Rational::Rational(int num, int denom) : numerator(num), denominator(denom) {
    if (denom == 0) throw std::invalid_argument("Denominator cannot be zero.");
    this->reduce();
}

// 소멸자: 아무 것도 하지 않음
Rational::~Rational() {}

// 분자를 반환하는 함수
int Rational::getNumerator() const {
    return this->numerator;
}

// 분모를 반환하는 함수
int Rational::getDenominator() const {
    return this->denominator;
}

// 분자를 설정하고 기약분수로 변환
void Rational::setNumerator(int num) { 
    this->numerator = num;
    this->reduce();
}

// 분모를 설정하고 기약분수로 변환
void Rational::setDenominator(int denom) { 
    if (denom == 0) throw std::invalid_argument("Denominator cannot be zero.");
    this->denominator = denom;
    this->reduce();
}

// 유리수를 기약분수로 변환
void Rational::reduce() {
    int gcd = std::gcd(this->numerator, this->denominator); // C++17의 std::gcd 사용
    this->numerator /= gcd;
    this->denominator /= gcd;
    if (this->denominator < 0) { // 분모가 음수일 경우
        this->numerator = -this->numerator;
        this->denominator = -this->denominator;
    }
}

// 유리수를 출력하는 함수
void Rational::print() const {
    std::cout << this->numerator << '/' << this->denominator << std::endl;
}
