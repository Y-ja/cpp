#include <iostream>
#include "rat3.h"

int main() {
    Rat r1; // 기본 생성자, 0/1
    Rat r2 = 3; // 단일 정수 생성자, 3/1
    Rat r3(3, 4); // 두 정수 생성자, 3/4
    Rat r4 = r3; // 복사 생성자

    // 대입 연산자 사용
    r1 = r3;

    if (r1 == r3) {
        std::cout << "r1 and r3 are equal" << std::endl;
    } else {
        std::cout << "r1 and r3 are not equal" << std::endl;
    }

    std::cout << "r1 -> " << r1 << std::endl;
    std::cout << "r2 -> " << r2 << std::endl;
    std::cout << "r3 -> " << r3 << std::endl;
    std::cout << "r4 -> " << r4 << std::endl;

    // 논리 부정 연산자 사용
    if (!r1) {
        std::cout << "r1 is zero" << std::endl;
    } else {
        std::cout << "r1 is not zero" << std::endl;
    }

    // 산술 연산자 사용
    Rat r5 = r3 + r4;
    Rat r6 = r3 - r4;
    
    std::cout << "r3 + r4 -> " << r5 << std::endl;
    std::cout << "r3 - r4 -> " << r6 << std::endl;

    return 0;
}
