#include <iostream>
#include <cmath>

using namespace std;
void increment(int x)       //값 전달. 함수밖에 영향 안줌
{
    x++;
}
void increment2(int& x)     //참조 전달. 함수밖에도 영향 줌.
{
    x++;
}
void increment3(int& x)     //
{
    int e = 0;
    e = x;
    cout << e << "\n";
}
inline double square(double x) { return x*x; }

int divide(int a, int b) {
    return a / b;
}
float divide(float a, float b) {
    return std::floor( a / b );
}



int main() {
    int i = 4;
    int j = 4;
    increment(i);
    increment2(j);
    cout << "i is " << i << '\n';
    cout << "j is " << j << '\n';

    const int a = 4;
    //increment2(a); <-함수 내에서 a라는 인수를 실제로 사용하지만 a는 상수임.
    //상수는 배정문 좌변에 올 수 없으므로 연산이 컴파일 시점에서 금지됨

    cout << square(4) << std::endl;

    //overload resolution(중복적재 해소)
    int x = 4, y = 2;
    float n = 5.0, m= 2.0;
    std::cout << divide(x,y) << std::endl;
    std::cout << divide(n,m) << std::endl;
    //std::cout << divide(x,m) << std::endl;    //오류: 중의적 호출: 정확히 일치하는 버전이 없고
                                                //인수들의 inplicit conversion(암묵적 변환) 결과는 두 버전 모두에 부합함.

    return 0;
}