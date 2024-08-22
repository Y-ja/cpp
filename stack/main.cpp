#include <iostream>
#include "stack.h"

int main() {
    Stack s1(10) , s2(100);
    

    // s1에 값 추가
    s1.push(100);
    s1.push(200);
    s1.push(300);

    // s1에서 값 제거 및 출력
    std::cout << "s1 1st pop() -> " << s1.pop() << std::endl;
    std::cout << "s1 2nd pop() -> " << s1.pop() << std::endl;
    std::cout << "s1 3rd pop() -> " << s1.pop() << std::endl;

    // s2에 값 추가
    s2.push(600);
    s2.push(700);
    s2.push(800);

    // s2에서 값 제거 및 출력
    std::cout << "s2 1st pop() -> " << s2.pop() << std::endl;
    std::cout << "s2 2nd pop() -> " << s2.pop() << std::endl;
    std::cout << "s2 3rd pop() -> " << s2.pop() << std::endl;

    return 0;
}
