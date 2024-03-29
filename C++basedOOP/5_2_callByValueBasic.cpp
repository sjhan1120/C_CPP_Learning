#include <iostream>
using namespace std;

void Func(int b)
{
    b=b+10;
    cout<<"b="<<b<<endl;    //b=20
}

int main()
{
    int a(10);  //a=10과 동일
    Func(a);
    cout<<"a="<<a<<endl;    //a=10
    return 0;
}
//변수 a와 b는 독립적인 메모리 공간을 차지함.
//실행함수 내에서 사용된 매개변수를 함수의 기능이 다하면 메모리에서 사라지므로 호출함수의 변수에는 영향을 주지 않음.