#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {
private:
    double re;
    double im;
public:
    /* function overloading 
    ->'one- interface multi - method'
    */ 
    Complex();
    Complex(double re);
    Complex(double re, double im);
    ~Complex();

    double real() const;   // const 추가
    double imag() const;   // const 추가

    void real(double re);  // 설정 함수
    void imag(double im);  // 설정 함수
};

#endif // COMPLEX_H
