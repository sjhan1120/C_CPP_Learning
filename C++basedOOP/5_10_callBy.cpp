#include <iostream>
using namespace std;

void Reference(int nX, int &nY, int *pZ, int &nA, int *pA, int pB)
{
    nX = 10;
    nY = nX * nY;
    *pZ=30;
    nA=nX*4;
    *pA=nX+40;
    pB=-10;
}

int main()
{
    int i=1, nValue=2, nScore;
    int *pData1=new int(3);
    int *pData2=new int(4);
    int *pData3=new int(5);

    cout<<"초기값 : ";
    cout<<"i= "<<i<<endl;

    cout<<"nValue="<<nValue<<", nScore="<<nScore<<endl;
    cout<<"pData1="<<*pData1<<", pData2="<<*pData2<<endl;
    cout<<"pData3="<<*pData3<<endl;

    Reference(i, nValue, &nScore, *pData1, pData2, *pData3);

    cout<<"-----------\n";
    cout<<"변경된 값 : ";
    cout<<"i= "<<i<<endl;

    cout<<"nValue="<<nValue<<", nScore="<<nScore<<endl;
    cout<<"pData1="<<*pData1<<", pData2="<<*pData2<<endl;
    cout<<"pData3="<<*pData3<<endl;

    return 0;
}
/*
i는         메모리 공유x    값 호출
nValue      메모리 공유o    참조 호출
&Socre      메모리 공유o    pointer 호출
*pData1     메모리 공유o    참조 호출
pData2      메모리 공유o    pointer 호출
*pData3     메모리 공유x    값 호출
*/