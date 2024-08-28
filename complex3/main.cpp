#include <iostream>
#include "com3.h"

int main() {
    List list;

    // 리스트에 첫 번째 노드 삽입
    list.insertFirstNode(4);
    list.printList();  // 출력: [4]

    // 리스트의 맨 앞에 노드 삽입
    list.insertFirstNode(3);
    list.printList();  // 출력: [3, 4]

    // 리스트의 맨 앞에 노드 삽입
    list.insertFirstNode(1);
    list.printList();  // 출력: [1, 3, 4]

    // 특정 노드 뒤에 새 노드 삽입
    list.insertNode(1, 2);  // 1 뒤에 2를 삽입
    list.printList();  // 출력: [1, 2, 3, 4]

    // 값이 3인 노드 삭제
    list.deleteNode(3);
    list.printList();  // 출력: [1, 2, 4]

    // 리스트의 모든 노드 메모리 해제는 소멸자에서 자동으로 처리됩니다.

    return 0;
}
