#include <iostream>
using namespace std;

int i, j;       //전역변수
void Test()
{
    i=100; j=30;
    printf("1. 전역 j= %d\n", j);
}

int main()
{
    int j=20;       //지역변수로 j=20 선언
    Test();
    printf("2. 지역 j= %d\n", j);       //지역변수 j
    printf("3. 전역 j= %d\n", ::j);     //전역변수 j    변수명 앞에 ::붙이면 전역변수가 됨.
    printf("4. 전역 i= %d\n", i);       //전역변수 i

    return 0;
}