#include <stdio.h>
#include "stack.h"

int main() {
    // 스택 객체 생성
    Stack s1(10);
    Stack s2(100);

    // s1에 값 추가
    s1.push(100);
    s1.push(200);
    s1.push(300);

    // s1에서 값 제거 및 출력
    printf("s1 1st pop() -> %d\n", s1.pop());
    printf("s1 2nd pop() -> %d\n", s1.pop());
    printf("s1 3rd pop() -> %d\n", s1.pop());

    // s2에 값 추가
    s2.push(600);
    s2.push(700);
    s2.push(800);

    // s2에서 값 제거 및 출력
    printf("s2 1st pop() -> %d\n", s2.pop());
    printf("s2 2nd pop() -> %d\n", s2.pop());
    printf("s2 3rd pop() -> %d\n", s2.pop());

    // 스택 메모리 해제는 소멸자가 자동으로 처리함

    return 0;
}
