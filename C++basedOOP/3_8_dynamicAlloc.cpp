#include <iostream>
#include <string>
using namespace std;

int main()
{
    int *pA = new int;                  //(1) 정수형 동적 메모리 할당(32bit)
    *pA = 100;                          //(2) 할당된 정수 메모리에 데이터 저장

    auto *pB=new auto(200);             //(3) 정수형 동적 메모리 할당하고 초기화

    cout<<"pA Value : "<<*pA<<endl;
    cout<<"pB Value : "<<*pB<<endl;
    delete pA, pB;                      //(4) 사용을 마친 2개의 동적 메모리 해제

    int *pData=new int [5];             //(5) 정수형 배열 메모리 할당
    if(!pData) return 0;                //(6) 할당되었는지 확인, 할당되면 특정 주소값 반환, 할당이 안되면 NULL, 0반환

    for(int i=0; i<5; i++) pData[i] = i*10;

    cout<<"pData[2] : "<< pData[2] << endl;
    delete [] pData;                    //(7) 사용을 마친 정수 배열형 동적 메모리 해제

    int *pC=new int [4] {10, 20, 30, 40};   //(8) 정수형 배열 동적 메모리 할당 및 초기화
    cout<<pC[0]+pC[1]<<endl;
    delete [] pC;

    string *pStr=new string[2];         //(9) string class를 이용한 문자열 변수 동적 메모리 할당
    if(!pStr) return 0;

    pStr[0]="Korea is ";
    pStr[1]="Very Good";

    cout<<pStr[0]+pStr[1];


    return 0;
}                                       //(10) 동적 할당 메모리 pStr은 }를 만나 메모리에서 자동으로 해제