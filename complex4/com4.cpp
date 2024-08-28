#include "com4.h"

Complex::Complex(double re, double im) {
    re_ = re;
    im_ = im;
}

Complex::Complex(const Complex& rhs) {
    re_ = rhs.re_;
    im_ = rhs.im_;
}

Complex::~Complex() {}

Complex& Complex::operator=(const Complex& rhs) {
    if (this != &rhs) {
        re_ = rhs.re_;
        im_ = rhs.im_;
    }
    return *this;
}

bool Complex::operator==(const Complex& rhs) const {
    return re_ == rhs.re_ && im_ == rhs.im_;
}

Complex Complex::operator+(const Complex& rhs) const {
    return Complex(re_ + rhs.re_, im_ + rhs.im_);
}

Complex Complex::operator-(const Complex& rhs) const {
    return Complex(re_ - rhs.re_, im_ - rhs.im_);
}

Complex Complex::operator*(const Complex& rhs) const {
    double realPart = (re_ * rhs.re_) - (im_ * rhs.im_);
    double imagPart = (re_ * rhs.im_) + (im_ * rhs.re_);
    return Complex(realPart, imagPart);
}

Complex Complex::operator/(const Complex& rhs) const {
    double denominator = rhs.re_ * rhs.re_ + rhs.im_ * rhs.im_;
    if (denominator == 0) {
        throw std::invalid_argument("Division by zero");
    }
    double realPart = (re_ * rhs.re_ + im_ * rhs.im_) / denominator;
    double imagPart = (im_ * rhs.re_ - re_ * rhs.im_) / denominator;
    return Complex(realPart, imagPart);
}

std::ostream& operator<<(std::ostream& os, const Complex& c) {
    os << c.re_;
    if (c.im_ >= 0) {
        os << " + " << c.im_ << "i";
    } else {
        os << " - " << -c.im_ << "i";
    }
    return os;
}
