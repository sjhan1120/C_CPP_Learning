//do-while은 실행문을 먼저 실행하고 조건을 검색함.
#include <iostream>
using namespace std;

int main()
{
    int nNumber = 10;

    do
    {
        cout << "변수값: " << nNumber << endl;
        ++nNumber;
    } while(nNumber <= 6);

    cout << "최종값: " << nNumber << endl;
    return 0;
}