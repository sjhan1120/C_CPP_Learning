#include <iostream>
using namespace std;

class CMotor
{
protected:
    const char *m_pCarName;
    int m_nWidth, m_nLength;
public:
    void Dimension(const char *strName, int x, int y)
    {
        m_pCarName=strName;
        m_nWidth=x; m_nLength=y;
        cout<<"차종 : "<< m_pCarName<<", ";
        cout<<"폭 : " << m_nWidth<<", ";
        cout<<"길이 : " << m_nLength<<endl;
    }
};

class CNewMotor : public CMotor // 자식 class CNewMotor
{
public:
    int m_nWidth=10;    // 부모 class 멤버변수와 동일한 멤버변수 선언
    void Area()
    {
        int nSize=m_nWidth * m_nLength; // (1) 자식 멤버변수
        //int nSize=CMotor::m_nWidth * m_nLength; // (2) 부모 멤버변수
        cout<<"면적 : "<<nSize<< endl;
    }
};

int main()
{
    CNewMotor Genesis;

    Genesis.Dimension("제네시스", 1925, 4995);
    Genesis.Area();
    return 0;
}