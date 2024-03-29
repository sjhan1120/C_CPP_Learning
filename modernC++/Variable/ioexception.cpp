#include <iostream>
#include <fstream>

int main ()
{
    //������ �������� �ʾƵ� ��Ʈ�� ��ü�� ���� ���� ������.
    //std::ifstream infile("some_missing_file.xyz");

    //int i;
    //double d;
    //infile >> i >> d;

    //std::cout << "i is " << i << ", d is " << d << '\n';
    //infile.close();

    //������ �� ���� ������ ����ڿ��� ���� �̸��� ����. ������ ��� �� ������ ���� �Ŀ��� ������ ������ �� �������� ������.
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