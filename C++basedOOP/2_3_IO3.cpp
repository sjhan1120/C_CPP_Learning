//scanf가 정상작동하지 않음. 나중에 다시 시도 해볼 것.
//cin은 정상작동 확인.

#include <iostream>
using namespace std;

int main()
{
    int nA, nB;
    char chData;
    char strData[6];
    printf("정수와 문자, 문자열을 입력하세요\n");

    scanf("%d, %d, %c, %s", &nA, &nB, &chData, &strData);
    printf("정수1 = %d, 정수2 = %d, 문자 = %c, 문자열 %s\n", nA, nB, chData, strData);

    return 0;
}