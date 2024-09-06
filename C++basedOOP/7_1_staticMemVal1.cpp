#include <iostream>
using namespace std;

class CMotor
{
public:
    int m_nWidth;
    static int m_nLength;   // (1) 정적 멤버변수 선언
};

int CMotor::m_nLength;      // (2) 전역으로 공유되는 멤버변수 선언

int main()
{
    CMotor Grandeur, NewGrandeur;
    CMotor::m_nLength=4990; // (3) 정적 멤버변수, 메모리 공유

    cout<<"정적멤버변수 값: "<<CMotor::m_nLength<<endl;
    cout<<"그랜저 길이: " <<Grandeur.m_nLength<<endl;
    cout<<"뉴그랜저 길이:"<<NewGrandeur.m_nLength<<endl;
    return 0;
}