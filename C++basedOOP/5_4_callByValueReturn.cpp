#include <iostream>
using namespace std;

int sum(int nX, int nY)
{
    int nZ = nX + nY;
    return nZ;
}

int main()
{
    int j = 10, k = 20, nSum;
    printf("초기 값 : j = %d, k = %d\n", j, k);

    //10, 20을 복사해주고 되돌아온 결과는 nSum에 저장한다.
    nSum=sum(j, k);

    printf("반환된 값 : %d\n", nSum);
    return 0;
}