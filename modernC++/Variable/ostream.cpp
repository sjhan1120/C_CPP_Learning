#include <iostream>
#include <fstream>
#include <sstream>

void write_something(std::ostream& os)
{
    os << "Hi stream, did you know that 3 * 3 = " << 3 * 3 << '\n';
}

int main(int argc, char* argv[])
{
    std::ofstream myfile{"example.txt"};                                //example.txt��� ������ �����.
    std::stringstream mysstream;                                        //mysstream

    write_something(std::cout);                                         //std::cout�� write_something�Լ��� �Ű������� os�� �ȴ�.
    write_something(myfile);                                            //myfile�� �Լ��� �Ű������� �Ǿ� example.txt���Ͽ� �ؽ�Ʈ�� ������
    write_something(mysstream);                                         //��� �� �𸣰ڴ�...

    std::cout << "mysstream is: " << mysstream.str();
}
//�����ϱ� �� ��ƴ�...