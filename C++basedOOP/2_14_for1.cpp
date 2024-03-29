//1부터 5까지 순서대로 더하는 프로그램.
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int nN = 0;

    for (int i = 1; i <= 5; i++)
    {
        nN += i;
        cout << "1부터 " << to_string(i) << "까지의 합: " << nN << endl;
        //to_string(정수)는 정수를 문자 정수로 바꾸어 주는 string class 멤버함수
        
    }
    return 0;
}