#include <iostream>
#include <string>


using namespace std;
int main() {

    short i = 32768;            //short는 최대 32767이므로 32768로 하면 -32768이 나옴.
    char c = 'f'+3;             //char는 문자와 수치를 한 표현식 안에서 함께 사용할 수도 있음.
    char a = 97;                //char는 아스키코드에 따름. 97은 a에 해당함.
    char name[8] = "Herbert";   //구식 C문자열은 항상 char 형식의 값 0으로 끝남.
    char name2[2] = "a";        //'a'는 하나의 문자 a, "a"는 끝에 0이 있는 하나의 문자 배열이다.(형식은 const char[2])
    std::string name3 = "Herbert";  //문자열을 다루는 표준 라이브러리의 클래스 string은 <string>헤더를 포함시켜야함.
                                     //s라는 접미사를 붙여 문자열 리터럴을 string 객체로 취급하게 만들 수도 있다.
    bool boll = name == name3;  //name과 name3 모두 Herbert라는 문자 배열이므로 똑같음.
    name3 = name3 + ", our cool anti-hero";

    std::cout << i << "\n";
    std::cout << c << "\n";
    std::cout << a << "\n";
    std::cout << name << "\n";
    std::cout << name[11] << "\n";       //문자열 끝이 항상 0으로 끝나는 이유? name[11]을 했을 때 갑자기 a가 나오는 이유?
    std::cout << name2 << "\n";
    std::cout << boll << "\n";
    std::cout << name3;

    return 0;
}