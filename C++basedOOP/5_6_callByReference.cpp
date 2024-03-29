#include <iostream>
using namespace std;

void Func(int &b)
{
    b=b+10;
    cout<<"b="<<b<<endl;    //b=20
}
int main()
{
    int a(10);
    Func(a);

    cout<<"a="<<a<<endl;    //a=20
    return 0;
}
//변수 a와 동일한 메모리 공간을 갖는 또 다른 이름b로 함수에서 매개변수로 받는다면 추가의 메모리는 소요되지 않을 것이다.
//따라서 어느 하나의 변수가 바뀌면 다른 하나의 변수도 동시에 바뀔 수밖에 없다.