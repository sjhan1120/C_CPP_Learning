#include <iostream>



int main()
{
    int a = 5;          //a#1 선언
    {
        a = 3;          //a#1 배정
        std::cout << a << std::endl;
        int a;          //a#2 선언
        std::cout << a << std::endl;
        //쓰레기값. a#2를 선언만 해주었을 뿐 초기화는 시키지 않았으므로 a#2에는 쓰레기 값이 들어가있음.
        //쓰레기값이 있는 이유는 변수를 선언만 하고 값은 넣지 않으므로서 램 효율을 올릴 수 있고
        //scanf처럼 사용자가 입력한 값을 받을 수도 있기 때문

        a = 8;          //a#2 배정
        std::cout << a << std::endl;
        {
            a = 7;      //a#2 배정
            std::cout << a << std::endl;
        }               //a#2 범위 끝
    }
    a = 11;             //a#1 배정
    std::cout << a << std::endl;

    return 0;
}