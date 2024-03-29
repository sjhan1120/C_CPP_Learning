#include <iostream>
using namespace std;

void Func(int b)
{
    b=b+10;
    cout<<"b="<<b<<endl;    //b=20
}

int main()
{
    int *a=new int;  //a=10과 동일
    *a=10;
    Func(*a);

    cout<<"a="<<*a<<endl;    //a=10
    return 0;
}
//포인터의 역참조로 데이터를 넘겨주는 방식. 동작 결과는 5_2와 같다.