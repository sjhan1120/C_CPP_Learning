#include <iostream>
using namespace std;

int main()
{
    int nArray[5]={10,20,30,40,50};

    cout<<"nArray=";
    for(int i = 0; i<5; i++) cout << nArray[i] << ",";

    cout<<"\nnArray[0] �ּ�: "<<&nArray[0]<<endl;
    cout<<"nArray �ּ�: " << nArray<<endl<<endl;    //�迭�̸� nArray ��ü�� �迭�� �����Ͱ� ����� ù��° �ּ�,
                                                    //1���� �迭�Ӹ� �ƴ϶� n���� �迭�� �迭�̸��� ù��° �����Ͱ� ����� ���� �ּҸ� �ǹ���.

    cout<<"nArray[0]="<<nArray[0]<<endl;
    cout<<"*nArray ="<<*nArray<<endl<<endl;         //*nArray�� 0��° �ּ��� ������ ������

    cout<<"nArray[2] ="<<nArray[2]<<endl;
    cout<<"*(nArray+2) ="<<*(nArray+2)<<endl;       //nArray[2]�� *(nArray+2)�� ������ ��ġ�� ������ ������
                                                    //nArray[2]�� �ּҴ� nArray+2�� ����.
    return 0;
}