# C에서 C++로의 전환 🆙

## 1. 파일 확장자 🗂️
C에서는 `.c` 확장자를 사용하지만, C++에서는 `.cpp` 확장자를 사용합니다. 이 변경은 파일이 C++ 컴파일러에 의해 처리됨을 나타냅니다.

**예제 코드:**
- **C:** `example.c`
- **C++:** `example.cpp`

## 2. 객체지향 프로그래밍 (OOP) 📦
C에서는 함수 기반으로 프로그래밍을 합니다. 객체지향 프로그래밍을 도입한 C++에서는 함수가 객체의 멤버 함수로 변환됩니다. 객체의 상태와 동작을 한 클래스 안에 캡슐화하여 관리합니다.

**예제 코드:**
- **C:**
  ```c
  void push(Stack* s, int value);
  ```
- **C++:**
```c
class Stack {
public:
  void push(int value);
};
```

## 3. 메모리 관리 🧠
C에서는 malloc()과 free()를 사용하여 동적 메모리를 관리합니다. C++에서는 new와 delete 연산자를 사용하여 객체의 생성과 소멸을 처리합니다. C++의 new와 delete는 객체의 생성자와 소멸자를 호출합니다.

*예제 코드:**
- **C:**
  ```c
 int* ptr = (int*)malloc(sizeof(int));
 free(ptr);
  ```
- **C++:**
```c
int* ptr = new int;
delete ptr;
```

