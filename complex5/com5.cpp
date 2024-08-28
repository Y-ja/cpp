#include "com5.h"

// 두 매개변수 생성자 정의
Complex::Complex(double re, double im) {
    re_ = re;  // 멤버 변수에 직접 접근
    im_ = im;
}

// real getter
double Complex::real() const {
    return re_;
}

// imag getter
double Complex::imag() const {
    return im_;
}

// real setter
void Complex::real(double re) {
    re_ = re;
}

// imag setter
void Complex::imag(double im) {
    im_ = im;
}

// 소멸자 정의
Complex::~Complex() {}
