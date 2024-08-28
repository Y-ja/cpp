#include <iostream>
#include "com5.h"

int main() {
    Complex c1;          // 기본 생성자 호출
    Complex c2 = 3.0;    // 단일 매개변수 생성자 호출
    Complex c3(3.0, 4.0); // 두 매개변수 생성자 호출
    Complex c4 = c2;     // 복사 생성자 호출

    c1.real(c3.real());
    c1.imag(c3.imag());
    c1 = c3;             // 대입 연산자 호출

    std::cout << "C1 -> (" << c1.real() << ", " << c1.imag() << "i)" << std::endl;

    return 0;
}
