#include  <iostream>
using namespace std;

int main()
{
    int nData= 100;
    cout<<"address= " << &nData<<", Data="<<nData<<endl;

    int *pData1= &nData;
    cout<<"address= " << pData1<<", Data="<<*pData1<<endl;

    int *pData2;
    pData2=&nData;

    *pData2=200;
    cout<<"address= "<<pData2<<", Data="<<*pData2<<endl;

    int* pData3=new int;
    *pData3 = 300;
    cout<<"address= "<<pData3<<", Data=" <<*pData3<<endl;

    int* pData4=new int(400);
    cout<<"address= "<<pData4<<", Data=" <<*pData4<<endl;

    cout<<"address= "<<pData1<<", Data=" <<*pData1<<endl; 

    //���α׷� ���� �ܷΰ��� ������ �ּҴ� PC���� ����ϴ� �ð����� �޸� ���¿� ���� �ٸ� �� ����.

    return 0;
}