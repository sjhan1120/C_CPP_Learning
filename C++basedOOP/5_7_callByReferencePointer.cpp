#include <iostream>
using namespace std;

void Func(int &b)
{
    b=b+10;
    cout << "b=" << b << endl;
}
int main()
{
    int *a = new int;
    *a = 10;
    Func(*a);

    cout<<"a="<<*a<<endl;
    return 0;
}
//포인터변수 *a와 동일한 메모리 공간을 갖는 또 다른 이름 매개변수 b로 함수에서 받는다면 추가의 메모리는 소요되지 않는다.
//앞의 예제와 마찬가지로 두개의 변수 중 하나의 데이터가 바뀌면 또 따른 변수 값도 동시에 바뀔 수밖에 없는 것은 참조자의 특징이다.