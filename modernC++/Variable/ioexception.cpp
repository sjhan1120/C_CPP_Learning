#include <iostream>
#include <fstream>

int main ()
{
    //파일이 존재하지 않아도 스트림 객체는 오류 없이 생성됨.
    //std::ifstream infile("some_missing_file.xyz");

    //int i;
    //double d;
    //infile >> i >> d;

    //std::cout << "i is " << i << ", d is " << d << '\n';
    //infile.close();

    //파일이 잘 열릴 때까지 사용자에게 파일 이름을 물음. 파일을 열어서 그 내용을 읽은 후에는 내용이 실제로 잘 읽혔는지 점검함.
    std::ifstream infile;
    std::string filename{"some_missing_file.xyz"};
    bool opened= false;
    while (!opened) {
        infile.open(filename);
        if (infile.good()) {
            opened= true;
        } else {
            std::cout   << "The file '" << filename
                        << "' doesn't exist (or can't be opened),"
                        << "please give a new filename: ";
            std::cin    >> filename;
        }
    }
    int i;
    double d;
    infile >> i >> d;

    if (infile.good())
        std::cout << "i is " << i << ", d is " << d << '\n';
    else
        std::cout << "Could not correctly read the content.\n";
    infile.close();
}