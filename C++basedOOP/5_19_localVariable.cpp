#include <iostream>
using namespace std;

int main()
{
    int i=10, j=10;             //1��
    printf("1. j= %d\n",j);

    if(i>0)
    {
        int j=20;               //2��: int j�� �� ����Ǿ���.
        printf("2. j=%d\n",j);
    }                           //�� �� 2�� int j�� �޸𸮿��� ������
    printf("3. j=%d\n", j);
    return 0;
}// 1�� ���� ������ �޸𸮿��� ������.