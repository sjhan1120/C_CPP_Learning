#include <iostream>
using namespace std;

int Add(int a, int b)
{
    int c = a + b;
    return c;
}
int Sub(int a, int b)
{
    int c = a - b;
    return c;
}
int main()
{
    int i=1, j=3, k;
    int (*fpAddSub)(int, int);          //(1) 함수포인터 선언: 실행함수와 동일한 자료형으로 함수 포인터 선언,
                                        //                    여기서 선언한 함수 포인터 이름은 fpAddSub 이다.

    fpAddSub= &Add;                     //(2) 실행함수1 주소를 함수포인터에 저장, fpAddSub=Add; 도 가능함.
    k=(*fpAddSub)(i, j);                //(3) 실행함수1 주소를 갖는 함수포인터를 호출하여 더하기 계산한 후 결과를 되돌려 준다.
    printf("%d+%d=%d\n", i, j, k);

    fpAddSub = &Sub;                    //(4)실행함수2 주소를 함수포인터에 저장
    k=(*fpAddSub)(i, j);                //(5)실행함수2 주소를 갖는 함수포인터를 호출하여 빼기 계산
    printf("%d-%d=%d\n", i, j, k);
    return 0;
}