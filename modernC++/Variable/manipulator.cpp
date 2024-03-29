#include <iomanip>              //setprecision() 함수를 가지고 있는 헤더
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>               //M_PI를 가지고 있는 헤더
#include <vector>


int main() {
    double pi= M_PI;
    std::cout << pi << '\n';                                            //부동소수점 수의 숫자들 일부만 출력해 정밀도가 떨어짐
    std::cout << "pi is " << std::setprecision(16) << pi << '\n';       //정밀도를 높게 설정해 더 많은 유효숫자가 출력됨.

    std::cout << "pi is " << std::setw(30) << pi << '\n';               //setw()는 너비를 설정하여 값들의 위치를 잘 정렬시키는 함수임
                                                                        //단, 바로 다음 출력의 너비만 바꾸며, 출력된 값이 설정한 너비보다 더 길면 표가 깨짐.

    std::cout   << "pi is " << std::setfill('-') << std::left
                << std::setw(30) << pi << '\n';                         //값을 왼쪽으로 정렬하고, 남은 공간은 특정 문자로 채움
    
    return 0;
}