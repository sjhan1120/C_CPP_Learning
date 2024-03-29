#include <fstream>
#include <chrono>
#include <thread>

int main() {
    std::ofstream square_file;                          //���� ��Ʈ�� ��ü�� ����.
    square_file.open("squares.txt");                    //squares.txt��� �̸��� ���� ����
    for (int i= 0; i < 10; ++i)
        square_file << i << "^2 = " << i*i << '\n';     //squares.txt��� ���Ͽ� �ؽ�Ʈ ���.
    square_file.close();

    std::ofstream square_file2{"squares2.txt"};          //���� ��Ʈ�� ��ü�� ������ �� ���� �̸��� ������ ���� ����.
    for (int i = 0; i< 10; ++i)                         //�̷��� �ϸ� �ڵ尡 ª������ ���� ��Ʈ�� ��ü�� �������� ��� �� ������ �ڵ����� ����.
        square_file2 << i << "^3 = " << i*i*i << '\n';

    std::this_thread::sleep_for(std::chrono::seconds(4));

    return 0;
}