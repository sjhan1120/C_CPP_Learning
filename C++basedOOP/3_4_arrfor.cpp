#include <iostream>
using namespace std;

int main()
{
    int nData[]={3,6,2,5};

    for(int i=0; i<4; i++) cout << nData[i];
    cout << "\n" << "-------------\n";

    for(int nValue:nData) cout <<nValue;
    cout << "\n" << "-------------\n";
    
    for(auto nValue:nData) cout <<nValue;   //배열 자료형과 복사되는 자료형이 동일하여야함. auto를 사용하면 자동으로 자료형을 맞춰줌.
    cout << "\n" << "-------------\n";

    for(auto &nValue:nData) cout<<nValue;   //처음 반복할 때 nData[0]과 nValue의 메모리 위치는 동일함.
    return 0;
}