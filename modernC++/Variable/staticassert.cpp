#include <iostream>

int main() {
    static_assert(sizeof(int) >= 4,
        "int is too small on this platform for 70000");
    const int capacity = 70000;

    return 0;
}

//정수 리터럴 70000을 int 변수에 담으려 한다. 그 전에 코드는 현재 플랫폼의 int가 실제로 그 정도의 값을 담을 수 있는 크기인지 점검한다.
//솔직히 뭔말인지 모르겠다....