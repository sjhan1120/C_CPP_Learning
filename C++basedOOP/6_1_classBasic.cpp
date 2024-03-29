//class를 설계하고 이를 객체로 만들어 사용하는 기본적인 프로그램.
#include <iostream>
using namespace std;

class CMotor    //(1) class선언: MFC와 같은 고급언어에서는 calss 이름 앞에는 보통 C를 붙여 사용. 생략해도 무방.
{
private:        //(2) 3개의 멤버변수를 private로 선언, CMotor class 내에서만 사용가능. 즉, Grandeur.m_nWidth 같은거 못함.
    const char *m_pCarName;
    int m_nWidth, m_nLength;

public:         //(3) 1개의 멤버함수를 public으로 선언, 외부 main()에서 사용 가능
    void Dimension(const char *strName, int x, int y)   //(4) 멤버함수 실행부분 코딩
    {
        m_pCarName=strName;     //(5) 멤버함수를 통해 차종과 제원을 전달받아 private로 선언한 멤버변수에 접근이 가능하도록 정보은닉하는 과정.
                                //    private로 선언한 멤버함수 m_pCarName은 main()함수에서 직접적으로 접근할 수 없음.
                                //    접근하려면 public으로 선언한 멤버함수를 경유하여야 한다.
                                //    m_pCarName을 public 접근제어지시자로 바꾸면 여타 함수에서도 접근 가능하므로 정보의 은닉 불가능.
        m_nWidth=x;     m_nLength=y;
        cout<<"차종 : " << m_pCarName<<", ";
        cout<<"폭 : " << m_nWidth<<", ";
        cout<<"길이 : " << m_nLength<<endl;
    }
};

int main()
{
    CMotor Grandeur, Genesis;                   //(6) 설계도인 CMotor class를 이용하여 메모리에 객체 2개를 생성하는 과정
    Grandeur.Dimension("그랜저", 1875, 4990);   //(7) 독립적인 각각의 객체가 공유하는 멤버함수에 각각의 데이터 전송.
    Genesis.Dimension("제네시스", 1925, 4995);
    return 0;
}