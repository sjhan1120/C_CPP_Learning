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
    int (*fpAddSub)(int, int);          //(1) �Լ������� ����: �����Լ��� ������ �ڷ������� �Լ� ������ ����,
                                        //                    ���⼭ ������ �Լ� ������ �̸��� fpAddSub �̴�.

    fpAddSub= &Add;                     //(2) �����Լ�1 �ּҸ� �Լ������Ϳ� ����, fpAddSub=Add; �� ������.
    k=(*fpAddSub)(i, j);                //(3) �����Լ�1 �ּҸ� ���� �Լ������͸� ȣ���Ͽ� ���ϱ� ����� �� ����� �ǵ��� �ش�.
    printf("%d+%d=%d\n", i, j, k);

    fpAddSub = &Sub;                    //(4)�����Լ�2 �ּҸ� �Լ������Ϳ� ����
    k=(*fpAddSub)(i, j);                //(5)�����Լ�2 �ּҸ� ���� �Լ������͸� ȣ���Ͽ� ���� ���
    printf("%d-%d=%d\n", i, j, k);
    return 0;
}