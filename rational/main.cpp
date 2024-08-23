#include "rat.h"
#include <iostream>

int main() {
    Rational r1(3, 4); // 3/4로 초기화
    Rational r2(5);    // 5/1로 초기화
    Rational r3;       // 0/1로 초기화 (기본값)

    // r3의 분자와 분모를 r1의 값으로 설정
    r3.setNumerator(r1.getNumerator());
    r3.setDenominator(r1.getDenominator());

    // r1과 r3이 같은지 비교
    if (r1.getNumerator() == r3.getNumerator() && r1.getDenominator() == r3.getDenominator()) {
        std::cout << "r1 and r3 are equal" << std::endl;
    } else {
        std::cout << "r1 and r3 are not equal" << std::endl;
    }

    // 유리수 출력
    std::cout << "r1 -> ";
    r1.print(); // 3/4

    std::cout << "r2 -> ";
    r2.print(); // 5/1

    std::cout << "r3 -> ";
    r3.print(); // 3/4 (r1의 값으로 설정한 후)

    return 0;
}
