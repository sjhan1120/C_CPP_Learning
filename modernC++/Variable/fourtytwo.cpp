#include <iostream> //입출력 라이브러리에 있는 stream 모형의 기능을 사용하기 위해 <iostream>이라는 표준 헤더를 포함시킴
#include <chrono>
#include <thread>

//입출력 기능은 core language(핵심언어)가 아닌 라이브러리에서 제공함. 따라서 명시적으로 프로그램에 포함시켜야 함(#include)
//core language(핵심언어): #include와 같이 외부에서 가져오지 않아도 사용할 수 있는 C++의 기능들의 통칭용어



int main() //모든 C++프로그램은 main이라는 함수의 호출로 실행됨.
{
    std::cout << "The answer to the Ultimate Question of Life,\n" 
    //std::cout, std::endl는 <iostream>에 정의되어있음.
    //std::cout는 화면에 텍스트를 출력하는데 사용할 수 있는 출력 스트림 객체.
    //연산자 <<를 이용해 임의의 객체를 출력객체에 전달해서 출력연산을 수행함.

    << "The Universe, and Everything is:"
    << std::endl << 6 * 7 << std::endl;
    //std::endl는 한 줄을 끝내고 줄을 바꾸는 효과를 냄. \n를 이용하는 것도 가능함.

    std::this_thread::sleep_for(std::chrono::seconds(4));
    //터미널에서 소스코드를 실행할 경우 콘솔창이 즉시 닫혀 프로그램 결과확인이 불가능함.
    //따라서 위와같은 문장을 추가하여 4초정도 기다리게해서 결과를 확인해 볼 수 있음.
    
    return 0; //main함수는 return문으로 하나의 정수를 돌려주는데, 관례상 정수 0은 프로그램이 정상적으로 종료되었음을 나타냄.
}