#include <iostream>
using namespace std;
int main()
{
    int a = 100;    //
    int &b = a;     //변수 a의 또 다른 이름(별명)을 b라고 선언

    a = a + 100;            //a에 변동이 일어나면 b도 동일한 메모리를 가리키므로 b가 가리키는 데이터도 같이 변동이 일어남.
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    b*=10;
    cout<<"a="<<a<<endl;
    return 0;
}
//참조자는 포인터와 다른 개념이지만 동일한 목적으로 사용할 수 있다.