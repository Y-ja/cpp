#include <iostream>
#include "string.h"

int main() {
    String s1; // 기본 생성자
    String s2 = "hello"; // 문자열 인자를 받는 생성자
    String s3 = s2; // 복사 생성자

    s1 = s3;

    if (s1 == s3) {
        std::cout << "S1 and S3 are equal" << std::endl;
    } else {
        std::cout << "S1 and S3 are not equal" << std::endl;
    }

    String s4 = ", YJ";
    String s5 = s1 + s4; // 문자열 결합

    // 문자열 출력 (c_str() 메서드 사용)
    std::cout << "s1: " << s1.c_str() << std::endl;
    std::cout << "s2: " << s2.c_str() << std::endl;
    std::cout << "s3: " << s3.c_str() << std::endl;
    std::cout << "s5: " << s5.c_str() << std::endl; // 결합된 문자열 출력

    // 문자열 길이
    std::cout << "s1 length: " << s1.length() << std::endl;
    std::cout << "s2 length: " << s2.length() << std::endl;
    std::cout << "s3 length: " << s3.length() << std::endl;
    std::cout << "s5 length: " << s5.length() << std::endl; // 결합된 문자열 길이

    return 0;
}
