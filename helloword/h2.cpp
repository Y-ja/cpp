#include <iostream>

int main() {
    // 기본적으로 10진수로 출력됩니다.
    std::cout << std::dec; // 10진수 출력 형식 설정

    // 연산자 함수를 직접 호출하는 방법 (비표준 사용)
    operator<<(std::cout, "HELLO WORLD");
    std::cout.operator<<("HELLO WORLD");

    // 스트림을 플러시하거나 줄을 바꾸는 것이 좋습니다
    std::cout << std::endl;
    
    return 0;
}
