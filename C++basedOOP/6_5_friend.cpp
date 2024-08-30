#include <iostream>
using namespace std;

class CEVCar
{
friend int main();      //(1)class CEVCar 외부중에서 int main() 함수와 CHEVCar class가 접근이 가능하도록 friend 선언
friend class CHEVCar;  

private:
    int m_nWidth=10;

    void Steer(int deg)
    {
        cout<<"Steer contorl : "<<deg<<endl;
    }
};

class CHEVCar
{
    CEVCar evcar2;
public:
    void Dimension()
    {
        evcar2.m_nWidth*=10;
        cout<<"width 2: "<<evcar2.m_nWidth<<endl;
    }
};

int main()
{
    CEVCar evcar;
    evcar.Steer(30);    //(2)class CEVCar의 객체 evcar의 멤버함수 호출
    cout<<"width 1 : "<<evcar.m_nWidth<<endl;   //(3)class CEVCar의 객체 evcar의 멤버변수 출력

    CHEVCar hevcar;
    hevcar.Dimension(); //(4)class CHEVCar 객체 hevcar의 멤버함수 호출 

    return 0;
}