#ifndef RATIONAL_H
#define RATIONAL_H

#include <iostream>

class Rat
{
private:
    int num_; // 분자
    int den_; // 분모
    void reduce(); // 약분 메서드
public:
    Rat(int num = 0, int den = 1); // 생성자
    Rat(const Rat& rhs); // 복사 생성자
    ~Rat(); // 소멸자

    // Getter 및 Setter
    int getNum() const;
    int getDen() const;
    void setNum(int num);
    void setDen(int den);

    // 비교 연산자
    bool operator==(const Rat& rhs) const;

    // 대입 연산자
    Rat& operator=(const Rat& rhs);

    // 출력 연산자
    friend std::ostream& operator<<(std::ostream& os, const Rat& r);

    // 논리 부정 연산자
    bool operator!() const;

    // 산술 연산자
    Rat operator+(const Rat& rhs) const;
    Rat operator-(const Rat& rhs) const;

    // 전위 증가 연산자
    const Rat& operator++(); 

    // 후위 증가 연산자
    Rat operator++(int);
};

#endif // RATIONAL_H
