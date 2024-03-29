#include <iostream>

int main() {

    long l2 = 1234567890123;    //32비트 환경에서는 우항을 모두 담을 수 없어서 값이 변환됨.(오버플로우)
    std::cout << l2 << "\n";

    long l{1234567890123};      //중괄호를 씌워주면 값이 변환되어 나오는걸 감지하고 막을 수 있음.
    std::cout << l << "\n";

    unsigned u2 = -3;           //음수가 사라짐.
    std::cout << u2 << "\n";

    unsigned u2n = {-3};        //음수가 사라지므로 오류.
    std::cout << u2n << "\n";




    unsigned u3 = {3};
    int i2 = {2};

    unsigned u4 = {i2};         //int 변수는 양수와 음수를 표현할 수 있지만 unsinged는 음수 표현 불가로 오류.
    int i3 = {u3};              //unsigned int는 표현 가능한 최대값이 int보다 크기 때문에 오류.
    //변수가 가지는 형식이 바꿀려는 형식으로 표현이 불가능한 것들이 있다면 그냥 오류뜨는 듯...

    return 0;
}