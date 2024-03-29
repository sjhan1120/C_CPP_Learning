#include <iostream>
using namespace std;

int main()
{
    int nX, nY;
    nX= 635;
    nY= 0x635;
    printf("%d(10), %x(16)\n", nX, nX);
    printf("%d(10), %x(16)\n", nY, nY);
    cout<<"-------------------------\n";
    cout<< dec << nX << "(10), " << hex << nX << "(16)" << endl;    //dec: 정수 입출력 연산 시 10진법 사용, hex: 16진법 사용.

    return 0;
}