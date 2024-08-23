#include "com.h"

// 기본 생성자
Complex::Complex() : re(0.0), im(0.0) {
    // 기본 생성자 구현
}

// 단일 인자를 가진 생성자
Complex::Complex(double re) : re(re), im(0.0) {
    // 단일 인자를 가진 생성자 구현
}

// 두 인자를 가진 생성자
Complex::Complex(double re, double im) : re(re), im(im) {
    // 두 인자를 가진 생성자 구현
}

// 소멸자
Complex::~Complex() {
    // 소멸자 구현
}

// 실수 부분을 반환하는 메서드
double Complex::real() const {
    return this->re;
}

// 허수 부분을 반환하는 메서드
double Complex::imag() const {
    return this->im;
}

// 실수 부분을 설정하는 메서드
void Complex::real(double re) {
    this->re = re;
}

// 허수 부분을 설정하는 메서드
void Complex::imag(double im) {
    this->im = im;
}
