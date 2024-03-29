#include <fstream>
#include <chrono>
#include <thread>

int main() {
    std::ofstream square_file;                          //파일 스트림 객체를 생성.
    square_file.open("squares.txt");                    //squares.txt라는 이름의 파일 생성
    for (int i= 0; i < 10; ++i)
        square_file << i << "^2 = " << i*i << '\n';     //squares.txt라는 파일에 텍스트 기록.
    square_file.close();

    std::ofstream square_file2{"squares2.txt"};          //파일 스트림 객체를 생성할 때 파일 이름을 지정할 수도 있음.
    for (int i = 0; i< 10; ++i)                         //이렇게 하면 코드가 짧아지고 파일 스트림 객체가 범위에서 벗어날 때 파일이 자동으로 닫힘.
        square_file2 << i << "^3 = " << i*i*i << '\n';

    std::this_thread::sleep_for(std::chrono::seconds(4));

    return 0;
}