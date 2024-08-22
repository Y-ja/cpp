#include <stdexcept>  // std::bad_alloc, std::overflow_error, std::underflow_error
#include "stack.h"
#include <cassert>
#include <cstdio>

// 생성자
Stack::Stack(int size) : size(size), tos(-1) {
    pArr = new int[size];
    if (pArr == nullptr) {
        throw std::bad_alloc();  // 메모리 할당 실패 시 예외를 던집니다.
    }
}

// 소멸자
Stack::~Stack() {
    delete[] pArr;  // 동적 배열 메모리 해제
}

// 스택에 데이터를 푸시하는 함수
void Stack::push(int data) {
    if (tos >= size - 1) {
        throw std::overflow_error("Stack is full");  // 스택이 가득 찼을 때 예외를 던집니다.
    }
    pArr[++tos] = data;
}

// 스택에서 데이터를 팝하는 함수
int Stack::pop() {
    if (tos < 0) {
        throw std::underflow_error("Stack is empty");  // 스택이 비어있을 때 예외를 던집니다.
    }
    return pArr[tos--];
}
