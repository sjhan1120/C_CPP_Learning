#include <iostream>
using namespace std;

void Test()
{
    cout<<" 함수 첫 발걸음입니다.\n";
    return;     //여기서 void 함수인 경우에는 return은 일반적으로 생략
}
int main()
{
    for(int j=0; j<3; j++) Test();
    return 0;
}