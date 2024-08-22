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
**C++:**
```c
int* ptr = new int;
delete ptr;
```

## 4. 생성자와 소멸자 🛠️
C++에서는 생성자와 소멸자를 사용하여 객체의 초기화와 정리를 자동으로 처리합니다. 생성자는 객체가 생성될 때 호출되며, 소멸자는 객체가 소멸될 때 호출됩니다

*예제 코드:**
- **C:**
```c
void Stack_init(Stack* s, int size);
void Stack_cleanup(Stack* s);

```
**C++:**
```c
class Stack {
public:
  Stack(int size);   // 생성자
  ~Stack();          // 소멸자
};
```

## 5. 접근 지정자 🔒
C++에서는 클래스의 멤버에 대한 접근을 제어하기 위해 private, public, protected 접근 지정자를 사용합니다. 이를 통해 데이터 은닉과 인터페이스 설계를 효율적으로 관리할 수 있습니다.

*예제 코드:**
- **C:**
```c
typedef struct {
  int* array;
  int top;
} Stack;
```
**C++:**
```c
class Stack {
private:
  int* array;
  int top;
public:
  void push(int value);
  int pop();
};
```

## 6. 구조체와 클래스 🏛️
C의 구조체는 단순히 데이터 필드의 집합입니다. C++의 클래스는 구조체의 기능에 멤버 함수와 접근 제어를 추가한 형태입니다. 클래스를 사용하여 더 강력한 데이터 캡슐화와 추상화를 구현할 수 있습니다.

*예제 코드:**
- **C:**
```c
typedef struct {
  int* array;
  int top;
} Stack
```
**C++:**
```c
class Stack {
private:
  int* array;
  int top;
public:
  Stack(int size);
  ~Stack();
  void push(int value);
  int pop();
};
```
