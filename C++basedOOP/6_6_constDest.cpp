#include <iostream>
using namespace std;

class CMotor
{
private:
    const char *m_pCarName;
    int m_nWidth, m_nLength;

public:
    CMotor()    //(1) 생성자
    {
        cout<<"생성자"<<endl;
    }
    ~CMotor()   //(2) 소멸자
    {
        cout<<"소멸자"<<endl;
    }
};

int main()
{
    cout<<"시작\n";
    CMotor Grandeur, Genesis;   //(3) 객체 2개 생성, 생성과 동시에 생성자 자동으로 2번 호출
    cout<<"중간프로그램--\n";
    return 0;
}   //(4) }를 만나 생성된 2개의 객체를 메모리에서 해제하면서 자동으로 소멸자 호출하는 과정.