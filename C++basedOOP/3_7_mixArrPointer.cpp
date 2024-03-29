#include <iostream>
using namespace std;
int main()
{
    const char *pstrData[4] = {"ASAN", "CHEONAN", "SEOUL", "DAEJEON"};  //1차원 배열에 포인터를 붙이면 2차원이 됨.
                                                                        //배열원소 첨자 "4"는 행의 크기를 나타내고, "*"은 열을 나타냄.
                                                                        //따라서 char *pstrData[4]는 strData[4][]와 같은 선언임.
    cout<<"0행 출력 = "<<pstrData[0]<<", "<<*pstrData<<endl;
    cout<<"2행 출력 = "<<pstrData[2]<<", "<<*(pstrData+2)<<endl;

    for(int k = 0; k<4; k++)
    {
        cout<<*(pstrData+k)<<" = ";
        cout<<pstrData[k]<<endl;
    }
    return 0;
}