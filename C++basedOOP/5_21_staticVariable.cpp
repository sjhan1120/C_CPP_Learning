#include <iostream>
using namespace std;

void Test()
{
    int nData1=10;
    static int nData2=10;               //단 한번만 프로그램에서 실행됨. 초기값만 설정되고 2번쨰 이후로 이 명령어를 만나더라도 실행되지 않음.
                                        //변경된 값으로 메모리에서 상주한다는 것을 유의하여야 함.
    cout<<" nData1 = "<<nData1;
    cout<<", nData2 = "<<nData2<<endl;
    nData1++;   nData2++;
}

int main()
{
    for(int i=0; i<5; i++)  Test();
    //nData2=2;                         //정적변수의 범위를 벗어났으므로 nData2라는 변수는 main()에서 새로 선언해줘야함.
    return 0;
}