#include <iostream>
using namespace std;

class CMotor
{
private:
    int m_nWidth, m_nLength;        //(1)
    int* m_pHeight = new int;       //동적으로 멤버변수 메모리 할당

public:
    CMotor()
    {
        cout<<"기본 생성자"<<endl;
    }
    CMotor(int x, int y, int z)
    {
        cout<<"오버로딩 생성자"<<endl;
        m_nWidth=x; m_nLength=y;    *m_pHeight=z;
    }
    void Change(int x, int y, int z)
    {
        m_nWidth=x; m_nLength=y;    *m_pHeight=z;
    }
    void Printout()
    {
        cout<<"폭:"<<m_nWidth<<", 길이:"<<m_nLength<<", 높이:"<<*m_pHeight<<endl;
    }
};


int main()
{
    CMotor K5(1860, 4905, 1000);                 //(2)
    CMotor K7=K5;   //CMotor K7(K5)와 동일한 표현,  (3)

    K5.Printout();  K7.Printout();               //(4)

    K5.Change(1900, 5000, 2000);                 //(5)
    cout << "데이터 변동을 줍니다\n";
    K5.Printout();      K7.Printout();           //(6) 2개의 매개변수는 별도 메모리 공간을 차지하지만,
                                                 //동적으로 할당된 경우는 복사과정에서 주소가 복사되므로 동일한 메모리 공간을 차지하고 있어 주의필요.

    return 0;
}