#include <iostream>
using namespace std;

void Test()
{
    int nData1=10;
    static int nData2=10;               //�� �ѹ��� ���α׷����� �����. �ʱⰪ�� �����ǰ� 2���� ���ķ� �� ��ɾ �������� ������� ����.
                                        //����� ������ �޸𸮿��� �����Ѵٴ� ���� �����Ͽ��� ��.
    cout<<" nData1 = "<<nData1;
    cout<<", nData2 = "<<nData2<<endl;
    nData1++;   nData2++;
}

int main()
{
    for(int i=0; i<5; i++)  Test();
    //nData2=2;                         //���������� ������ ������Ƿ� nData2��� ������ main()���� ���� �����������.
    return 0;
}