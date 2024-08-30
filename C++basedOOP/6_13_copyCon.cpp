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
    CMotor(CMotor& motor)   //복사생성자. 객체 생성시 인수로 다른 객체를 넣어주면 motor라는 참조자 매개변수는 같은 메모리 공간을 가리키는 별명으로서 작동함.
    {
        cout << "복사 생성자" << endl;
        m_nWidth = motor.m_nWidth;  m_nLength = motor.m_nLength;    //motor라는 별명이 가리키는 곳의 값을 복사해서 생성할 객체의 멤버변수에 할당함.
        *m_pHeight = *motor.m_pHeight;
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
    CMotor K5(1860, 4905, 1000);               
    CMotor K7=K5;   //CMotor K7(K5)와 동일한 표현,  
    K5.Printout();  K7.Printout();             

    cout << "데이터 변동을 줍니다\n";
    K5.Change(1900, 5000, 2000);               
    K5.Printout();      K7.Printout();  
    //명시적 복사생성자를 이용하면 동적으로 선언된 멤버변수도 메모리가 공유되는 것이 아닌 복사되게 만들 수 있음.        
                                                 

    return 0;
}