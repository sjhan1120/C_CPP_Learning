#include <iostream>
using namespace std;

class CMotor
{
private:
    const char *m_pCarName;
    int m_nWidth, m_nLength;

public:
    CMotor()    //기본 생성자
    {
        cout<<"기본 생성자"<<endl;
    }
    CMotor(int x)
    {
        cout<<"오버로딩 생성자1"<<endl;
        m_nWidth=x;
        cout<<m_nWidth<<endl;
    }
    CMotor(int x, int y)    // 오버로딩 생성자
    {
        cout<<"오버로딩 생성자2"<<endl;
        m_nWidth=x; m_nLength=y;
    }
    CMotor(const char* strName, int x, int y)   // 오버로딩 생성자
    {
        cout<<"오버로딩 생성자3"<<endl;
        m_pCarName=strName;
        m_nWidth=x; m_nLength=y;
    }
};
int main()
{
    CMotor Grandeur;    //기본 생성자 동작
    CMotor K7(1925);    //오버로딩 생성자1 동작
    CMotor SM7(1925, 4995);     //오버로딩 생성자2 동작
    CMotor Genesis("제네시스", 1925, 4995);     //오버로딩 생성자3 동작
    return 0;
}