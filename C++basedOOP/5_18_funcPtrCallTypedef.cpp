#include <iostream>
#include <cmath>            //�߰�: ������� ����
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

int Calculate(int i, int j, fpAS FP)       //(3) �����Լ�3���� 3��° �Ű������� �Լ������ͷ� fpAS �Ű������� ���޵�.
{
    int k=FP(i, j);       // (4) Add �Լ� �ּҰ� ����� fpAs() �� Add() �����Լ��� ����.
    k=pow(k, 3);            // (5) k�� 3����
    return k;
}
int main()
{
    int i=1, j=3, k;

    //int (*fpCal)(int, int);           //  (1) main()������ �Լ� �����͸� ������� �ʾ� ����
    k=Calculate(i,j,Add);               //  (2) Calculate() �����Լ��� Add()�Լ��� �������� Add�� �Ű������� ����
    printf("(%d+%d)**3=%d\n",i,j,k);

    k=Calculate(i,j,Sub);               //  (6) Calculate() �����Լ��� Sub()�Լ� �Լ������͸� �Ű������� �����Ͽ� ��� ���� �ݺ�
    printf("(%d-%d)**3=%d\n",i,j,k);
    return 0;
}