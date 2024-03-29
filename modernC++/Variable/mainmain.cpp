#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

int main(int argc, char* argv[])
{
    for (int i = 0; i < argc ; ++i)
        cout << argv[i] << endl;
        return 0;

    std::this_thread::sleep_for(std::chrono::seconds(4));
}

//명령줄에서 빈칸으로 구분된 문자열들이 명령줄 인수들로서 프로그램에 입력됨.