#ifndef COM5_H
#define COM5_H

class Complex
{
private:
    double re_; 
    double im_;

public:
    // 기본 생성자
    Complex() : re_(0.0), im_(0.0) {}
    // 단일 매개변수 생성자
    Complex(double re) : re_(re), im_(0.0) {}
    // 두 매개변수 생성자
    Complex(double re, double im);
    // 복사 생성자
    Complex(const Complex& other) : re_(other.re_), im_(other.im_) {}
    // 대입 연산자
    Complex& operator=(const Complex& other) {
        if (this == &other) return *this; // 자기 대입 방지
        re_ = other.re_;
        im_ = other.im_;
        return *this;
    }

    // getter와 setter
    double real() const;
    double imag() const;
    void real(double re);
    void imag(double im);

    // 소멸자
    ~Complex();
};

#endif // COM5_H
