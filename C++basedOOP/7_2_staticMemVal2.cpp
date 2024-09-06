#include <iostream>
using namespace std;

class CMotor
{
public:
    int m_nWidth;
    static int m_nLength;  
};

int CMotor::m_nLength(4990);   // (1)초기값 입력
// int CMotor::m_nLength=4990; // 상기와 동일한 표현

int main()
{
    CMotor Grandeur, NewGrandeur;
  //  CMotor::m_nLength=4990;

    cout<<"정적멤버변수 값: "<<CMotor::m_nLength<<endl;
    cout<<"그랜저 길이: " <<Grandeur.m_nLength<<endl;
    Grandeur.m_nLength=4995;
    cout<<"뉴그랜저 길이:"<<NewGrandeur.m_nLength<<endl;
    return 0;
}