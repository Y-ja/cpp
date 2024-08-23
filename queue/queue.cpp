#include "queue.h"

// 생성자
Queue::Queue(int size) : size(size), front(0), rear(0), count(0) {
    data = new int[size];
    if (data == nullptr) {
        throw std::bad_alloc(); // 메모리 할당 실패 시 예외를 던짐
    }
}

// 소멸자
Queue::~Queue() {
    delete[] data; // 동적 배열 메모리 해제
}

// 큐가 비어 있는지 확인하는 함수
bool Queue::isEmpty() const {
    return count == 0;
}

// 큐가 가득 찼는지 확인하는 함수
bool Queue::isFull() const {
    return count == size;
}

// 큐에 데이터를 추가하는 함수
void Queue::push(int data) {
    if (isFull()) {
        throw std::overflow_error("Queue is full"); // 큐가 가득 찼을 때 예외를 던짐
    }
    this->data[rear] = data;
    rear = (rear + 1) % size;
    ++count;
}

// 큐에서 데이터를 제거하는 함수
int Queue::pop() {
    if (isEmpty()) {
        throw std::underflow_error("Queue is empty"); // 큐가 비어 있을 때 예외를 던짐
    }
    int value = this->data[front];
    front = (front + 1) % size;
    --count;
    return value;
}
