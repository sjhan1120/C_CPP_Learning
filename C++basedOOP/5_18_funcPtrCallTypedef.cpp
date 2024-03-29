#include <iostream>
#include <cmath>            //추가: 제곱기능 수행
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

typedef int(*fpAS)(int, int);

int Calculate(int i, int j, fpAS FP)       //(3) 실행함수3에서 3번째 매개변수는 함수포인터로 fpAS 매개변수에 전달됨.
{
    int k=FP(i, j);       // (4) Add 함수 주소가 저장된 fpAs() 즉 Add() 실행함수가 실행.
    k=pow(k, 3);            // (5) k의 3제곱
    return k;
}
int main()
{
    int i=1, j=3, k;

    //int (*fpCal)(int, int);           //  (1) main()에서는 함수 포인터를 사용하지 않아 삭제
    k=Calculate(i,j,Add);               //  (2) Calculate() 실행함수에 Add()함수의 포인터인 Add를 매개변수로 전달
    printf("(%d+%d)**3=%d\n",i,j,k);

    k=Calculate(i,j,Sub);               //  (6) Calculate() 실행함수에 Sub()함수 함수포인터를 매개변수로 전달하여 상기 과정 반복
    printf("(%d-%d)**3=%d\n",i,j,k);
    return 0;
}