#include <iostream>
using namespace std;

int main()
{
    int i=10, j=10;             //1번
    printf("1. j= %d\n",j);

    if(i>0)
    {
        int j=20;               //2번: int j가 재 선언되었음.
        printf("2. j=%d\n",j);
    }                           //이 때 2번 int j가 메모리에서 해제됨
    printf("3. j=%d\n", j);
    return 0;
}// 1번 선언 변수가 메모리에서 해제됨.