#include <iostream>
#include <cassert>
#include <cstdlib>  // C++ 표준 라이브러리의 std::malloc, std::free 등을 위한 헤더
#include "com3.h"

// 기본 생성자
List::List() : head(nullptr) {}

// 소멸자
List::~List() {
    cleanup();
}

// 리스트의 첫 번째 노드에 단일 노드 삽입
void List::insertFirstNode(int data) {
    head = new Node(data, head);
}

// 리스트의 특정 노드 뒤에 노드 삽입
void List::insertNode(int prevData, int data) {
    Node* ptr = head;
    while (ptr) {
        if (ptr->data == prevData) {
            break;
        }
        ptr = ptr->next;
    }
    assert(ptr != nullptr); // prevData를 가진 노드가 리스트에 있어야 함
    Node* newNode = new Node(data, ptr->next);
    ptr->next = newNode;
}

// 리스트에서 노드 삭제
void List::deleteNode(int data) {
    Node* ptr1 = head;
    Node* ptr2 = nullptr;

    while (ptr1) {
        if (ptr1->data == data) {
            break;
        }
        ptr2 = ptr1;
        ptr1 = ptr1->next;
    }

    // 삭제할 노드가 존재해야 함
    assert(ptr1 != nullptr);

    if (ptr1) {
        if (ptr2) {
            ptr2->next = ptr1->next;
        } else {
            head = ptr1->next;
        }
        delete ptr1;  // 메모리 해제
    }
}

// 리스트 출력 함수
void List::printList() const {
    Node* p = head;
    std::cout << "[";
    while (p) {
        std::cout << p->data;
        p = p->next;
        if (p) { // 다음 노드가 있으면 쉼표와 공백 추가
            std::cout << ", ";
        }
    }
    // 명시적으로 NULL 값을 추가
    std::cout << "]";
    std::cout << std::endl; // 대괄호와 개행 추가
}

// 리스트의 모든 노드 메모리 해제
void List::cleanup() {
    Node* p = head;
    while (p) {
        Node* tmp = p;
        p = p->next;
        delete tmp;
    }
}
