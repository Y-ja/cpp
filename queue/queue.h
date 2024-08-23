#ifndef QUEUE_H
#define QUEUE_H

#include <stdexcept> // std::overflow_error, std::underflow_error

class Queue {
public:
    Queue(int size);   // 생성자
    ~Queue();          // 소멸자

    void push(int data); // 큐에 데이터를 추가하는 함수
    int pop();           // 큐에서 데이터를 제거하는 함수

private:
    int* data;          // 동적 배열
    int size;           // 큐의 최대 크기
    int front;          // 큐의 앞쪽 인덱스
    int rear;           // 큐의 뒤쪽 인덱스
    int count;          // 큐에 저장된 데이터의 개수

    bool isEmpty() const; // 큐가 비어 있는지 확인하는 함수
    bool isFull() const;  // 큐가 가득 찼는지 확인하는 함수
};

#endif // QUEUE_H
