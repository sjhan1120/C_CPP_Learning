#include <iostream>
using namespace std;

int main()
{
    int nData[]={3,6,2,5};

    for(int i=0; i<4; i++) cout << nData[i];
    cout << "\n" << "-------------\n";

    for(int nValue:nData) cout <<nValue;
    cout << "\n" << "-------------\n";
    
    for(auto nValue:nData) cout <<nValue;   //�迭 �ڷ����� ����Ǵ� �ڷ����� �����Ͽ�����. auto�� ����ϸ� �ڵ����� �ڷ����� ������.
    cout << "\n" << "-------------\n";

    for(auto &nValue:nData) cout<<nValue;   //ó�� �ݺ��� �� nData[0]�� nValue�� �޸� ��ġ�� ������.
    return 0;
}