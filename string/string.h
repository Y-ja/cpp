#ifndef STRING_H
#define STRING_H
#include <ostream>

class String
{
    friend std::ostream& operator<<(std::ostream& out, const String& str); // 수정된 친구 함수 선언

private:
    char *str_;
    int len_;

public:
    String();
    String(const char *s);
    String(const String& rhs);
    ~String();

    String& operator=(const String& rhs); // 대입 연산자 오버로딩
    String operator+(const String& rhs) const; // 문자열 더하기 연산자

    bool operator==(const String& rhs) const; // 동등 비교 연산자

    const char* c_str() const; // 문자열을 반환하는 함수
    int length() const; // 문자열 길이 반환
};

#endif
