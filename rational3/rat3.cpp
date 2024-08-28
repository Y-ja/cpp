#include <cassert>
#include <iostream>
#include "rat3.h"

// 유클리드 알고리즘을 사용하여 최대 공약수를 계산하는 함수
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// 두 정수 생성자
Rat::Rat(int num, int den) {
    assert(den != 0); // 분모가 0이 아닌지 확인
    this->num = num;
    this->den = den;
    reduce(); // 객체 생성 시 약분
}

// 복사 생성자
Rat::Rat(const Rat& rhs) {
    this->num = rhs.num;
    this->den = rhs.den;
}

// 소멸자
Rat::~Rat() {}

// Getter 함수들
int Rat::getNum() const {
    return this->num;
}

int Rat::getDen() const {
    return this->den;
}

// Setter 함수들
void Rat::setNum(int num) {
    this->num = num;
    reduce(); // 분자가 설정될 때 약분
}

void Rat::setDen(int den) {
    assert(den != 0); // 분모가 0이 아닌지 확인
    this->den = den;
    reduce(); // 분모가 설정될 때 약분
}

// 동등 비교 연산자
bool Rat::operator==(const Rat& rhs) const {
    return (this->num == rhs.num && this->den == rhs.den);
}

// 대입 연산자
Rat& Rat::operator=(const Rat& rhs) {
    if (this != &rhs) { // 자기 자신에 대한 대입을 방지
        this->num = rhs.num;
        this->den = rhs.den;
    }
    return *this;
}

// 약분 메서드
void Rat::reduce() {
    int gcdValue = gcd(num, den); // 유클리드 알고리즘을 사용하여 최대 공약수 계산
    num /= gcdValue;
    den /= gcdValue;
    if (den < 0) { // 분모가 음수일 때 분자와 분모의 부호를 조정
        num = -num;
        den = -den;
    }
}

// 출력 연산자
std::ostream& operator<<(std::ostream& os, const Rat& r) {
    os << r.num << "/" << r.den;
    return os;
}

// 논리 부정 연산자
bool Rat::operator!() const {
    return (num == 0);
}

// 산술 연산자
Rat Rat::operator+(const Rat& rhs) const {
    int newNum = this->num * rhs.den + rhs.num * this->den;
    int newDen = this->den * rhs.den;
    return Rat(newNum, newDen);
}

Rat Rat::operator-(const Rat& rhs) const {
    int newNum = this->num * rhs.den - rhs.num * this->den;
    int newDen = this->den * rhs.den;
    return Rat(newNum, newDen);
}
