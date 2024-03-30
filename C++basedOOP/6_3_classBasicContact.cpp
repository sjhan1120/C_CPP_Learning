#include <iostream>
using namespace std;

class CMotor
{
//private:    // (2)
public:
    const char *m_pCarName;
    int m_nWidth, m_nLength;
public:
    void Dimension(const char *strName, int x, int y);
};

void CMotor::Dimension(const char *strName, int x, int y) // (2) 외부에 멤버함수 원형에 대한 상세코드 입력
{
    m_pCarName=strName;
    m_nWidth=x; m_nLength=y;

    cout<<"차종 : " << m_pCarName<<", ";
    cout<<"폭 : " << m_nWidth<<", ";
    cout<<"길이 : " << m_nLength<<endl;
}

/*int main()
{
    CMotor Grandeur, Genesis;
    Grandeur.Dimension("그랜저", 1875, 4990);
    Genesis.Dimension("제네시스", 1925, 4995);
    //cout<<Grandeur.m_nWidth<<endl; // (1) Grandeur 객체 멤버변수 m_nWidth 접근시도 : 에러발생
    cout<<Grandeur.m_nWidth<<endl;
    return 0;
}*/

//클래스를 동적으로 객체 생성하는 경우는 구조체와 같은 방법을 사용함. main()을 다음과 같이 수정하면 동일한 결과가 나옴.
int main()
{
    CMotor Grandeur;
    CMotor* pGenesis = new CMotor;
    Grandeur.Dimension("그랜저", 1875, 4990);
    pGenesis->Dimension("제네시스", 1925, 4995);
    cout << Grandeur.m_nWidth << endl;
    cout << pGenesis->m_nWidth << endl;
}