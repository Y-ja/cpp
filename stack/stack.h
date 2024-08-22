#ifndef STACK_H
#define STACK_H

class Stack {
public:
    Stack(int size);  // 생성자
    ~Stack();         // 소멸자

    void push(int data);
    int pop();

private:
    // 접근 못하게 하게 하긴 위해서 private
    int *pArr;   // 동적 배열
    int size;    // 배열 크기
    int tos;     // Top of stack
};

#endif // STACK_H
