#include <iostream>
using namespace std;

int main()
{
    int nA, nB;
    char chData;
    char strData[6];
    cout << "정수와 문자, 문자열을 입력하세요 : " << endl;
    cin >> nA >> nB;
    cin >> chData;
    cin >> strData;
    printf("정수1 = %d, 정수2 = %d, 문자 = %c, 문자열 %s\n", nA, nB, chData, strData);
    return 0;
}