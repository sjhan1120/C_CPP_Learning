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
    cout<< dec << nX << "(10), " << hex << nX << "(16)" << endl;    //dec: ���� ����� ���� �� 10���� ���, hex: 16���� ���.

    return 0;
}