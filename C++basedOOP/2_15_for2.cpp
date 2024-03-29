//5부터 1까지 중 홀수 값을 더하는 프로그램.
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int nN;

    for (int i = 5; i > 0; i -= 2)
    {
        nN += i;
        cout << "5부터 " + to_string(i) + "까지의 홀수의 합= " << nN << endl;
    }
    return 0;
}