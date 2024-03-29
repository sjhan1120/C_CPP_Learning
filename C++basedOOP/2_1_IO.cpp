#include <iostream>
using namespace std;

int main()
{
    int nA=10, nB(20);
    auto nC(30);
    printf("데이터1 = %d, 데이터2 = %d, 데이터3 = %d \n", nA, nB, nC);

    cout << "printf, cout 비교 \n";

    nA=nA+100;
    nB=nB+100;
    nC=nC+100;

    cout << "데이터1 = " << nA << ", 데이터2 =" << nB << ", 데이터3 = " << nC << endl;

    return 0;
}