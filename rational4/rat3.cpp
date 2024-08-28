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
    num_ = num;
    den_ = den;
    reduce(); // 객체 생성 시 약분
}

// 복사 생성자
Rat::Rat(const Rat& rhs) {
    num_ = rhs.num_;
    den_ = rhs.den_;
}

// 소멸자
Rat::~Rat() {}

// Getter 함수들
int Rat::getNum() const {
    return num_;
}

int Rat::getDen() const {
    return den_;
}

// Setter 함수들
void Rat::setNum(int num) {
    num_ = num;
    reduce(); // 분자가 설정될 때 약분
}

void Rat::setDen(int den) {
    assert(den != 0); // 분모가 0이 아닌지 확인
    den_ = den;
    reduce(); // 분모가 설정될 때 약분
}

// 동등 비교 연산자
bool Rat::operator==(const Rat& rhs) const {
    return (num_ == rhs.num_ && den_ == rhs.den_);
}

// 대입 연산자
Rat& Rat::operator=(const Rat& rhs) {
    if (this != &rhs) { // 자기 자신에 대한 대입을 방지
        num_ = rhs.num_;
        den_ = rhs.den_;
    }
    return *this;
}

// 약분 메서드
void Rat::reduce() {
    int gcdValue = gcd(num_, den_); // 유클리드 알고리즘을 사용하여 최대 공약수 계산
    num_ /= gcdValue;
    den_ /= gcdValue;
    if (den_ < 0) { // 분모가 음수일 때 분자와 분모의 부호를 조정
        num_ = -num_;
        den_ = -den_;
    }
}

// 출력 연산자
std::ostream& operator<<(std::ostream& os, const Rat& r) {
    os << r.num_ << "/" << r.den_;
    return os;
}

// 논리 부정 연산자
bool Rat::operator!() const {
    return (num_ == 0);
}

// 산술 연산자
Rat Rat::operator+(const Rat& rhs) const {
    int newNum = num_ * rhs.den_ + rhs.num_ * den_;
    int newDen = den_ * rhs.den_;
    return Rat(newNum, newDen);
}

Rat Rat::operator-(const Rat& rhs) const {
    int newNum = num_ * rhs.den_ - rhs.num_ * den_;
    int newDen = den_ * rhs.den_;
    return Rat(newNum, newDen);
}

// 전위 증가 연산자
const Rat& Rat::operator++() {
    num_ = num_ + den_;
    return *this;
}

// 후위 증가 연산자
Rat Rat::operator++(int) {
    Rat tmp = *this;
    num_ = num_ + den_;
    return tmp;
}
