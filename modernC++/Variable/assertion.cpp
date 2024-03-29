#define NDEBUG              //단언문을 비활성화 시킴

#include <iostream>
#include <cassert>

int main() {
    int a = 1;
    int b = 2;

    assert(a + b == 2);     //a + b는 2가 아니므로 오류를 출력하고 프로그램을 종료
    return 0;
}