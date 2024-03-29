#include <iostream>


struct NONONO {};           //빈 중괄호 쌍과 세미콜론으로 된 빈 클래스를 정의해서 예외 형식으로 사용함.


int main() {
    int i= 2;
    int j= 2;
    if(i + j != 3)
        throw NONONO{};     //i + j는 3이 아니므로 NONONO라는 예외가 나옴.

    std::cout << i + j;     //따라서 이거는 실행 안됨.
    return 0;
}