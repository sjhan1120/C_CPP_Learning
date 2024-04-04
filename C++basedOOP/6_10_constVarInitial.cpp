#include <iostream>
using namespace std;

class CMotor
{
private:
    int m_nWidth, m_nLength;
    int* m_pHeight = new int(300);   //(1) 동적 메모리 할당에서 초기화

public:
    CMotor() : m_nWidth(1000), m_nLength(2000)  //(2) 기본 생성자를 이용한 멤버변수 초기화. 단, 동적 메모리의 상수 값 초기화는 { }에서 처리
    {
        *m_pHeight=800;
    }
    CMotor(int x, int y)    //(3) 일반적인 초기화 방법
    {
        m_nWidth = x; m_nLength = y;
    }

    //(4) (3)의 다른 방법, 여기서 동적 멤버변수는 주소를 이용하여 초기화하여야 한다.
    //    단 일부 컴파일러에서는 포인터로 선언된 경우 버그가 발생할 수 있다.
    CMotor(int x, int y, int z) : m_nWidth(x), m_nLength(y), m_pHeight(&z)
    {

    }
    void Printout()
    {
        cout<<m_nWidth<<","<<m_nLength<<","<<*m_pHeight << endl;
    }
};

int main()
{
    CMotor K5;
    CMotor K7(1860, 4905);
    CMotor K9(2000, 5000, 1000);
    K5.Printout();
    K7.Printout();
    K9.Printout();
    return 0;
}