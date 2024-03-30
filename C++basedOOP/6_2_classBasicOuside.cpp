#include <iostream>
using namespace std;

class CMotor
{
private:
    const char *m_pCarName;
    int m_nWidth, m_nLength;
public:     // (1)
    void Dimension(const char *strName, int x, int y); // (1) 멤버함수 원형 선언, 선언 마지막에 반드시 ; 으로 마감하여야 함.
    // {
    //      :
    // }
};

void CMotor::Dimension(const char *strName, int x, int y) // (2) 외부에 멤버함수 원형에 대한 상세코드 입력
{
    m_pCarName=strName;
    m_nWidth=x; m_nLength=y;

    cout<<"차종 : " << m_pCarName<<", ";
    cout<<"폭 : " << m_nWidth<<", ";
    cout<<"길이 : " << m_nLength<<endl;
}

int main()
{
    CMotor Grandeur, Genesis;
    Grandeur.Dimension("그랜저", 1875, 4990);
    Genesis.Dimension("제네시스", 1925, 4995);
    return 0;
}