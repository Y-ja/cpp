#include <iostream>
int main(){
    // 연산자 함수를 직접 호출하는 방법
    operator<<(std::cout, "HELLO WORLD");
    std::cout.operator<<("HELLO WORLD");

    operator<<(std::cout , "HELLO WORLD").operator<<(std::endl);

    // 스트림을 플러시하거나 줄을 바꾸는 것이 좋습니다
    std::cout << std::endl;
    return 0;
}