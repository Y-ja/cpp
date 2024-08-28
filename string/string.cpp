#include <cstring>
#include <cassert>
#include "string.h"

// 기본 생성자
String::String() : str_(new char[1]), len_(0) {
    assert(this->str_);
    this->str_[0] = '\0';
}

// 문자열을 인자로 받는 생성자
String::String(const char *s) : len_(strlen(s)) {
    this->str_ = new char[len_ + 1];
    assert(this->str_);
    strcpy(this->str_, s);
}

// 복사 생성자
String::String(const String& rhs) : len_(rhs.len_) {
    this->str_ = new char[len_ + 1];
    assert(this->str_);
    strcpy(this->str_, rhs.str_);
}

// 소멸자
String::~String() {
    delete[] str_;
}

// 대입 연산자 오버로딩
String& String::operator=(const String& rhs) {
    if (this != &rhs) { // 자기 대입 방지
        delete[] str_; // 기존 자원 해제

        len_ = rhs.len_;
        str_ = new char[len_ + 1]; // +1을 추가하여 null 문자 저장
        assert(this->str_);
        strcpy(this->str_, rhs.str_);
    }
    return *this;
}

// 문자열 더하기 연산자
String String::operator+(const String& rhs) const {
    int newLen = len_ + rhs.len_;
    char *newStr = new char[newLen + 1]; // +1은 null 문자 용

    assert(newStr);
    strcpy(newStr, str_);
    strcat(newStr, rhs.str_);

    String result;
    delete[] result.str_; // 이전에 할당된 메모리 해제
    result.str_ = newStr;
    result.len_ = newLen;

    return result;
}

// 동등 비교 연산자
bool String::operator==(const String& rhs) const {
    return (len_ == rhs.len_) && (strcmp(str_, rhs.str_) == 0);
}

// 문자열을 반환하는 함수
const char* String::c_str() const {
    return str_;
}

// 문자열 길이 반환
int String::length() const {
    return len_;
}

// 출력 연산자 오버로딩
std::ostream& operator<<(std::ostream& out, const String& str) {
    out << str.c_str();
    return out;
}
