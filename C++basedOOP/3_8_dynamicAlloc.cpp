#include <iostream>
#include <string>
using namespace std;

int main()
{
    int *pA = new int;                  //(1) ������ ���� �޸� �Ҵ�(32bit)
    *pA = 100;                          //(2) �Ҵ�� ���� �޸𸮿� ������ ����

    auto *pB=new auto(200);             //(3) ������ ���� �޸� �Ҵ��ϰ� �ʱ�ȭ

    cout<<"pA Value : "<<*pA<<endl;
    cout<<"pB Value : "<<*pB<<endl;
    delete pA, pB;                      //(4) ����� ��ģ 2���� ���� �޸� ����

    int *pData=new int [5];             //(5) ������ �迭 �޸� �Ҵ�
    if(!pData) return 0;                //(6) �Ҵ�Ǿ����� Ȯ��, �Ҵ�Ǹ� Ư�� �ּҰ� ��ȯ, �Ҵ��� �ȵǸ� NULL, 0��ȯ

    for(int i=0; i<5; i++) pData[i] = i*10;

    cout<<"pData[2] : "<< pData[2] << endl;
    delete [] pData;                    //(7) ����� ��ģ ���� �迭�� ���� �޸� ����

    int *pC=new int [4] {10, 20, 30, 40};   //(8) ������ �迭 ���� �޸� �Ҵ� �� �ʱ�ȭ
    cout<<pC[0]+pC[1]<<endl;
    delete [] pC;

    string *pStr=new string[2];         //(9) string class�� �̿��� ���ڿ� ���� ���� �޸� �Ҵ�
    if(!pStr) return 0;

    pStr[0]="Korea is ";
    pStr[1]="Very Good";

    cout<<pStr[0]+pStr[1];


    return 0;
}                                       //(10) ���� �Ҵ� �޸� pStr�� }�� ���� �޸𸮿��� �ڵ����� ����