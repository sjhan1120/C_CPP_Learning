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

//����ٿ��� ��ĭ���� ���е� ���ڿ����� ����� �μ���μ� ���α׷��� �Էµ�.