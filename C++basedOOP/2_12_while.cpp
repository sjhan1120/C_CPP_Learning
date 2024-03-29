//변수의 값을 증가시켜가면서 변수값이 6이하일 때는 실행문을 반복 실행. 6을 초과하면 반복문 빠져나오기.
#include <iostream>
using namespace std;

int main()
{
    int nNumber = 0;

    while(nNumber <= 6)
    {
        cout << "변수값: " << nNumber << endl;
        ++nNumber;
    }

    cout << "최종값: " << nNumber << endl;
    return 0;
}