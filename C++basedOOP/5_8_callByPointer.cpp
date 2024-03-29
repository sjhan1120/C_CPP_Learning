//실행함수가 포인터 형식의 매개변수로 받아 동일한 겨로가를 얻게 하는 과정
#include <iostream>
using namespace std;
void Func(int *b)
{
    *b=*b+10;
    cout<<"b="<<*b<<endl;   //b=20
}
int main()
{
    int a(10);
    Func(&a);               //여기서 &는 참조자 아닌 주소 연산자임.

    cout<<"a="<<a<<endl;       //a=20
    return 0;
}