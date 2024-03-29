#include <iostream>
#include <fstream>
#include <sstream>

void write_something(std::ostream& os)
{
    os << "Hi stream, did you know that 3 * 3 = " << 3 * 3 << '\n';
}

int main(int argc, char* argv[])
{
    std::ofstream myfile{"example.txt"};                                //example.txt라는 파일을 만든다.
    std::stringstream mysstream;                                        //mysstream

    write_something(std::cout);                                         //std::cout는 write_something함수의 매개변수인 os가 된다.
    write_something(myfile);                                            //myfile은 함수의 매개변수가 되어 example.txt파일에 텍스트가 써진다
    write_something(mysstream);                                         //얘는 잘 모르겠다...

    std::cout << "mysstream is: " << mysstream.str();
}
//이해하기 좀 어렵다...