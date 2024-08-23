#include <iostream>
#include "queue.h"

int main() {
    Queue q1(10);  // 큐의 크기를 10으로 설정
    Queue q2(100); // 큐의 크기를 100으로 설정

    // q1에 데이터 추가
    q1.push(100);
    q1.push(200);
    q1.push(300);

    // q2에 데이터 추가
    q2.push(600);
    q2.push(700);
    q2.push(800);

    // q1에서 데이터 제거 및 출력
    std::cout << "q1 - 1st pop() -> " << q1.pop() << std::endl;
    std::cout << "q1 - 2nd pop() -> " << q1.pop() << std::endl;
    std::cout << "q1 - 3rd pop() -> " << q1.pop() << std::endl;

    // q2에서 데이터 제거 및 출력
    std::cout << "q2 - 1st pop() -> " << q2.pop() << std::endl;
    std::cout << "q2 - 2nd pop() -> " << q2.pop() << std::endl;
    std::cout << "q2 - 3rd pop() -> " << q2.pop() << std::endl;

    return 0;
}
